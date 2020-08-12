#include<stdio.h>
int i,a;
int main() {
	
	scanf("%d",&a);
	for (i = 1; i <= 12; i++) {
		printf("\n%d x %d = %d\n", a, i, a * i);
	}
}