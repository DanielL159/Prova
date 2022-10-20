#include<stdio.h>
#include<math.h>



int main(){
	//Variaveis da questao A
	char opcao;
	float catetoOposto,catetoAdjacente,hipotenusa,seno;
	 
			
			
	//Variaveis da questao C
	char nome[40];
	int inicio,termino,situacao;
	
	
	printf("Algoritimo e programacao \t Joyce Siqueira \t Daniel Luiz dos Santos \n uc22103186\t Analise e desenvolviment de Sistemas \n");	
	printf("https://github.com/DanielL159/Prova.git");
	
	printf("Qual questao gostaria de ver  A ou C:");
	scanf("%s",&opcao);
	
	switch(opcao){
		
		
		case 'A':
			
			printf("Por gentileza me forneca o Cateto Opostos a =");
			scanf("%f",&catetoOposto);
			
			printf("Por gentileza me forneca o cateto adjacente b =");
			scanf("%f",&catetoAdjacente);
			
			hipotenusa = sqrt(pow(catetoOposto,2) + pow(catetoAdjacente,2));
			
			seno =  catetoOposto/hipotenusa	;
		
			printf(" Hipotenuas : %.3f\n seno : %.3f",hipotenusa,seno);
			
		break;
		
		
		case 'C':
			printf("Me forneca o Nome da Obra :");
			fflush(stdin);
			scanf("%s",&nome);
			
			printf("Mes de inicio :");
			scanf("%d",&inicio);
			
			printf("Mes de termino :");
			scanf("%d",&termino);
			
			printf("Qual a situacao da Obra :");
			scanf("%d",&situacao);
			
			printf("Nome da Obra = %s\n",nome);
			
			switch(situacao){
				
				case 1:
					printf("Obra Concluída\n");
				break;
				
				case 2:
					printf("Problemas no projeto\n");
				break;
				
				case 3:
					printf("Atraso nos repasses financeiros\n");
				break;	
				
				case 4:
					printf("Greve dos trabalhadores\n");
				break;
					
				case 5:
					printf("Falta de materiais\n");
				break;
				
				case 6:	
					printf("Falta de equipamentos\n");
				break;
			}
			printf("Tempo de execucao %d",termino - inicio);
					
		break;
	
	}
		
}
