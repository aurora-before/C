#include <stdio.h>
/*
int main(){
    //创建一个变量
    //类型  变量名字=0 推荐
    //类型  变量名字 不推荐
    int age=20;
    double weight=75.3;
    weight=weight-10;
    age=age+1;
    printf("%d\n",age);
    printf("%1f\n",weight);
    return 0;
}
%d-整型
%f-float
%1f-double
*/

/*
//全局变量
int a=100;
int main(){
    //局部变量
    //当局部变量和全局变量名字冲突的情况下，局部优先
    int a=10;
    printf("%d",a);
}
*/
//求两个整数的和
//scanf是输入函数
int main(){
    int a=0;
    int b=0;
    int sum=0;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
    return 0;
}

