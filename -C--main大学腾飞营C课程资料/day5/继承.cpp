#include <iostream> // ���������������ͷ�ļ�
#include <cmath>    // ������ѧ�����⣬���� Circle ʾ���е� M_PI ����

using namespace std; // ʹ�ñ�׼�����ռ�

// ���� Shape
class Shape {
protected:
    string name; // ���ౣ����Ա��������ʾ��״������

public:
    // ���캯������ʼ������
    Shape(const string& n) : name(n) {}

    // �麯����������Ҫ������������д
    virtual double getArea() const = 0; // ���麯�������������ʵ�ָú���
};

// ������ Rectangle
class Rectangle : public Shape {
private:
    double width;  // ���εĿ��
    double height; // ���εĸ߶�

public:
    // ���캯������ʼ�����ơ���Ⱥ͸߶�
    Rectangle(const string& n, double w, double h) : Shape(n), width(w), height(h) {}

    // ��д������麯����������ε����
    double getArea() const override {
        return width * height;
    }
};

// ������ Circle
class Circle : public Shape {
private:
    double radius; // Բ�İ뾶

public:
    // ���캯������ʼ�����ƺͰ뾶
    Circle(const string& n, double r) : Shape(n), radius(r) {}

    // ��д������麯��������Բ�����
    double getArea() const override {
        return M_PI * radius * radius; // ʹ�� M_PI ����Բ�����
    }
};

// ������
int main() {
    // ���� Rectangle ���󣬲����㲢��������
    Rectangle rect("Rectangle", 5, 10);
    cout << "Rectangle area: " << rect.getArea() << " square units" << endl;

    // ���� Circle ���󣬲����㲢��������
    Circle circle("Circle", 7);
    cout << "Circle area: " << circle.getArea() << " square units" << endl;

    return 0;
}

