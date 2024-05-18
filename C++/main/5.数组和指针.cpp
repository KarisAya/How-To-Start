#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// 说到指针的应用大概就是链表了吧（
typedef struct Node {
	char data;
	Node* next;
}node;

int ArrayPointer() {
	string str = "Hello World";
	/*链表初始化*/
	node* chars = (Node*)malloc(sizeof(node));
	node* start = chars;
	/*把字符串数据写入链表*/
	for (int i = 0; i < str.size(); i++) {
		(*chars).data = str[i];
		(*chars).next = (Node*)malloc(sizeof(node));
		chars = (*chars).next;
	}
	/*链表最后一个节点处理*/
	(*chars).data = '\n';
	(*chars).next = nullptr;
	/*按顺序输出链表数据*/
	chars = start;
	while (true) {
		cout << (*chars).data;
		chars = (*chars).next;
		if (chars == nullptr) { break; }
	}
	system("pause");
	return 0;
}