// Conditions

#include <stdio.h>

int main(){

    // if
    int score = 70;
    if(score >= 60){
        printf("Pass");
    }

    // else
    int score = 50;
    if(score >= 60){
        printf("Pass");
    }else{
        printf("Fail");
    }

    // else if
    int score = 50;
    if(score >= 60){
        printf("Pass");
    }else if(score >= 40){
        printf("Pass");
    }else{
        printf("Fail");
    }

    // switch
    int score = 50;
    switch(score){
        case 50:
            printf("Pass");
            break;
        case 40:
            printf("Pass");
            break;
        default:
            printf("Fail");
            break;
    }

    // ternary operator
    int score = 50;
    printf(score >= 60 ? "Pass" : "Fail");

    // nested if
    int score = 50;
    if(score >= 60){
        if(score >= 70){
            printf("Pass");
        }else{
            printf("Fail");
        }
    }else{
        printf("Fail");
    }

    // nested ternary operator
    int score = 50;
    printf(score >= 60 ? (score >= 70 ? "Pass" : "Fail") : "Fail");

    // nested switch
    int score = 50;
    switch(score){
        case 50:
            printf("Pass");
            switch(score){
                case 40:
                    printf("Pass");
                    break;
                default:
                    printf("Fail");
                    break;
            }
            break;
        default:
            printf("Fail");
            break;
    }

    // nested ternary operator
    int score = 50;
    printf(score >= 60 ? (score >= 70 ? (score >= 80 ? "Pass" : "Fail") : "Fail") : "Fail");

    return 0;
}