// Array

#include <stdio.h>

int main(){

    // ตัวแปรเก็บค่าตัวเลข
    int num[5] = {1, 2, 3, 4, 5};

    // แสดงค่าตัวแปร
    printf("%d\n", num[0]);

    // แสดงค่าตัวแปรทุกตัว
    for(int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }

    // แสดงค่าตัวแปรทุกตัว
    for(int i = 0; i < 5; i++){
        printf("%d ", i);
    }

    return 0;
}