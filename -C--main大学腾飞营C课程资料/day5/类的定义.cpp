#include <iostream>
//ԭʼ������https://www.runoob.com/cplusplus/cpp-classes-objects.html
 
using namespace std;
 
class Box
{
   public:
      double length;   // ����
      double breadth;  // ���
      double height;   // �߶�
      // ��Ա��������
      double get(void);
      void set( double len, double bre, double hei );
};
// ��Ա�������壬��13�� 
double Box::get(void)
{
    return length * breadth * height;
}

// ��Ա�������壬��14�� ��˼�� Box������ķ��� set 
void Box::set( double len, double bre, double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

//ע�⣺���������� 
int main( )
{
   Box Box1;        // ���� Box1������Ϊ Box
   Box Box2;        // ���� Box2������Ϊ Box
   Box Box3;        // ���� Box3������Ϊ Box
   double volume = 0.0;     // ���ڴ洢���
 
   // box 1 ����
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;
 
   // box 2 ����
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
 
   // box 1 ���������һ���÷� 
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Box1 �������" << volume <<endl;
   // �����뷭���printf():
   // printf("Box1 �������%d\n", volume); 
 
   // box 2 �����
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Box2 �������" << volume <<endl;
 
   // box 3 �������ڶ����÷� 
   Box3.set(16.0, 8.0, 12.0); 
   volume = Box3.get(); 
   cout << "Box3 �������" << volume <<endl;
   return 0;
}
