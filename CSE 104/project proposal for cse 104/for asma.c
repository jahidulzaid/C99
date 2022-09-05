#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int printdata();
int kbhit();

int hour=0,minute=0,second=0,flag=0;
void delay( int ms)
{

    clock_t delay=ms+clock();
    while(delay>clock());


int  counter()
{
    while(!kbhit()&&flag==0)
    {
        if(minute>59)
        {
            minute=0;
            ++hour;
        }
        if(second>59)
            second=0;
            ++minute;}
            printdata();
            sleep(1000);

            ++second;
}


     int selection()
     {
         switch(getchar())
         {
             case 49:
                flag=0;
                break;
             case 50:
                flag=1;
                break;
             case 51:
                hour=minute=second=0;
                flag=1;
                printdata();
                break;
             case 52:
                exit(0);
                break;
         }

    }
    int printdata()
    {
        system("cls");
        printf("1.start  2.stop  3.reset  4.end\n");
        printf("#########################################");
        printf("             %d:%d:%d",hour,minute,second);
        printf("#########################################");

    }
    int main()
    {
        while(1)
        {
            counter();
        }
    }

}
