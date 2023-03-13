#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a[2][2],det;
	
	a[0][0]=2;
	a[0][1]=3;
	a[1][0]=1;
	a[1][1]=4;
	
	int diag_p=1,diag_s=1;
	int tam=2;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(i==j){
				diag_p*=a[i][j];
			}
			if(j==(tam-1)-i){
				diag_s*=a[j][i];
			}
		}
	}
	det=diag_p-diag_s;

	printf("Matriz A\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",a[i][j]);
		}
     	printf("\n");
	}	
	printf("\nDeterminante:%2d\n",det);
	
	return 0;
}
