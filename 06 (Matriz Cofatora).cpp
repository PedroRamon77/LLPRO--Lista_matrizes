#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a[2][2],cof[2][2];
	
	a[0][0]= 2;
	a[0][1]= 3;
	a[1][0]= 1;
	a[1][1]= 4;
	
	int ai=1,aj=1;

    for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(i==j){
				cof[ai][aj]=a[i][j];
			}else{
				cof[i][j]=-1*a[j][i];
			}
		}
		ai--;
		aj--;
	}
	
	printf("Matriz A\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz Cofatora\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",cof[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
