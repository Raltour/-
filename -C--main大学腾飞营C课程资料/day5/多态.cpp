#include <iostream>
using namespace std;

// ���� Animal
class Animal {
public:
    // �麯�� speak
    virtual void speak() const {
        cout << "Animal speaks" << endl;
    }
};

// ������ Dog
class Dog : public Animal {
public:
    // ��д������麯�� speak
    void speak() const override {
        cout << "Dog barks" << endl;
    }
};

// ������ Cat
class Cat : public Animal {
public:
    // ��д������麯�� speak
    void speak() const override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* ptrAnimal; // ����ָ��

    Dog dog;
    Cat cat;

    ptrAnimal = &dog;
    ptrAnimal->speak(); // �����Dog barks

    ptrAnimal = &cat;
    ptrAnimal->speak(); // �����Cat meows

    return 0;
}

