#include<stdio.h>
main(){
	int row,col;
	
	for(row=5;row>=1;row--){
		for(col=0;col<6-row;col++){
			if(col%2==0){
				printf("0");
				
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
}