#include<stdio.h>
main(){
	int i,j,n='A';
	
	for(i=5;i>=1;i--){
		for(j=i;j<=5;j++){
			printf("%c ",n);
			n++;
		}
		printf("\n");
	}
}