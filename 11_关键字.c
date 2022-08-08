#include <stdio.h>
int main(){
    //大量频繁被使用的数据，放在寄存器中提示效率
    register int num=100; //建议num的值放在寄存器中
    return 0;

}