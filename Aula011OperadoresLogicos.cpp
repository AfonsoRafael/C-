//Curso de C++ #11 - Operadores AND, OR, NOT
#include<iostream>
using namespace std;
int main(){
	
	
	// AND/&&/E             AS DUAS CONDIÇOES PRECISAM SER VERDADEIRAS
	// OR/||/OU             UMA DAS CONDIÇOES PRECISAM SER VERDADEIRAS
	//NOT/!/INVERSÃO        INVERTE SE FOR VERDADEIRO VIRA FALSO, SE FOR FALSO VIRA VERDADEIRO
	
	int num=15;
	
	if((num>4 && num<8)||(num>10 && num<14)||(num>15 && num<20)){
		cout<< "\n\n valor aceito";
	}else{
		printf("\n\nValor recusado");
	}
		if(!num<4 || !num>8){
		cout<< "\n\n valor aceito";
	}else{
		printf("\n\nValor recusado");
	}
}
