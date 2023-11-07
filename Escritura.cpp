#include<stdio.h>
int main(){
	FILE*archivo;
	archivo=fopen("archivo.txt", "w");
	
	if(archivo==NULL){
		perror("Error al crear el archivo");
		return 1;
	}
	fprintf(archivo,"Este es un nuevo archivo.\n");
	fclose(archivo);
	
	return 0;
}
