#include <iostream>
using namespace std;

// 基类 Animal
class Animal {
public:
    // 虚函数 speak
    virtual void speak() const {
        cout << "Animal speaks" << endl;
    }
};

// 派生类 Dog
class Dog : public Animal {
public:
    // 重写基类的虚函数 speak
    void speak() const override {
        cout << "Dog barks" << endl;
    }
};

// 派生类 Cat
class Cat : public Animal {
public:
    // 重写基类的虚函数 speak
    void speak() const override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptrAnimal; // 基类指针

    Dog dog;
    Cat cat;

    ptrAnimal = &dog;
    ptrAnimal->speak(); // 输出：Dog barks

    ptrAnimal = &cat;
    ptrAnimal->speak(); // 输出：Cat meows

    return 0;
}

