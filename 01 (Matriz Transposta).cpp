#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a[3][3],t[3][3];
	
	a[0][0]=1;
	a[0][1]=2;
	a[0][2]=3;
	a[1][0]=4;
	a[1][1]=5;
	a[1][2]=6;
	a[2][0]=7;
	a[2][1]=8;
	a[2][2]=9;
	
	for(int i=0;i<3;i++){      
		for(int j=0;j<3;j++){      
			t[i][j]=a[j][i];
		}
	}
	printf("\nMatriz\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%2d\t",a[i][j]);			
		}
		printf("\n");
	}
	printf("\nMatriz Transposta\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%2d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

