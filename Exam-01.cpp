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
        
*/

#include <iostream>
#include <cstdio> // = stdio.h

int main()
{
    int a =10;
    scanf("%d", &a); // &a: dia chi cua bien a
    printf("Gia tri cua a la: %d\n", a);
    return 0;
}
