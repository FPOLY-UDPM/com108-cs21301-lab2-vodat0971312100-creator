/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COm108]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
     int a,b  ; // Khai báo biến
    printf("Chieu dai cua manh vuon la \n");    // Nhập dữ liệu
    scanf("%d", &a);// Nhập dữ liệu
    printf("Chieu rong cua manh vuon la\n");    // Nhập dữ liệu
    scanf("%d", &b);// Nhập dữ liệu
    printf(" dien tich %d*%d = %d\n",a,b, a*b );  // Xử lý, tính toán
    printf("chu vi = (chieu dai+ chieu rong)*2=%d",(a+b)*2);  // Xử lý, tính toán
    return 0;  // Xử lý, tính toán
    
}

   


