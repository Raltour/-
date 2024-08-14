//字符串
#include<stdio.h>
#include<string.h>
int main(void)
{
    //声明并初始化一个字符数组
    char str1[20] = "Hello World";
    int len = strlen(str1);
    printf("str:%s\n",str1);
    printf("The length of string:%d\n",len);

    return 0;
}
//设一个字符数组，内容自定，尝试复制与拼接