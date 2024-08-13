// Function

#include <stdio.h>

// Function Intger
int functionAdd(int num1, int num2){
    int sum = 0;
    sum = num1 + num2;
    printf("functionAdd : %d + %d = %d\n", num1, num2, sum);
}

// Function Return
int functionAddReturn(int num1, int num2){
    return num1 + num2;
}

// Function String
void fuctionText(char name[]){
    printf("Hello %s\n", name);
}


int main(){

    // ตัวแปรเก็บค่าตัวเลข
    int num1 = 5;
    int num2 = 10; 

    // ตัวแปรนำมาบวกกัน 
    functionAdd(num1, num2);
    int add = functionAddReturn(num1, num2);

    // แสดงค่าตัวแปร
    printf("functionAddReturn : %d\n", add);

    // แสดงค่าตัวแปร
    char name[] = "World";
    fuctionText(name);
    fuctionText("World");

    return 0;
}