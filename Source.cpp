#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a; int b;
	cout << "DAY LA CHUONG TRINH DE thuc thi so hoan thien";
	def is_perfect_number(n):
    if n <= 1:
        return False
    sum_of_divisors = 1;
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            sum_of_divisors += i
            if i != n // i: # Tránh cộng lặp lại nếu là số chính phương
                sum_of_divisors += n // i
    return sum_of_divisors == n

# Ví dụ sử dụng
int number = 6;
if is_perfect_number(number):
    print(f"{number} là số hoàn hảo")
else:
    print(f"{number} không phải là số hoàn hảo")

int number = 28;
if is_perfect_number(number):
    print(f"{number} là số hoàn hảo")
else:
    print(f"{number} không phải là số hoàn hảo")
	system("pause");
	return 0;
}