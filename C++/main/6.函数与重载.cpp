#include <iostream>
using namespace std;

//���庯��
int add(int a,int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
//���غ���
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

	auto c = 10.8, d = 6.9;//ͬ�����������ɲ�������
	cout << add(c, d) << endl;
	cout << sub(c, d) << endl;

	//���뺯���ڵĲ������������޸ġ�
	printf("(a, b) = (%d, %d) swap( a, b) -> ", a, b);
	swap(a, b);
	printf("(%d, %d)\n", a, b);

	//���ǿ��԰ѵ�ַ���������ú���ͨ����ַ�޸��ⲿ������
	printf("(a, b) = (%d, %d) swap(&a,&b) -> ", a, b);
	swap(&a, &b);
	printf("(%d, %d)\n", a, b);

	system("pause");
	return 0;
}