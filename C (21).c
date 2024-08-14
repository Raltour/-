//结构体指针
#include<stdio.h>

typedef struct
{
    char name[50];
    int age;
}Person;

int main()
{
    Person person1;

    //使用snprintf确保不会溢出
    snprintf(person1.name,sizeof(person1.name),"Alice");
    person1.age = 30;

    //创建一个指向Person结构体的指针
    Person *ptr = &person1;

    //通过指针访问结构体成员并输出
    printf("Name via pointer: %s\n",ptr->name);
    printf("Age via pointer:%d\n",ptr->age);
    //使用->运算符访问结构体成员

    //通过指针修改结构体成员
    snprintf(ptr->name,sizeof(ptr->name),"Bob");
    ptr->age = 25;

    printf("Modified Name via pointer:%s\n",ptr->name);
    printf("Modified Age via pointer:%d\n",ptr->age);

    return 0;
}