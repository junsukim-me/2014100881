#include<stdio.h>

int main(){
	int i,j;

	for(i=2;i<=8;i++){
		printf("%d dan",i);
		for(j=1;j<=9;j++){
			printf("%d * %d = %d",i,j,i*j);
		}

	}
	return 0;
}
