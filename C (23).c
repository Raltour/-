//解一元二次方程
#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c;
    printf("方程ax^2+bx+c=0,请依次输入a,b,c的值用,隔开\n");
    scanf("%f,%f,%f",&a,&b,&c);
    printf("%f,%f,%f",a,b,c);

    float discriminant,x,x1,x2;
    discriminant = (b*b)-(4*a*c);
    if (discriminant < 0)
    {
        printf("该方程无实数解");
    }
        else if(discriminant = 0)
        {
            x = (-b)/2*a;
            printf("方程有唯一实数解%f",x);
        }
        else
        {
            x1 = ((-b)+sqrt(discriminant))/2*a;
            x2 = ((-b)-sqrt(discriminant))/2*a;
            printf("方程有两个实数解%f与%f",x1,x1);
        }

    return 0;
}