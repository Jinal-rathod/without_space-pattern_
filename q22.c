// A BC DEF GHIJ KLMNO

#include<stdio.h>

int main()
{   
    char n = 'A';
    for(char i='A';i<='E';i++){
        for(char j='A';j<=i;j++){
            printf("%c\t",n);
            n++;
        }
    printf("\n");
    }
}