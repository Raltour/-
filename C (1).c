//计算两个数的平均数
#include<stdio.h>//包含标准输入输出库
int main()
{
    double a,b;//注意double类型用lf,float类型用f
    printf("请输入第一个数字：\n");
    scanf("%lf",&a);
    printf("请输入第二个数字：\n");
    scanf("%lf",&b);
    double c; 
    c = (a + b)/2;
    printf("平均数为%lf",c);

    return 0;
}