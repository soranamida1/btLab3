#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b);
float thuong(int a, int b)
{
return a/b;
}
bool laSoNguyenTo(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{ int a, int b;
cout<<"Nhap gia tri a:";
cin>>a;
cout<<"Nhap gia tri b:";
cin>>b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong ="<<tong(a,b);
	cout<<"hieu="<<hieu(a,b);
	cout<<"tich="<<tich(a,b);
	cout<<"thuong="<<thuong(a,b);
	if(laSoNguyenTo(a)== true){
	cout<<"So "<<a<<"la so nguyen to";}
	system("pause");
	return 0;
	cout<<"Hien so nguyen to";
}