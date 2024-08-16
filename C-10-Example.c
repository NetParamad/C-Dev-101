#include <stdio.h>

int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
        if(score >= 0 && score <= 59){
        printf("Grade F \n");
    }
    else if(score >= 60 && score <= 64){
        printf("Grade D \n");
    }
    else if(score >= 65 && score <= 69){
        printf("Grade D+ \n");
    }
    else if(score >= 70 && score <= 74){
        printf("Grade C \n");
    }
    else if(score >= 75 && score <= 79){
        printf("Grade C+ \n");
    }
    else if(score >= 80 && score <= 84){
        printf("Grade B \n");
    }
    else if(score >= 85 && score <= 89){
        printf("Grade B+ \n");
    }
    else if(score >= 90 && score <= 94){
        printf("Grade A \n");
    }
    else if(score >= 95 && score <= 100){
        printf("Grade A+ \n");
    }
    else{
        printf("Invalid score");
    }
    return 0;
}

