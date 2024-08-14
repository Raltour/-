#include <iostream>
#include <string>

class Base {
private:
    int privateValue; // ֻ�����ڲ����Է���

protected:
    std::string protectedString; // ���ڲ�����������Է���

public:
    // ���캯��
    Base(int pv, const std::string& ps) : privateValue(pv), protectedString(ps) {}

    // ������Ա���������Է��� private �� protected ��Ա
    void showInfo() const {
        std::cout << "Private Value: " << privateValue << std::endl;
        std::cout << "Protected String: " << protectedString << std::endl;
    }

    // ������Ա�������������� privateValue
    void setPrivateValue(int value) {
        privateValue = value;
    }

    // ������Ա���������ڻ�ȡ privateValue
    int getPrivateValue() const {
        return privateValue;
    }
};

class Derived : public Base {
public:
    // ���캯��
    Derived(int pv, const std::string& ps) : Base(pv, ps) {}

    void display() const {
        // ���Է��� Base ��� protected ��Ա
        std::cout << "Derived Access to Protected String: " << protectedString << std::endl;
    }
};

int main() {
    Base baseObj(10, "Hello");
    baseObj.showInfo(); // ���Է��� Base ��� private �� protected ��Ա

    Derived derivedObj(20, "World");
    derivedObj.display(); // ���Է��� Base ��� protected ��Ա
    // derivedObj.showInfo(); // ������ֱ�ӷ��� Base ��� private ��Ա����Ȼ showInfo() �� public��

    return 0;
}

