// Constants

#include <stdio.h>

int main(){

    // ค่าคงที่
    const int setInt = 5;
    const float setFloat = 3.14;
    const double setDouble = 2.71828;
    const char setChar = 'H';
    const char setString[] = "Hello World";
    // ไม่สามรถเปลี่ยนค่าได้ เช่น (ถ้าอยากให้ run ผ่านต้อง comment ค่านี้ด้วย) 
    setInt = 10;
    // จะ Error ทันที่จบโปรแกรม
    
    // แสดงค่าตัวแปร
    printf("%d\n", setInt);
    return 0;
}