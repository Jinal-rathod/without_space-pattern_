// 0 01 010 0101 01010

#include<stdio.h>

int main()
{
    for(int i=2;i<=6;i++){
        for(int j=2;j<=i;j++){
            printf("%d",j%2);
        }
    printf("\n");
    }
}