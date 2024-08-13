#include <stdio.h>


int main(){
    
    // กำหนดตัวแปรในการรับข้อมูล
    int setInt;
    float setFloat;
    double setDouble;
    char setChar[1];
    char setString[100];

    // รับข้อมูลแต่ละแบบ
    printf("Enter an integer value: ");
    scanf("%d", &setInt);
    printf("Enter a float value: ");
    scanf("%f", &setFloat);
    printf("Enter a double value: ");
    scanf("%lf", &setDouble);
    printf("Enter a character value: ");
    scanf("%c", &setChar);
    printf("Enter a string value: ");
    scanf("%s", setString);
    printf("Integer: %d\n", setInt);
    printf("Float: %f\n", setFloat);
    printf("Double: %.2lf\n", setDouble);
    printf("Character: %c\n", setChar);
    printf("String: %s\n", setString);
    return 0;
}
