#include <iostream>
using namespace std;
/*����һ��str��*/
class str {
public:
    char* data;
    //���ַ���ֵʱ�Ĺ��캯��
    str(const char s) {
        data = new char[2];
        data[0] = s;
        data[1] = '\0';
    }
    //���ַ����鸳ֵʱ�Ĺ��캯��
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
    //��strʵ����ֵʱ�Ĺ��캯��
    str(const str& other) : str(other.data) {}

    //��������
    ~str() { delete[] data; }
    //�������������
	friend ostream& operator << (ostream& os, const str& s) { os << s.data; return os; }
    //���ؼӷ������
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
    //���ؼӷ������2
    friend str operator+(const str& s1, const char* s2) { return s1 + str(s2); }
    //���ؼӷ������3
    friend str operator+(const str& s1, const char s2) { return s1 + str(s2); }
    //�ַ�����ַ
    char* id() { return data; }
    //�±������
    char& operator[](int index) { return data[index]; }
};

/*����һ��English��,str������*/
class English :public  str {
public:
    using str::str;//�̳и���Ĺ��췽��
    //��strʵ����ֵʱ�Ĺ��캯��
    English(const str s) :str(s.data) {}
    //��Englishʵ����ֵʱ�Ĺ��캯��
    English(const English& other) : str(other.data) {}
    /*��Ӣ��ת�ɴ�д*/
    void lower() {
        for (int i = 0; i < strlen(data); i++) { if ('A' <= data[i] and data[i] <= 'Z') { data[i] += 32; } }
        return;
    }
    /*��Ӣ��ת��Сд*/
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