#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	printf("\n insira um n�mero inteiro de 1 a 7: ");
	scanf("%d", &i);
	
	printf("\n");
	
	switch(i){
		
		case 1 :
			printf("\n Domingo \n");
		break;
		
		case 2 :
			printf("\n Segunda-feira \n");
		break;
		
		case 3 :
			printf("\n Ter�a-feira \n");
		break;
		
		case 4 :
			printf("\n Quarta-feira \n");
		break;
		
		case 5 :
			printf("\n Quinta-feira \n");
		break;
		
		case 6 :
			printf("\n Sexta-feira \n");
		break;
		
		case 7 :
			printf("\n S�bado \n");
		break;
		
		default :
			printf("\n Valor invalido \n");
	}
		
system("pause");	
return 0;	
}
