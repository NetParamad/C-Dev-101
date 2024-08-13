// Loop

#include <stdio.h>

int main(){

    // while
    int i = 0;
    while(i < 10){
        printf("%d ", i);
        i++;
    }

    // do while
    int i = 0;
    do{
        printf("%d ", i);
        i++;
    }while(i < 10);

    // for
    for(int i = 0; i < 10; i++){
        printf("%d ", i);
    }   

    // break
    for(int i = 0; i < 10; i++){
        if(i == 5){
            break;
        }
        printf("%d ", i);
    }

    // continue
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }

    // goto
    for(int i = 0; i < 10; i++){
        if(i == 5){
            goto label;
        }
        printf("%d ", i);
    }
    label:
    printf("\n");


    return 0;

}