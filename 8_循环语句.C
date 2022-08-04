#include <stdio.h>
int main(){
    int line=0;
    while(line<3){
        printf("写代码:%d\n",line);
        line++;
    }
    if(line==3){
        printf("跳出\n");
    }
    
    return 0;
}