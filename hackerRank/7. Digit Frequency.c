#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char num[1000];
    scanf("%s", num);
    int count = 0;
    int len = strlen(num);
    printf("%d", len);
    
    while( len >= 0){
        for (int i = 0; i< len; i++){
            for (int j = i+1; j<len; j++ ){
                if (num[i]==num[j]){
                    count++;
                }
                printf("%d ", count);
                count = 0;
            }
    }
    len--;
    }

    
}