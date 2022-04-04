#include <iostream>

using namespace std;

// ----------------------------------------------------------------------------------------------------
// day gia tri bieu dien : n bit => -2^(n-1) --> 2^(n-1) - 1
// vd : kieu int : 4 byte = 32 bit : 2^31 --> 2^31 - 1 : -2147483648 --> 2147483647

// kieu du lieu:
// so:     so nguyen:  int : 4 byte :
//                     long long : 8 byte :
//                     (unsigned [kieu du lieu]) : chi tinh phan duong : gia tri : 0 --> 2^(n) -1

//         so thuc:    float :
//                     double :
// ky tu:              char : 1 byte
// boolean:            bool : 1 byte

// khai bao bien:
//     kieu_du_lieu ten_bien;
//     kieu_du_lieu ten_bien = gia_tri;

// cin >> ten_bien; : nhap du lieu vao bien
// cout << ten_bien; : xuat du lieu trong bien ra man hinh console

// ----------------------------------------------------------------------------------------------------

// ----------------------------------------------------------------------------------------------------
int main()
{
    cout << "Kich co cua char la: " << sizeof(char) << " Gia tri bieu dien  la: " << CHAR_MIN << " - " << CHAR_MAX << endl;
    cout << "Kich co cua int la: " << sizeof(int) << " Gia tri bieu dien la: " << INT_MIN << " - " << INT_MAX << endl;
    cout << "Kich co cua long long la: " << sizeof(long long) << " Gia tri bieu dien la: " << LLONG_MIN << " - " << LLONG_MAX << endl;
    // cout << "Kich co cua float la: " << sizeof(float) <<" Gia tri bieu dien la: "<< FLT_MIN <<" - "<< FLT_MAX <<endl;
    // cout << "Kich co cua double la: " << sizeof(double) <<" Gia tri bieu dien la: "<< DBL_MIN <<" - "<< DBL_MAX <<endl;

    int a, b, c;
    cout << "Nhap a, b, c : " << endl;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
}