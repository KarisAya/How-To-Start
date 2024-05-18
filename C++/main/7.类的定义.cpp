#include <iostream>
#include <string>
using namespace std;

class node {
public:
	string str;
	node* next;
	node(string str):str(str),next(nullptr) {};
};

class list {
private:
	node* head;
	node* tail;
public:
	//构造函数
	list() :head(nullptr) {};
	//下标运算符
	string& operator[](int index) {
		node* next = head;
		for (int i = 0; i < index; i++) { next = next->next; }
		return next->str;
	}
	void append(string str) {
		node* newNode = new node(str);//在内存中创建一个节点，并分配地址。malloc
		if (head == nullptr) { head = newNode; }
		else { (*tail).next = newNode; }
		tail = newNode;
		return;
	}
	int lenth(){
		node* next = head;
		int i = 0;
		while (next != nullptr) { next = next->next; i++; }
		return i;
	}
};
#define id(x) &x

int myclass1() {
	list mylist;
	mylist.append("Hello");
	mylist.append("World");
	mylist.append("I");
	mylist.append("Love");
	mylist.append("You");
	mylist.append("123");
	for (int i = 0; i < mylist.lenth(); i++) {
		cout << mylist[i] << "\t" << id(mylist[i]) << endl;
	}
	system("pause");
	return 0;
}