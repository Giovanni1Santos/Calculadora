//Adicionando bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//função que realiza a operação de soma
float soma(float a, float b){
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &a);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &b);
	float s = a + b; // soma
	printf("\nO resultado: ");
	printf("%.2f", s); // resultado com duas casas decimais 
	return s;
}

//função que calcula a subtração
float subt(float a, float b){
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &a);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &b);
	float s = a - b; // subtração
	printf("\nO resultado: ");
	printf("%.2f", s); // resultado com duas casas decimais 
	return s;
}
//função que calcula a multiplicação
float mult(float a, float b){
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &a);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &b);
	float m = a * b; // Multiplicação
	printf("\nO resultado: ");
	printf("%.2f", m); // resultado com duas casas decimais 
	return m;
}
//função que calcula a divisão
float div(float a, float b){
	printf("\nDigite o primeiro numero: ");
	scanf("%f", &a);
	printf("\nDigite o segundo numero: ");
	scanf("%f", &b);
	float d = a / b; //divisão
	printf("\nO resultado: ");
	printf("%.2f", d); // resultado com duas casas decimais 
	return d;
}
// Função que calcula raiz quadrada
float raiz(float a){
	printf("\nDigite o numero que se deseja saber a raiz quadrada: ");
	scanf("%f", &a);
	float r = sqrt(a); //raiz quadrada
	printf("\nO resultado: ");
	printf("%.2f", r);
	return r;
}

//Função que calcula potência
double pot(double a, double b){
	printf("\nDigite o primeiro numero: ");
	scanf("%lf", &a);
	printf("\nDigite o segundo numero: ");
	scanf("%lf", &b);
	double p = pow(a,b); //função que realiza a potencia de dois números (aqui o primeiro número sempre vai ser elevado pelo segundo)
	printf("\nO resultado: ");
	printf("%.lf", p);
	return p;
}

int main(){
	float a, b;
	char op;
	
	
	printf("Digite 0 para encerrar e 1 para continuar: ");
	scanf("%f", &c);
	
	while((c!=0) && (c==1)){ //loop para a calculadora funcionar até o usuário digitar 0
	
	printf("\nDigite a operacao: ");
	scanf("%s", &op);
	
	//verificando qual operação foi escolhida e realizando a chamada das funções
	switch(op){
		case '+':
			soma(a, b);
			break;
		
		case '-':
			subt(a, b);
			break;
		
		case 'x':
			printf("\nO resultado: ");
			mult(a, b);
			break;
		
		case '/':
			div(a, b);
			break;
		
		case 'r':
			raiz(a);
			break;
		
		case 'p':
			pot(a,b);
			break;
	}
	//checa se o usuário deseja encerrar o programa ou continuar
	printf("\n\nDigite 0 para encerrar e 1 para continuar: ");
	scanf("%f", &c);
	//limpa a tela
	system("CLS");
}
	return 0;
}
