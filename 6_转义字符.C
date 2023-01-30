#include <stdio.h>
int main(){
    //转义字符算一个长度
    printf("d:\\test");//\t
    printf("ab\ncd");
    printf("%c\n",'\'');
    printf("%s\n","\"\"");
    printf("\a\a");
    printf("%c\n",'\130'); //x的ASCII码值是88
    printf("%c\n",'\101');
    return 0;
}