// Curso de C++ #06 - Variáveis Globais e Locais, Operadores matemáticos
#include <iostream>

using namespace std;

	int nu1,nu2, soma; //VARIAVEIS GLOBAIS

int main(){
	
	// OPERADORES MATEMATICOS, + ADIÇÃO, - SUBT, * MULT, / DIV , % MOD(RESTO DA DIV), () PARA DAR PRIORIDADE
	
	int n1,n2; //VARIAVEIS LOCAIS
	
	nu1 = 1;
	nu2=2;
	n1=4;
	n2=5;
	
	soma = n1+n2+nu1+nu2;
	cout << soma;
	return 0;
}
