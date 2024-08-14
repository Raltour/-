//结构体嵌套结构体
#include<stdio.h>
#include<string.h>

//定义地址结构体
typedef struct
{
    char street[50];
    char city[50];
    char state[20];
    char zipCode[10];
}Address;

//定义学生结构体，其中包含一个地址结构体作为成员
typedef struct
{
    char name[50];//姓名
    int age;//年龄
    Address address;//嵌套结构体
}Student;

int main(void)
{
    //创建一个学生变量
    Student student1;

    //给结构体成员赋值
    strcpy(student1.name,"Alice");//复制字符串到name成员
    student1.age = 20;
    //初始化嵌套的结构体地址
    strcpy(student1.address.street,"456 Oak Street");
    strcpy(student1.address.city,"Wonder Land");
    strcpy(student1.address.state,"CA");
    strcpy(student1.address.zipCode,"90210");

    //输出结构体成员的值
    printf("Name:%s\n",student1.name);
    printf("Age:%d\n",student1.age);
    printf("Address:%s,%s,%s,%s\n",
            student1.address.street,
            student1.address.city,
            student1.address.state,
            student1.address.zipCode);

    return 0;
}