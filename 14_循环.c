#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
/*
int main(){
    int ch=getchar();
//    printf("%c",ch);
    putchar(ch);
    return 0;
}
*/

/*
int main(){
    int ch=0;
    //ctrl+z结束
    //eof实质上是-1
    while ((ch=getchar())!=EOF){
        putchar(ch);
    }
    {
    }
    return 0;
}
*/
/*
int main()
{
    char password[20] = {0};
    printf("请输入密码");
    scanf("%s", &password);
    printf("请确认密码(y/n)");
    //清理缓冲区
    // getchar(); //处理\n
    //处理缓冲区多个字符
    int tmp=0;
    while((tmp=getchar())!='\n'){
        ;//空语句
    }
    int ch = getchar();
    if (ch == 'y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认失败\n");
    }
    return 0;
}
*/

/*
int main(){
    int ch=0;
    while((ch=getchar())!=EOF){
        if(ch<'0'||ch>'9')
           continue;
        putchar(ch);
    }
    return 0;
}
*/

/*

int main(){
    int i=1;
    do{
        printf("%d",i);
        i++;
    } while (i<=10);
    return 0;
}
*/
/*1到10的阶乘相加
int main()
{
    int n = 1;
    int sum = 0;
    for (int j = 1; j < 11; j++)
    {
        n=1;
        for (int i = 1; i <= j; i++)
        {
           n=n*i;
        }
        // printf("%d  ",n);
        sum=sum+n;
    }

    printf("%d", sum);
    return 0;
}
*/
/*1到10的阶乘相加改进
int main()
{
    int n = 1;
    int sum = 0;
    for (int j = 1; j < 11; j++)
    {
        n=j*n;
        sum=sum+n;
    }

    printf("%d", sum);
    return 0;
}
*/
/*
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了:%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到\n");
    }
    return 0;
}
*/

/*
//登录
int main()
{
    int n=0;
    char pwd[20] = {0};
    char password[20]={"222"};
    while (n <3)
    {
        printf("请输入密码");
        scanf("%s",&pwd);
        printf("%s\n",pwd);
        printf("%s",password);
        if(strcmp(pwd,password)==0){
            printf("登录成功");
            break;
        }else{
            printf("密码错误");
        }
        n++;
        if(n==3){
            break;
        }
    }
    return 0;
}
*/

//猜数字
void menu()
{
    printf("****************");
}
void game()
{
    //生成随机数
    // rand函数返回一个0-32767之间的数字
    //时间-时间戳
    //!!!
    int ret = rand() % 100 + 1; //模100的余数是0-99，然后+1，范围就是1-100
    printf("%d", ret);
    //猜数字
    int guess = 0;

    while (1)//死循环
    {
        printf("请猜数字>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (input);
}
