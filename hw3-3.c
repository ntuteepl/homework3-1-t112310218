#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printString(char String[], bool TurnLine){
    for(int i; i < strlen(String); i ++){
        printf("%c", String[i]);
    }
    if(TurnLine) printf("\n");
}

int getcount(int n){
    int a, b = 0;
    while(n > 0){
        a = n % 10;
        b = b + a;
        n = n / 10;
    }
    return b;
}

void main()
{
    int i1, i2;
    int c1, c2;
    scanf("%d%d", &i1, &i2);

    c1 = getcount(i1);
    c2 = getcount(i2);

    if(c1 > c2){
        printf("%d", i2);
    }else if(c1 < c2){
        printf("%d", i1);
    }else{
        printf("%d", (i1 > i2)? i2 : i1);
    }
}
