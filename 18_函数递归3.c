#include <stdio.h>
/*
//��һ��1-100�к�9�������ж��ٸ�
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
//�����
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
//��10�����������ֵ
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
//�žų˷���
int main() {
	int i = 0;
	//��
	for (i = 1; i <= 9; i++) {
		int j = 0;
		//��
		for (j = 1; j <= i; j++) {
			//%2d���һ���ո�-�������
			printf("%d*%d=%-2d ", j,i,j * i);
		}
		printf("\n");
	}
	return 0;
}
*/