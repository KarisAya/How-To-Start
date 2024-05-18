#include <iostream>
using namespace std;

int constant() {
	//常量只能初始化，不能赋值。
	const int c = 299792458;//m/s
	/*尝试对该文明进行物理规则打击*/
	//c = 0;//报错："c"不能给常量赋值
	int* pt = (int*)&c;
	*pt = 0;
	cout << c << endl;//299792458
	/*失败*/
	*(int*)(void*)&c = 0;
	cout << c << endl;//299792458
	/*第二次打击失败*/
#define c 0
	cout << c << endl;//0
	cout << *pt << endl;//0
	/*降维打击*/

	system("pause");
	return 0;
}