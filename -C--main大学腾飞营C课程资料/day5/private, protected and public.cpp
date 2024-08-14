#include <iostream>
#include <string>

class Base {
private:
    int privateValue; // 只有类内部可以访问

protected:
    std::string protectedString; // 类内部和派生类可以访问

public:
    // 构造函数
    Base(int pv, const std::string& ps) : privateValue(pv), protectedString(ps) {}

    // 公共成员函数，可以访问 private 和 protected 成员
    void showInfo() const {
        std::cout << "Private Value: " << privateValue << std::endl;
        std::cout << "Protected String: " << protectedString << std::endl;
    }

    // 公共成员函数，用于设置 privateValue
    void setPrivateValue(int value) {
        privateValue = value;
    }

    // 公共成员函数，用于获取 privateValue
    int getPrivateValue() const {
        return privateValue;
    }
};

class Derived : public Base {
public:
    // 构造函数
    Derived(int pv, const std::string& ps) : Base(pv, ps) {}

    void display() const {
        // 可以访问 Base 类的 protected 成员
        std::cout << "Derived Access to Protected String: " << protectedString << std::endl;
    }
};

int main() {
    Base baseObj(10, "Hello");
    baseObj.showInfo(); // 可以访问 Base 类的 private 和 protected 成员

    Derived derivedObj(20, "World");
    derivedObj.display(); // 可以访问 Base 类的 protected 成员
    // derivedObj.showInfo(); // 不可以直接访问 Base 类的 private 成员（虽然 showInfo() 是 public）

    return 0;
}

