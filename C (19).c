//结构体案例
#include<stdio.h>
#include<string.h>

//定义学生结构体
typedef struct
{
    char name[50];//姓名
    int age;//年龄
    float gpa;//成绩点
}Student;

int main(void)
{
    //创建一个学生变量
    Student student1;

    //给结构体成员赋值
    strcpy(student1.name,"Alice");//复制字符串到name成员
    student1.age = 20;
    student1.gpa = 3.75;

    //输出结构体成员的值
    printf("Name:%s\n",student1.name);
    printf("Age:%d\n",student1.age);
    printf("GPA:%.2f\n",student1.gpa);

    return 0;
}