#include <stdio.h>
void main(){
	unsigned char a;
	int i;
	int w[8];
	scanf("%d",&a);
	for(i=0;i<8;i++){
		if((a%2)==0){
			w[7-i]=0;
		}
		else{
			w[7-i]=1;
		}
		a=a>>1;
	}
	for(i=0;i<8;i++){
		printf("%d",w[i]);
	}
}
