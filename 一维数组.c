#include <stdio.h>
int main() {
	//int arr[8]
	//char ch[5]


	//int n = 9;
	//int arr[n];
	//  //c99语法支持（全长数组），否则[]内应输入常量值
	//printf("%d", arr[0]);

	//完全初始化
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//不完全初始化
	//int arr[10] = { 1,2,3,4,5,6};
	// 
	
	//char ch[5] = { 'b','i','t' };

	/*
	char ch[5] = "bit"; // b i t \0 \0
	char ch4[] = "bit";           // b i t \0
	char ch6[] = { 'b','i','t' }; //后面没有\0，会打印内存里什么东西也不知道
	printf("%d\n", strlen(ch));//3
	printf("%d", strlen(ch6));//随机值
	printf("%d", ch6);
*/

	/*
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]); //40/4
	printf("%d", sz);
	*/
	//%p是按地址的格式打印，十六进制的打印
	/*printf("%x\n", 0x12);
	printf("%p\n", 0x12);*/

	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("arr[%d]=%p\n", i, &arr[i]);
		printf("%p", & arr[0] + 1);
	}
	return 0;
}