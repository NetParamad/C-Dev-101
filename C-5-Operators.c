// Operators

#include <stdio.h>

int main(){

// ตัวแปรเก็บค่าตัวเลข
    int num1 = 5;
    int num2 = 10;

// ตัวแปรนำมาบวกกัน
    int add = num1 + num2;
// ตัวแปรนำมาลบกัน
    int sub = num1 - num2;
// ตัวแปรนำมาคูณ
    int mul = num1 * num2;
// ตัวแปรนำมาหาร
    int div = num1 / num2;
// ตัวแปรนำมาหารเอาเศษ
    int mod = num1 % num2;
// ตัวแปรนำมายกกำลัง  
    int pow = num1 ^ num2;
// ตัวแปรนำมา +1
    int inc = num1++;
// ตัวแปรนำมา -1
    int dec = num1--;
    // เลื่อนบิตด้านซ้าย
    int left = num1 << num2;
// เลื่อนบิตด้านขวา
    int right = num1 >> num2;
     
    int result1 = num1 += num2;   //result1 = num1 + num2 , num1 = num1 + num2
    int result2 = num1 -= num2;   //result2 = num1 - num2 , num1 = num1 - num2
    int result3 = num1 *= num2;   //result3 = num1 * num2 , num1 = num1 * num2
    int result4 = num1 /= num2;   //result4 = num1 / num2 , num1 = num1 / num2
    int result5 = num1 %= num2;   //result5 = num1 % num2 , num1 = num1 % num2
    int result6 = num1 ^= num2;   //result6 = num1 ^ num2 , num1 = num1 ^ num2
    int result7 = num1 <<= num2;  //result7 = num1 << num2 , num1 = num1 << num2
    int result8 = num1 >>= num2;  //result8 = num1 >> num2 , num1 = num1 >> num2

// True คือ 1 และ False คือ 0

// เท่ากัน
    int equal = num1 == num2;
// ไม่เท่ากัน
    int notEqual = num1 != num2;
// มากกว่า
    int greater = num1 > num2;
// น้อยกว่า
    int less = num1 < num2;
// มากกว่าหรือเท่ากับ
    int greaterEqual = num1 >= num2;
// น้อยกว่าหรือเท่ากับ
    int lessEqual = num1 <= num2;
// และ ถูก ทั้งหมดถึงจะทำค่าเป็น 1
    int and = num1 && num2;
// หรือ ถูก อย่างน้อย 1 จะทำค่าเป็น 1
    int or = num1 || num2;
//  เปลี่นค่าเป็นตรงข้าม
    int not1 = !num1;
//  เปลี่นค่าเป็นตรงข้าม
    int not2 = ~num1;

    return 0;
}