// Variables

#include <stdio.h>

int main()
{
    // ตัวแปรชนิดตัวเลข = 5;
    int setInt = 5;
    // ตัวแปรชนิดตัวเลขทศนิยม = 3.14;
    float setFloat = 3.14;
    // ตัวแปรชนิดตัวเลขทศนิยมที่เยอะกว่า float = 2.71828;
    double setDouble = 2.71828;
    // ตัวแปรชนิดตัวอักษร = 'H';
    char setChar = 'H';
    // ตัวแปรชนิดตัวอักษร = "Hello World";
    char setString[] = "Hello World";
    
    // แสดงค่าตัวแปรแต่ละแบบ
    printf("%d\n", setInt);
    printf("%f\n", setFloat);
    printf("%.2lf\n", setDouble);
    printf("%c\n", setChar);
    printf("%s\n", setString);
    return 0;
}