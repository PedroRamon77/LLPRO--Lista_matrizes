#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
	int a[2][2],iden[2][2];
	
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(i==j){
				iden[i][j]=1;
			}else{
				iden[i][j]=0;
			}	
		}
	}
	
	printf("\nMatriz A\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz Identidade\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d\t",iden[i][j]);
		}
		printf("\n");
	}
	 	
    return 0;
}
