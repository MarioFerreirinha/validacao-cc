#include <stdio.h>
#include <string.h>
#include <locale.h>

/*	String para aceitar o CC em forma bruta.
	repetir serve para repetir ou n�o a valida��o do CC sempre que for verificado o seu valor
*/
char cc[11], repetir='S';

/*	length ser� utilizado para a obten��o do n�mero de d�gitos de cc e a sua verifica��o.
	n ser� utilizado como contador em ciclos.
	d_cc ter� todos os valores ja traduzidos e prontos para valida��o atrav�s do algoritmo.
	soma ter� o valor da soma de todos os valores em d_cc.
*/
int length, n, d_cc[12], soma=0;

int main(){

//O programa passa a aceitar caracteres da l�ngua portuguesa.
	setlocale(LC_ALL, "Portuguese");

//Ciclo que ir� repetir-se ou n�o, cada vez que a condi��o se verifique.
	while(repetir=='S'){
		//Pedir e receber o numero CC
    	printf("\nInsira o n�mero de CC.\n");
    	scanf("%s",&cc);

//Detetar o n�mero de d�gitos de cc e atribuir esse n�mero a length de modo a poder acabar o programa caso exceda os 12 d�gitos.
		length=strlen(cc);
		if(length!=12){
			printf("\nO CC n�o tem 12 d�gitos! Reinicie o programa.\n");
			break;
		}else{
		}

//Atribuir o valor do d�gito 10 e 11 numa vari�vel do tipo int
		for(n=0;n<=11;n++){
			switch(cc[n]){
				case '0' : d_cc[n] = 0; break;
				case '1' : d_cc[n] = 1; break;
				case '2' : d_cc[n] = 2; break;
				case '3' : d_cc[n] = 3; break;
				case '4' : d_cc[n] = 4; break;
				case '5' : d_cc[n] = 5; break;
				case '6' : d_cc[n] = 6; break;
				case '7' : d_cc[n] = 7; break;
				case '8' : d_cc[n] = 8; break;
				case '9' : d_cc[n] = 9; break;
				case 'A' : case 'a' : d_cc[n] = 10; break;
				case 'B' : case 'b' : d_cc[n] = 11; break;
				case 'C' : case 'c' : d_cc[n] = 12; break;
				case 'D' : case 'd' : d_cc[n] = 13; break;
				case 'E' : case 'e' : d_cc[n] = 14; break;
				case 'F' : case 'f' : d_cc[n] = 15; break;
				case 'G' : case 'g' : d_cc[n] = 16; break;
				case 'H' : case 'h' : d_cc[n] = 17; break;
				case 'I' : case 'i' : d_cc[n] = 18; break;
				case 'J' : case 'j' : d_cc[n] = 19; break;
				case 'K' : case 'k' : d_cc[n] = 20; break;
				case 'L' : case 'l' : d_cc[n] = 21; break;
				case 'M' : case 'm' : d_cc[n] = 22; break;
				case 'N' : case 'n' : d_cc[n] = 23; break;
				case 'O' : case 'o' : d_cc[n] = 24; break;
				case 'P' : case 'p' : d_cc[n] = 25; break;
				case 'Q' : case 'q' : d_cc[n] = 26; break;
				case 'R' : case 'r' : d_cc[n] = 27; break;
				case 'S' : case 's' : d_cc[n] = 28; break;
				case 'T' : case 't' : d_cc[n] = 29; break;
				case 'U' : case 'u' : d_cc[n] = 30; break;
				case 'V' : case 'v' : d_cc[n] = 31; break;
				case 'W' : case 'w' : d_cc[n] = 32; break;
				case 'X' : case 'x' : d_cc[n] = 33; break;
				case 'Y' : case 'y' : d_cc[n] = 34; break;
				case 'Z' : case 'z' : d_cc[n] = 35; break;
			}
		}

//Algoritmo de valida��o
//Multiplica��o dos d�gitos de dois em dois
		for(n=10;n>=0;n=n-2){
			if(d_cc[n]*2>=10){
				d_cc[n]=d_cc[n]*2-9;
			}else{
				d_cc[n]=d_cc[n]*2;
			}
		}

//Soma de todos os d�gitos do CC
		for(n=0;n<=11;n++){
			soma=soma+d_cc[n];
		}

//C�lculo do resto da soma na divis�o por 10 e valida��o do CC
		if(soma%10==0){
			printf("\nCC v�lido.\n");
			printf("\nDeseja inserir outro CC? (S ou N)\n");
    		scanf(" %c",&repetir);
    		if(repetir!='S'){
    			break;
			}else{
			}
		}else{
			printf("\nCC inv�lido.\n");
			printf("\nDeseja inserir outro CC? (S ou N)\n");
    		scanf(" %c",&repetir);
    		if(repetir!='S'){
    			break;
			}else{
			}
		}
	}
}
