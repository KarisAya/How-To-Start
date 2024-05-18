#include <iostream>
using namespace std;
int variables() {
	//使用变量前一定要先声明变量类型！
	//变量不允许重定义
	
	//初始化x,y
	int x = 100;
	int y = 50;
	//未初始化a,b,c,d
	int a,b,c,d;
	/*
	cout << a;//报错：使用了未初始化的局部变量"a"
	int a = 0;//报错：a使用了未初始化的局部变量"a"
	*/
	//接下来使用四则运算为a,b,c,d赋值
	a = x + y; cout << "x + y = " << a << endl;
	b = x - y; cout << "x - y = " << b << endl;
	c = x * y; cout << "x * y = " << c << endl;
	d = x / y; cout << "x / y = " << d << endl;
	//整数
	int myint = 0x80000000;//10000000 00000000 00000000 00000000 第一位为标志位
	unsigned int myuint = 0x0;
	cout << "int 整数型" << endl;
	cout << "内存大小：" << sizeof(myint) << "字节" << endl;
	cout << "int 取值范围：" << numeric_limits<int>::min() << " - " << numeric_limits<int>::max() << endl;
	cout << "unsigned int 取值范围：" << numeric_limits<unsigned int>::min() << " - " << numeric_limits<unsigned int>::max() << endl << endl;

	long mylint = 0x80000000;//long int mylint = 0x80000000;
	unsigned long myulint = 0x0;
	//16位系统int占2字节，long占4字节
	//32位系统int占4字节，long占4字节
	cout << "long 长整数型" << endl;
	cout << "内存大小：" << sizeof(mylint) << "字节" << endl;
	cout << "long 取值范围：" << numeric_limits<long>::min() << " - " << numeric_limits<long>::max() << endl;
	cout << "unsigned long 取值范围：" << numeric_limits<unsigned long>::min() << " - " << numeric_limits<unsigned long>::max() << endl << endl;

	long long myllint = 0x8000000000000000;//10000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000//long long int myllint = 0x8000000000000000;
	unsigned long long myullint = 0x0;
	cout << "long long 双倍长整数型" << endl;
	cout << "内存大小：" << sizeof(myllint) << "字节" << endl;
	cout << "long long 取值范围：" << numeric_limits<long long>::min() << " - " << numeric_limits<long long>::max() << endl;
	cout << "unsigned long long 取值范围：" << numeric_limits<unsigned long long>::min() << " - " << numeric_limits<unsigned long long>::max() << endl << endl;

	short int mysint = 0x8000;//10000000 00000000//short int mysint = 0x8000
	unsigned short myusint = 0x0;
	cout << "short 短整数型" << endl;
	cout << "内存大小：" << sizeof(mysint) << "字节" << endl;
	cout << "short 取值范围：" << numeric_limits<short>::min() << " - " << numeric_limits<short>::max() << endl;
	cout << "unsigned short 取值范围：" << numeric_limits<unsigned short>::min() << " - " << numeric_limits<unsigned short>::max() << endl << endl;
	
	//字符类型、小范围整数
	char mychar = 0x80;//1000000
	cout << "char 字符型" << endl;
	cout << "内存大小：" << sizeof(mychar) << "字节" << endl;
	printf("char 取值范围：%d - %d\n", numeric_limits<char>::min(), numeric_limits<char>::max());
	unsigned char myuchar = 0x0;
	printf("unsigned char 取值范围：%d - %d\n", numeric_limits<unsigned char>::min(), numeric_limits<unsigned char>::max());
	mychar = 0b01000001;//"A"的ASCII值
	cout << "mychar = " << mychar << endl << endl;

	//浮点数
	float myfloat = 3.14;
	cout << "float 浮点数型" << endl;
	cout << "内存大小：" << sizeof(myfloat) << "字节" << endl;
	cout << "float 取值范围：" << numeric_limits<float>::min() << " - " << numeric_limits<float>::max() << endl;
	cout << "myfloat = " << myfloat << endl << endl;

	//双精度浮点数
	double mydouble = 3.14;
	cout << "double 双精度浮点数型" << endl;
	cout << "内存大小：" << sizeof(mydouble) << "字节" << endl;
	cout << "double 取值范围：" << numeric_limits<double>::min() << " - " << numeric_limits<double>::max() << endl;
	cout << "mydouble = " << mydouble << endl << endl;

	// 布尔值
	bool mybool = true;
	cout << "bool 布尔值型" << endl;
	cout << "内存大小：" << sizeof(mybool) << "字节" << endl;
	cout << "bool 取值范围：" << numeric_limits<bool>::min() << " - " << numeric_limits<bool>::max() << endl;

	system("pause");
	return 0;
}