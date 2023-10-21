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
    int s1, d1, s2, d2, s3, d3;
    int count, n_use = 0;
    scanf("%d%d%d%d%d%d", &s1, &d1,&s2, &d2, &s3, &d3);

    for(int i = 1; i < 25 ; i++){
        if(i == d1){
            n_use += 1;
        }
        if(i == d2){
            n_use += 1;
        }
        if(i == d3){
            n_use += 1;
        }
        if(i == s1){
            if(n_use == 0){
                count += 1;
            }else{
                n_use -= 1;
            }
        }
        if(i == s2){
            if(n_use == 0){
                count += 1;
            }else{
                n_use -= 1;
            }
        }
        if(i == s3){
            if(n_use == 0){
                count += 1;
            }else{
                n_use -= 1;
            }
        }
    }

    printf("%d\n", count);
}
