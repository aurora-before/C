#include <stdio.h>
/*
//数一下1-100中含9的数字有多少个
int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9 || i/10==9) {
			printf("%d ", i);
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
*/

/*
//1/1+1/2-1/3+1/4...+1/100
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
	//		sum -= 1.0/i;
	//	}
	//	else {
	//		sum +=1.0/i;
	//	}
	//}
	//printf("%1f", sum);
	//return 0;
//}
//更简便
int main() {
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++) {
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%1f", sum);
	return 0;
}
*/

/*
//求10个整数中最大值
int main() {
	int arr[10] = { -1,-2,-3,-4,-5,-6 ,- 7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	for (i = 1; i <10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}
*/

/*
//九九乘法表
int main() {
	int i = 0;
	//行
	for (i = 1; i <= 9; i++) {
		int j = 0;
		//列
		for (j = 1; j <= i; j++) {
			//%2d多出一个空格，-是左对齐
			printf("%d*%d=%-2d ", j,i,j * i);
		}
		printf("\n");
	}
	return 0;
}
*/