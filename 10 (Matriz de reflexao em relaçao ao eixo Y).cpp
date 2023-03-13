#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a[2][2],ref[2][2];
	
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	
	int aj=1;
	
	for(int i=0;i<2;i++){
		aj=1;
		for(int j=0;j<2;j++){
			if(i==0){
				ref[i][j]=a[i][aj];
				aj--;
			}else{
				ref[i][j]=a[i][aj];
				aj--;
			}
		}
	}	
	
	printf("Matriz A\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",a[i][j]);			
		}
		printf("\n");
	}
	printf("\nMatriz Refletida em relação ao eixo Y\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",ref[i][j]);			
		}
		printf("\n");
	}
	return 0;
}
