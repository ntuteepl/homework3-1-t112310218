#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
void printString(char String[], bool TurnLine){
    for(int i = 0; i < strlen(String); i ++){
        printf("%c", String[i]);
    }
    if(TurnLine) printf("\n");
}
 
void getar(int ar[], int n){
    int state = 0;
    while(n > 0){
        ar[state] = n % 10;
        state++;
        n /= 10;
    }
}
 
void main()
{
    int anr, input;
    int anr_ar[4], input_ar[4];
    int na, nb;
    int k,q;
    scanf("%d", &anr);
    getar(anr_ar, anr);
 
    while(1){
        scanf("%d", &input);
        if(input == 0) break;
 
        na = 0;
        nb = 0;
        getar(input_ar, input);
 
        for(int i = 0; i < 4; i++){
            if(input_ar[i] == anr_ar[i]){
                na += 1;
            }else{
                for(int j = 0; j < 4; j++){
                    if(i != j && input_ar[i] == anr_ar[j]) nb += 1;
                }
            }
        }
 
        printf("%d", na);
        printf("A");
        printf("%d", nb);
        printf("B\n");
    }
}
