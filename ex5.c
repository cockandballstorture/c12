#include <stdio.h>
void main(){
	int n,w;
	int i;
	scanf("%d",&n);
	scanf("%d",&i);
	w=1;
	w=w<<i;
	w=w|n;
	printf("%d",w);
}
