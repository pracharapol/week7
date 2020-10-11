#include<stdio.h>
void spatar() {
	int num;
	printf("Enter number : ");
	scanf_s("%d", &num);
	for (int i = 1;i <= num;i++) {
		for (int j = num;j >= i;j--) {
			printf("*");
		}
		for (int j = 1;j <= i;j++) {
			printf(" ");
		}
		for (int j = 2;j <= i;j++) {
			printf(" ");
		}
		for (int j = num;j >= i;j--) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1;i <= 2;i++) {
		for (int j = 1;j <= num * 2 + 1;j++) {
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	spatar();
	return 0;
}