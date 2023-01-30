#include <stdio.h>
int main()
{
    char ch = 'a';
    //整型
    int age = 20;
    //短整型
    short num = 10;
    //长整型
    long a = 1111;
    //更长的整形
    long long b = 333;
    //单精度浮点型
    float weight = 66.6;
    //双精度浮点型
    double d = 0.0;

    printf("%d\n", sizeof(char));  //1
    printf("%d\n", sizeof(short)); //2
    printf("%d\n", sizeof(int));   //4
    // sizeof(long)>=sizeof(int)
    printf("%d\n", sizeof(long));  //4
    printf("%d\n", sizeof(long long)); //8
    printf("%d\n", sizeof(float));  //4
    printf("%d\n", sizeof(double));  //8

    return 0;
}