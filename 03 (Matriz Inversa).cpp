#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a[2][2],inv[2][2];
	
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	
	int diag_p=1,diag_s=1,det;
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
	
	if(det!=0){
		int ai=1,aj=1;

    	for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				if(i==j){
					inv[ai][aj]=a[i][j]/det;
				}else{
					inv[i][j]=-1*a[i][j]/det;
				}
			}
			ai--;
			aj--;
		}
		printf("Matriz A\n");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%.2f\t",a[i][j]);
			}
		printf("\n");
		}	
		printf("\nMatriz Inversa\n");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%.2f\t",inv[i][j]);
			}
		printf("\n");
		}
	}else{
		printf("Matriz A\n");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%.2f\t",a[i][j]);
			}
		printf("\n");
		}
		printf("\n\nO determinante é %d ou seja a matriz A não possui inversa\n",det);	
	}
	return 0;
}
