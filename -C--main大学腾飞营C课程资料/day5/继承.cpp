#include <iostream> // 包含输入输出流的头文件
#include <cmath>    // 包含数学函数库，用于 Circle 示例中的 M_PI 常量

using namespace std; // 使用标准命名空间

// 基类 Shape
class Shape {
protected:
    string name; // 基类保护成员变量，表示形状的名称

public:
    // 构造函数，初始化名称
    Shape(const string& n) : name(n) {}

    // 虚函数声明，需要在派生类中重写
    virtual double getArea() const = 0; // 纯虚函数，派生类必须实现该函数
};

// 派生类 Rectangle
class Rectangle : public Shape {
private:
    double width;  // 矩形的宽度
    double height; // 矩形的高度

public:
    // 构造函数，初始化名称、宽度和高度
    Rectangle(const string& n, double w, double h) : Shape(n), width(w), height(h) {}

    // 重写基类的虚函数，计算矩形的面积
    double getArea() const override {
        return width * height;
    }
};

// 派生类 Circle
class Circle : public Shape {
private:
    double radius; // 圆的半径

public:
    // 构造函数，初始化名称和半径
    Circle(const string& n, double r) : Shape(n), radius(r) {}

    // 重写基类的虚函数，计算圆的面积
    double getArea() const override {
        return M_PI * radius * radius; // 使用 M_PI 计算圆的面积
    }
};

// 主函数
int main() {
    // 创建 Rectangle 对象，并计算并输出其面积
    Rectangle rect("Rectangle", 5, 10);
    cout << "Rectangle area: " << rect.getArea() << " square units" << endl;

    // 创建 Circle 对象，并计算并输出其面积
    Circle circle("Circle", 7);
    cout << "Circle area: " << circle.getArea() << " square units" << endl;

    return 0;
}

