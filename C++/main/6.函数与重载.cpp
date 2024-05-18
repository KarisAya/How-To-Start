#include <iostream>
using namespace std;

//定义函数
int add(int a,int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
//重载函数
double add(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}

int swap(int a, int b) {
	int c;
	c = a;
	a = b;
	b = c;
	return 0;
}

int swap(int*a, int*b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return 0;
}
int function() {
	auto a = 15, b = 10;
	cout << add(a, b) << endl;
	cout << sub(a, b) << endl;

	auto c = 10.8, d = 6.9;//同名函数调用由参数决定
	cout << add(c, d) << endl;
	cout << sub(c, d) << endl;

	//传入函数内的参数不被函数修改。
	printf("(a, b) = (%d, %d) swap( a, b) -> ", a, b);
	swap(a, b);
	printf("(%d, %d)\n", a, b);

	//但是可以把地址传给函数让函数通过地址修改外部变量。
	printf("(a, b) = (%d, %d) swap(&a,&b) -> ", a, b);
	swap(&a, &b);
	printf("(%d, %d)\n", a, b);

	system("pause");
	return 0;
}