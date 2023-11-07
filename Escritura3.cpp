#include<stdio.h>
int main(){
	
	FILE*file=freopen("line.txt","w",stdout);
	
	if(file==NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	printf("Este texto se escribirá en el archivo.\n");
	fclose(file);
	
	return 0;
}
