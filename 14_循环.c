#include <stdio.h>
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
int main()
{
    int n = 1;
    int sum = 0;
    for (int j = 1; j < 11; j++)
    {
        // n=1;
        // for (int i = 1; i <= j; i++)
        // {
        //    n=n*i;
        // }
        // printf("%d  ",n);
        n=j*n;
        sum=sum+n;
    }

    printf("%d", sum);
    return 0;
}