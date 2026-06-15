/*
-----+ Variables and Constants in C/C++ +-----
char = 1 byte = 8 bits = %d (trong C/C++ char la 1 kieu du lieu co san, khong phai 1 class nhu string)
bool = 1 byte = 8 bits = %d (trong C/C++ bool la 1 kieu du lieu co san, khong phai 1 class nhu string)
int = 4 bytes = 32 bits = %d (trong C/C++ int la 1 kieu du lieu co san, khong phai 1 class nhu string)
float = 4 bytes = 32 bits = %f (trong C/C++ float la 1 kieu du lieu co san, khong phai 1 class nhu string)
double = 8 bytes = 64 bits = %lf (trong C/C++ double la 1 kieu du lieu co san, khong phai 1 class nhu string)
long = 8 bytes = 64 bits = %ld (trong C/C++ long la 1 kieu du lieu co san, khong phai 1 class nhu string)
long long = 8 bytes = 64 bits = %lld (trong C/C++ long long la 1 kieu du lieu co san, khong phai 1 class nhu string)
string = 24 bytes = 192 bits (trong C++ string la mot class, khong phai kieu du lieu co san) = %s

-----+ Nhap/Xuat C/C++ +-----
printf("lenh in ra"); // In ra
scanf("%d", &a); // Nhap vao gia tri cho bien a

-----+ Toan tu trong C/C++ +-----
+ Cong
- Tru
* Nhan
/ Chia
% Chia lay du
= Gan
== So sanh bang
!= So sanh khong bang
> So sanh lon hon
< So sanh nho hon
>= So sanh lon hon hoac bang
<= So sanh nho hon hoac bang
&& Toan tu logic AND
|| Toan tu logic OR
! Toan tu logic NOT

------+ Luu y +-----
- Trong C/C++, 0 duoc xem la false, bat ky gia tri khac 0 duoc xem la true
- Trong C/C++, int va float co the duoc gan gia tri cua nhau (int se duoc chuyen doi sang float khi gan, va ngược lại float se duoc chuyen doi sang int khi gan)
- Trong C/C++, khi in ra gia tri cua bien, can su dung format specifier phu hop voi kieu du lieu cua bien do (%d cho int, %f cho float, %lf cho double, %c cho char, %s cho string, %d cho bool)    


*/

#include <iostream>
#include <cstdio> // = stdio.h

int main()
{
    // Khai bao va khoi tao cac bien co kieu du lieu co san trong C/C++
    int x=10; // Khai bao va khoi tao bien x co kieu int va gia tri la 10
    float y=3.14; // Khai bao va khoi tao bien y co kieu float va gia tri la 3.14
    double z=2.71828; // Khai bao va khoi tao bien z
    char c='A'; // Khai bao va khoi tao bien c co kieu char va gia tri la 'A'
    bool isTrue=true; // khai bao va khoi tao bien isTrue co kieu bool va gia tri la true
    std::string str="Hello, World!"; // Khai bao va khoi tao bien str co kieu string va gia tri la "Hello, World!"
    int i, j, n; // Khai bao 3 bien i, j, n co kieu int
    int sum=0; // Khai bao va khoi tao bien sum co kieu int va gia tri la 0

    // In ra gia tri cua cac bien
    printf("Gia tri cua x la: %d\n", x); // In ra gia tri cua bien x, %d la format specifier cho kieu int
    printf("Gia tri cua y la: %f\n", y); // In ra gia tri cua bien y, %f la format specifier cho kieu float
    printf("Gia tri cua z la: %lf\n", z); // In ra gia tri cua bien z, %lf la format specifier cho kieu double
    printf("Gia tri cua c la: %c\n", c); // In ra gia tri cua bien c, %c la format specifier cho kieu char
    printf("Gia tri cua isTrue la: %d\n", isTrue); // In ra gia tri cua bien isTrue, %d la format specifier cho kieu bool (true se duoc in ra la 1, false se duoc in ra la 0)
    printf("Gia tri cua str la: %s\n", str.c_str()); // In ra gia tri cua bien str, %s la format specifier cho kieu string (str.c_str() tra ve con tro toi chuoi ben trong string)
    // Nhap vao gia tri cho cac bien i, j, n
    scanf("%d", &i); // &i: dia chi cua bien i
    scanf("%d", &j); // &j: dia chi cua bien j
    scanf("%d", &n); // &n: dia chi cua bien n
    printf("Gia tri cua i la: %d\n", i);

    // Thuc hien cac phep toan voi i va j
    printf("i + j = %d\n", i + j); // In ra tong cua i va j
    printf("i - j = %d\n", i - j); // In ra hieu cua i va j
    printf("i * j = %d\n", i * j); // In ra tich cua i va j
    printf("i / j = %d\n", i / j); // In ra thuong cua i va j
    printf("i %% j = %d\n", i % j); // In ra du cua i chia cho j
    printf("i == j: %d\n", i == j); // In ra ket qua so sanh i va j (1 neu i bang j, 0 neu i khac j)
    printf("i != j: %d\n", i != j); // In ra ket qua so sanh i va j (1 neu i khac j, 0 neu i bang j)
    printf("i > j: %d\n", i > j); // In ra ket qua so sanh i va j (1 neu i lon hon j, 0 neu i nho hon hoac bang j)
    printf("i < j: %d\n", i < j); // In ra ket qua so sanh i va j (1 neu i nho hon j, 0 neu i lon hon hoac bang j)
    printf("i >= j: %d\n", i >= j); // In ra ket qua so sanh i va j (1 neu i lon hon hoac bang j, 0 neu i nho hon j
    printf("i <= j: %d\n", i <= j); // In ra ket qua so sanh i va j (1 neu i nho hon hoac bang j, 0 neu i lon hon j)
    printf("(i > j) && (i != j): %d\n", (i > j) && (i != j)); // In ra ket qua cua toan tu logic AND
    printf("(i > j) || (i != j): %d\n", (i > j) || (i != j)); // In ra ket qua cua toan tu logic OR
    printf("!(i > j): %d\n", !(i > j)); // In ra ket qua cua toan tu logic NOT


    return 0;
}
