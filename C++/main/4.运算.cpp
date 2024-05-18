#include <iostream>
using namespace std;
int operation() {
	int a = 0x0FF0;
	int b = 0x00FF;
	//向左移位 00001111 << 2 -> 00111100
	cout << hex << "向左移位 " << a << " << 4 -> " << (a << 4) << endl;
	//向右移位 00001111 >> 2 -> 00000011
	cout << hex << "向右移位 " << a << " >> 4 -> " << (a >> 4) << endl;
	//按位取反 ~10101010 -> 01010101
	cout << hex << "按位取反 " << a << " -> " << ~a << endl;
	//按位与 00000110 & 00000011 -> 00000010
	cout << hex << "按位与 " << a << " & " << b << " -> " << (a & b) << endl;
	//按位或 00000110 | 00000011 -> 00000111
	cout << hex << "按位或 " << a << " & " << b << " -> " << (a | b) << endl;
	//按位异或 00000110 ^ 00000011 -> 00000101
	cout << hex << "按位异或 " << a << " & " << b << " -> " << (a ^ b) << endl;
	//逻辑运算 与
	cout << "与" << endl;
	cout << "1 && 0 -> " << (1 && 0) << endl;
	cout << "1 && 1 -> " << (1 && 1) << endl;
	cout << "0 && 0 -> " << (0 && 0) << endl;
	//逻辑运算 或
	cout << "或" << endl;
	cout << "1 || 0 -> " << (1 || 0) << endl;
	cout << "1 || 1 -> " << (1 || 1) << endl;
	cout << "0 || 0 -> " << (0 || 0) << endl;
	//逻辑运算 非
	cout << "非" << endl;
	cout << "!1 -> " << !1 << endl;
	cout << "!0 -> " << !0 << endl;
	//三目运算符
	cout << "三目运算符" << endl;
	cout << "0x0FF0 <= 0x00FF ? \"0x0FF0不大于0x00FF\":\"0x0FF0大于0x00FF\" -> " << (0x0FF0 <= 0x00FF ? "0x0FF0不大于0x00FF" : "0x0FF0大于0x00FF") << endl;
	//指针运算符
	cout << "指针运算符" << " a= " << a << endl;
	cout << "取地址符" << endl;
	cout << "&a = " << &a << endl;
	cout << "取值符" << endl;
	cout << "*" << &a << " = " << *&a << endl;

	system("pause");
	return 0;
}