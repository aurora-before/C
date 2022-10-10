#include <stdio.h>
int main() {
	int a = 6 / 5;//0
	
	float b = 6 / 5; //0

//想得到小数，除号两端至少有一个是小数
	float c = 6 / 5.0f;
		printf("%f\n", c);
}