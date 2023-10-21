
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printString(char String[], bool TurnLine){
    for(int i; i < strlen(String); i ++){
        printf("%c", String[i]);
    }
    if(TurnLine) printf("\n");
}

int main()
{
    int a;
    scanf("%d", &a);

    for(int i = 2; i < a ;i++ ){
        if(a % i == 0){
            printString("NO", true);
            return 0;
        }
    }

    printString("YES", true);
    return 0;
}

