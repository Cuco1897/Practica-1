#include <stdio.h>

int main() {
	
	int vector[10], aux= 0, a, j, i ; 
	
	for (i = 0; i<10; i++){
		printf("\nValor en posicion %d:  ", i+1);
		scanf("%d",&vector[i]);
	}
	for (i = 0; i<10; i++){
		for (j=1; j<10; j++){
			if (vector[j]  > vector[j-1]){
				 aux = vector[j];
				 vector[j] = vector[j-1];
				 vector[j-1]= aux;
			}
		}
	}
	
	for (a = 0; a<10; a++){
		printf("\nValor en posicion %d es: %d ", a+1, vector[a]);
	}
	
	return 0;
}
