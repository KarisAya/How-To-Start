#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// ˵��ָ���Ӧ�ô�ž��������˰ɣ�
typedef struct Node {
	char data;
	Node* next;
}node;

int ArrayPointer() {
	string str = "Hello World";
	/*�����ʼ��*/
	node* chars = (Node*)malloc(sizeof(node));
	node* start = chars;
	/*���ַ�������д������*/
	for (int i = 0; i < str.size(); i++) {
		(*chars).data = str[i];
		(*chars).next = (Node*)malloc(sizeof(node));
		chars = (*chars).next;
	}
	/*�������һ���ڵ㴦��*/
	(*chars).data = '\n';
	(*chars).next = nullptr;
	/*��˳�������������*/
	chars = start;
	while (true) {
		cout << (*chars).data;
		chars = (*chars).next;
		if (chars == nullptr) { break; }
	}
	system("pause");
	return 0;
}