#include <stdio.h>
int main()
{
    freopen("sampleInput5.txt","r",stdin);
    freopen("sampleOutput5.txt","w",stdout);
    char ch;
    int t;
    while(scanf("%c",&ch)==1){
        if(ch!='\n')printf("%c",ch-7);
        else printf("\n");
    }
    return 0;
}