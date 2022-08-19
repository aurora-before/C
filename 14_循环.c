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
    while ((ch=getchar())!=EOF){
        putchar(ch);
    }
    {
    }
    return 0;
}
*/

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