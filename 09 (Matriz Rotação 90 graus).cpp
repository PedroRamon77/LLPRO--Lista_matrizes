#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a[2][2],ib=0,jb=0,b[2][2];
	
	a[0][0]=1;
	a[0][1]=2;
	a[1][0]=3;
	a[1][1]=4;
	
	for(int j=0;j<2;j++){
		jb=0;
		for(int i=2-1;i>=0;i--){
			b[ib][jb]=a[i][j];
			jb++;
		}
		ib++;
	}
	
	printf("Matriz A\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Rotacionada em 90º graus\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%2d\t",b[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
}
