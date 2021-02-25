#include <stdio.h>
void main(){
	unsigned char a=2;
	int b;
	scanf("%d",&b);
	b=b-1;
	a=a<<b;
	printf("%d", a);
}
