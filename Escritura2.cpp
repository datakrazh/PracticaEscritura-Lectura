#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
		int n, i, j, k;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d", &n);
	int A[n][n], B[n][n], C[n][n];
	
	FILE*archivo;
	archivo=fopen("matriz.txt", "w");
	
	if(archivo==NULL){
		perror("Error al crear el archivo");
		return 1;
	}
	fprintf(archivo,("Matriz A:\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=rand()%10;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	});
	fclose(archivo);
	
	return 0;
}
