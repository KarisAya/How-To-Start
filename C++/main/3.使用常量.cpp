#include <iostream>
using namespace std;

int constant() {
	//����ֻ�ܳ�ʼ�������ܸ�ֵ��
	const int c = 299792458;//m/s
	/*���ԶԸ������������������*/
	//c = 0;//����"c"���ܸ�������ֵ
	int* pt = (int*)&c;
	*pt = 0;
	cout << c << endl;//299792458
	/*ʧ��*/
	*(int*)(void*)&c = 0;
	cout << c << endl;//299792458
	/*�ڶ��δ��ʧ��*/
#define c 0
	cout << c << endl;//0
	cout << *pt << endl;//0
	/*��ά���*/

	system("pause");
	return 0;
}