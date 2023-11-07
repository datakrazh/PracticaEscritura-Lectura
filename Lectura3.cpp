#include<stdio.h>
int main(){
	char caracter;
	int count, countr;
	bool condition;
	FILE *file=fopen("smallest.txt","r");
	
	if(file==NULL){
			perror("Error en la apertura del archivo");;
			return 1;
	}
	
	count=0;
	countr=1;
	condition=false;
	
	while(feof(file)==0)
	{
		caracter=fgetc(file);
		
		if(caracter=='\n')
			countr++;
			condition=true;
			
		if(!condition)
		if(caracter==',')
			count++;
	}
	printf("%d\n", count);
	printf("Numero de renglones: %d", countr);
	
	fclose(file);
	printf("\n\nTodo esta viento en popa...\n\n\n\n");
	
	return 0;
}
