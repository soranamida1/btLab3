#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){

return a*b;

}
float thuong(int a, int b);
bool isPerfectSquare(int n) {
    if (n < 0) return false;  // Số âm không thể là số chính phương

    int sqrt_n = sqrt(n);  // Lấy căn bậc hai của số n
    return (sqrt_n * sqrt_n == n);  // Kiểm tra xem căn bậc hai có phải là số nguyên không
}


int main()
{
	int a; int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Nhap so a";
	cin>>a;
	cout<<"Nhap so b";
	cin>>b;
	cout<<"Tong ="a+b;
	int num;
    std::cout << "Nhập một số: ";
    std::cin >> num;

    if (isPerfectSquare(num)) {
        std::cout << num << " là số chính phương." << std::endl;
    } else {
        std::cout << num << " không phải là số chính phương." << std::endl;
    }
	system("pause");
	return 0;
}