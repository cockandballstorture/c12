#include <stdio.h>
void main(){
	unsigned char a;
	int i;
	int w=0;
	scanf("%d",&a);
	for(i=0;i<8;i++){
		if((a%2)!=0){
			w=i+1;
		}
		a=a>>1;
	}
	printf("%d",w);
}
