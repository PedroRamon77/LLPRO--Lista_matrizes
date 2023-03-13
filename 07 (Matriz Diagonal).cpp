#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int a[3][3],diag[3][3];
    
    a[0][0]=2;
    a[0][1]=0;
    a[0][2]=1;
    a[1][0]=3;
    a[1][1]=4;
    a[1][2]=-2;
	a[2][0]=8;
	a[2][1]=9;
	a[2][2]=6;
    
    printf("Matriz A\n");
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		diag[i][j]=0;
    		if(i==j){
    			diag[i][j]=a[i][j];
			}
		}
	}
	printf("\nMatriz Diagonal\n");
	for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		printf("%d\t",diag[i][j]);
		}
		printf("\n");
	}

    return 0;
}
