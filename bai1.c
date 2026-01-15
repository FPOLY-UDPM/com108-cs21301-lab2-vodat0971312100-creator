/******************************************************************************
 * Họ và tên: [ Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
     int a=0;
    int b=0;
    int tong =0;
    // int a,b là khai báo biến, nên khởi tạo biến ban đồng vẫn bằng không vd như dòng 3 tới dòng 5  
    // trong giới lập trình: tiêu sử đặt với cú pháp phải có camelcase Vd thay vì int a thì là int soNguyen_a
    // int x; y; z;
    a= 5;
    b= 10;
    int tong = a + b;
    printf("Tong là: %d\n", tong);
    // dòng 10 %d là biểu diễn cho một số là chỗ trống cho "tong" nhảy vào
    return 0;
}

