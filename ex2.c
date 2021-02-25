#include <stdio.h>
void main(){
	int a;
	int p,i;
	int t=2;
	p=1;
	int w[p];
	scanf("%d",&a);
	while(a>t){
			p++;
			t=2*t;
		}
	printf("%d\n",p);
	for(i=0;i<p;i++){
		if((a%2)==0){
			w[p-1-i]=0;
		}
		else{
			w[p-1-i]=1;
		}
		a=a>>1;
	}
	for(i=0;i<p;i++){
		printf("%d",w[i]);
	}
}
