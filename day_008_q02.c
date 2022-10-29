/*
name:Arpan Kumar Bartia
sec :e 
reg no:2041002035
*/
#include <stdio.h>
int main() 
{ 
	int arr[2][2]={20,25,80,69}; 
	int arr2[4]; 
	int i,j,k=0; 
	printf("2D-Array\n"); 
	for(i=0;i<2;i++) 
	{ 
		for(j=0;j<2;j++) 
		{ 
			printf("%d   ",arr[i][j]); 
			arr2[k]=arr[i][j]; 
			k++; 
		} 
		printf("\n"); 
	} 
	printf("1D-Array\n"); 
	for(i=0;i<4;i++) 
		printf("%d  ",arr2[i]); 
	return 0; 
} 
