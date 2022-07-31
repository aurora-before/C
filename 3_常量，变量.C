#include <stdio.h>
//常量
#define MAX 10000
enum Sex
{
    //枚举类型的变量的未来可能取值
    //枚举常量
    MALE = 3, //默认0，也可以像这样赋初值
    FEMALE,   // 1
    SECRET    // 2
};
int main()
{
    /*1.字面常量
    3.14;
    10;
    'a';
    */
    /*2.const修饰的常变量
        //const int num=10;//num是常变量-具有常属性（不能被改变的属性）
        //num=20;修改不了会报错
        //printf("%d",num);
 */
    /*3.#define
    //   MAX=2000;常量改不了会报错
         int n=MAX;
         printf("%d",n);
    */
    /*4.枚举常量*/
    //可以一一列举的常量
    enum Sex s = MALE;
    printf("%d", s);
    return 0;
}
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

/*
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
*/
