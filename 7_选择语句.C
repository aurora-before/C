#include <stdio.h>
int main()
{
    int input = 0;
    printf("请输入(1,0)");
    scanf("%d", &input);
    if (input == 1)
    {
        printf("好\n");
    }
    else
    {
        printf("卖红薯\n");
    }
    return 0;
}