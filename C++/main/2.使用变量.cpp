#include <iostream>
using namespace std;
int variables() {
	//ʹ�ñ���ǰһ��Ҫ�������������ͣ�
	//�����������ض���
	
	//��ʼ��x,y
	int x = 100;
	int y = 50;
	//δ��ʼ��a,b,c,d
	int a,b,c,d;
	/*
	cout << a;//����ʹ����δ��ʼ���ľֲ�����"a"
	int a = 0;//����aʹ����δ��ʼ���ľֲ�����"a"
	*/
	//������ʹ����������Ϊa,b,c,d��ֵ
	a = x + y; cout << "x + y = " << a << endl;
	b = x - y; cout << "x - y = " << b << endl;
	c = x * y; cout << "x * y = " << c << endl;
	d = x / y; cout << "x / y = " << d << endl;
	//����
	int myint = 0x80000000;//10000000 00000000 00000000 00000000 ��һλΪ��־λ
	unsigned int myuint = 0x0;
	cout << "int ������" << endl;
	cout << "�ڴ��С��" << sizeof(myint) << "�ֽ�" << endl;
	cout << "int ȡֵ��Χ��" << numeric_limits<int>::min() << " - " << numeric_limits<int>::max() << endl;
	cout << "unsigned int ȡֵ��Χ��" << numeric_limits<unsigned int>::min() << " - " << numeric_limits<unsigned int>::max() << endl << endl;

	long mylint = 0x80000000;//long int mylint = 0x80000000;
	unsigned long myulint = 0x0;
	//16λϵͳintռ2�ֽڣ�longռ4�ֽ�
	//32λϵͳintռ4�ֽڣ�longռ4�ֽ�
	cout << "long ��������" << endl;
	cout << "�ڴ��С��" << sizeof(mylint) << "�ֽ�" << endl;
	cout << "long ȡֵ��Χ��" << numeric_limits<long>::min() << " - " << numeric_limits<long>::max() << endl;
	cout << "unsigned long ȡֵ��Χ��" << numeric_limits<unsigned long>::min() << " - " << numeric_limits<unsigned long>::max() << endl << endl;

	long long myllint = 0x8000000000000000;//10000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000//long long int myllint = 0x8000000000000000;
	unsigned long long myullint = 0x0;
	cout << "long long ˫����������" << endl;
	cout << "�ڴ��С��" << sizeof(myllint) << "�ֽ�" << endl;
	cout << "long long ȡֵ��Χ��" << numeric_limits<long long>::min() << " - " << numeric_limits<long long>::max() << endl;
	cout << "unsigned long long ȡֵ��Χ��" << numeric_limits<unsigned long long>::min() << " - " << numeric_limits<unsigned long long>::max() << endl << endl;

	short int mysint = 0x8000;//10000000 00000000//short int mysint = 0x8000
	unsigned short myusint = 0x0;
	cout << "short ��������" << endl;
	cout << "�ڴ��С��" << sizeof(mysint) << "�ֽ�" << endl;
	cout << "short ȡֵ��Χ��" << numeric_limits<short>::min() << " - " << numeric_limits<short>::max() << endl;
	cout << "unsigned short ȡֵ��Χ��" << numeric_limits<unsigned short>::min() << " - " << numeric_limits<unsigned short>::max() << endl << endl;
	
	//�ַ����͡�С��Χ����
	char mychar = 0x80;//1000000
	cout << "char �ַ���" << endl;
	cout << "�ڴ��С��" << sizeof(mychar) << "�ֽ�" << endl;
	printf("char ȡֵ��Χ��%d - %d\n", numeric_limits<char>::min(), numeric_limits<char>::max());
	unsigned char myuchar = 0x0;
	printf("unsigned char ȡֵ��Χ��%d - %d\n", numeric_limits<unsigned char>::min(), numeric_limits<unsigned char>::max());
	mychar = 0b01000001;//"A"��ASCIIֵ
	cout << "mychar = " << mychar << endl << endl;

	//������
	float myfloat = 3.14;
	cout << "float ��������" << endl;
	cout << "�ڴ��С��" << sizeof(myfloat) << "�ֽ�" << endl;
	cout << "float ȡֵ��Χ��" << numeric_limits<float>::min() << " - " << numeric_limits<float>::max() << endl;
	cout << "myfloat = " << myfloat << endl << endl;

	//˫���ȸ�����
	double mydouble = 3.14;
	cout << "double ˫���ȸ�������" << endl;
	cout << "�ڴ��С��" << sizeof(mydouble) << "�ֽ�" << endl;
	cout << "double ȡֵ��Χ��" << numeric_limits<double>::min() << " - " << numeric_limits<double>::max() << endl;
	cout << "mydouble = " << mydouble << endl << endl;

	// ����ֵ
	bool mybool = true;
	cout << "bool ����ֵ��" << endl;
	cout << "�ڴ��С��" << sizeof(mybool) << "�ֽ�" << endl;
	cout << "bool ȡֵ��Χ��" << numeric_limits<bool>::min() << " - " << numeric_limits<bool>::max() << endl;

	system("pause");
	return 0;
}