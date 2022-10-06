#include <string.h>
#include <stdio.h>
#include <math.h>

/*
Nesse algoritmo primeiro exibo as opcoes para o usuario
Em seguida leio a opcao que ele colocou
Se for raiz quadrada irei ler apenas um numero,
as demais operacoes vou ler dois numeros.
Em seguida calculo a reposta de acordo com a operacao escolhida
Por ultimo exibo a resposta, e se o numero da operacao escolhida
nao estiver entre os possiveis exibo "operacao invalida"
*/

int main(){
	
	printf("*COLOQUE O NOME AQUI*\n");
	printf("*COLOQUE UNIVESIDADE E CURSO AQUI*\n");
	printf("*COLOQUE A MATRICULA AQUI*\n");
	
	int operacao;
	
	printf("1) Raiz Quadrada\n2) Soma\n3) Multiplicacao\n4) Divisao\n5) Potenciacao\n");
	scanf("%d", &operacao);
	
	double resposta, numero1, numero2;
	
	if(operacao==1){ //Se for raiz quadrada
		printf("Escreva o numero: \n");
		scanf("%lf", &numero1);
		resposta = sqrt(numero1);
	} else { //Outras operacoes leem dois numeros
		printf("Escreva o primeiro numero: \n");
		scanf("%lf", &numero1);
		printf("Escreva o segundo numero: \n");
		scanf("%lf", &numero2);
		if(operacao==2){
			resposta = numero1+numero2;
		} else if(operacao==3){
			resposta = numero1*numero2;
		} else if(operacao==4){
			resposta = numero1/numero2;
		} else if(operacao==5){
			resposta = pow(numero1, numero2);
		}
	}
	
	if (operacao==1 || operacao==2 || operacao==3 || operacao==4 || operacao==5){ //Caso tenha resposta
		printf("\nResposta: %lf\n", resposta);
	} else { //Caso não tenha escolhido nenhuma operacao entre as mostradas
		printf("Operacao invalida\n");
	}
	
	return 0;
}
