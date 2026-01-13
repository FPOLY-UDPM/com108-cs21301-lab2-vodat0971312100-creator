/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
   float x,y,z; //x là toán và y là lý và hóa là z
   printf("Diem toan la\n");
   scanf("%f",&x);
   printf("Diem ly la\n");
   scanf("%f",&y);
   printf("Diem hoa la\n");
   scanf("%f",&z);
   printf("Diem trung binh 3 mon la (toan*3+ly*2+hoa)/6= %f",(x*3+y*x+z)/6);
   return 0;


}