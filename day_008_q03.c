/*
name:Arpan Kumar Bartia
sec :e 
reg no:2041002035
*/
#include<stdio.h>

int main(){

	int a[4][4];
	for(int i = 0 ; i < 4 ;i++){
		for(int j = 0 ; j < 4  ;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0 ; i < 4 ; i++){
		if((i+1)%2 == 0){
			for(int j = 3 ; j >=0;j--){
				printf("%d ",a[i][j]);
			}
		}else{
			for(int j = 0 ; j < 4 ; j++){
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}

	
}
