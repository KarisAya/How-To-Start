#include <iostream>
using namespace std;
/*创建一个str类*/
class str {
public:
    char* data;
    //被字符赋值时的构造函数
    str(const char s) {
        data = new char[2];
        data[0] = s;
        data[1] = '\0';
    }
    //被字符数组赋值时的构造函数
	str(const char* s) {
        data = new char[strlen(s) + 1];
        const char* ptr = s;
        int i = 0;
        while (*ptr != '\0') {
            data[i] = *ptr;
            ptr++;
            i++;
        }
        data[i] = '\0';
    }
    //被str实例赋值时的构造函数
    str(const str& other) : str(other.data) {}

    //析构函数
    ~str() { delete[] data; }
    //重载输出操作符
	friend ostream& operator << (ostream& os, const str& s) { os << s.data; return os; }
    //重载加法运算符
    friend str operator+(const str& s1, const str& s2) {
        char* newChar = new char[strlen(s1.data) + strlen(s2.data) + 1];
        char* ptr = s1.data;
        int i = 0;
        while (*ptr != '\0') {
            newChar[i] = *ptr;
            ptr++;
            i++;
        }
        ptr = s2.data;
        while (*ptr != '\0') {
            newChar[i] = *ptr;
            ptr++;
            i++;
        }
        newChar[i] = '\0';
        str result = str(newChar);
        delete[] newChar;
        return result;
    }
    //重载加法运算符2
    friend str operator+(const str& s1, const char* s2) { return s1 + str(s2); }
    //重载加法运算符3
    friend str operator+(const str& s1, const char s2) { return s1 + str(s2); }
    //字符串地址
    char* id() { return data; }
    //下标运算符
    char& operator[](int index) { return data[index]; }
};

/*创建一个English类,str的子类*/
class English :public  str {
public:
    using str::str;//继承父类的构造方法
    //被str实例赋值时的构造函数
    English(const str s) :str(s.data) {}
    //被English实例赋值时的构造函数
    English(const English& other) : str(other.data) {}
    /*将英文转成大写*/
    void lower() {
        for (int i = 0; i < strlen(data); i++) { if ('A' <= data[i] and data[i] <= 'Z') { data[i] += 32; } }
        return;
    }
    /*将英文转成小写*/
    void upper() {
        for (int i = 0; i < strlen(data); i++) { if ('a' <= data[i] and data[i] <= 'z') { data[i] -= 32; } }
        return;
    }
};

int myclass2() {
    str hello = "hello";
    English world = "world";
    world.upper();
    cout << world[4] << '\n';
    str a = hello + ' ' + world;
    cout << a << '\n';
	system("pause");
	return 0;
}