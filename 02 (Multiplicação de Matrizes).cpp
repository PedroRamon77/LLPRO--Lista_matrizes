#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a[2][2],b[2][2];
	
	a[0][0]=1;
	a[0][1]=2;	
	a[1][0]=3;
	a[1][1]=4;
	b[0][0]=5;
	b[0][1]=6;
	b[1][0]=7;
	b[1][1]=8;
	
	printf("\nMatriz A\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",a[i][j]);			
		}
		printf("\n");
	}
	printf("\nMatriz B\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",b[i][j]);			
		}
		printf("\n");
	}
	
	int mult[2][2],soma=0;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			soma=0;
			for(int k=0;k<2;k++){
				 soma+= a[i][k] * b[k][j];
			}
			mult[i][j]=soma;
		}
	}
	printf("\nMatriz resultante da multiplicação das matrizes A e B\n");	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",mult[i][j]);			
		}
		printf("\n");
	}
	return 0;
}   
