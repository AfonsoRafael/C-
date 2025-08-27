#include <iostream>

using namespace std; // obrigatorio com essa extensão da bibioteca

int main(){
	cout<<"Vasco";
	// DECLARAÇÕES DE VARIAVEIS
	// TIPO NOME;
	// TIPO NOME = VALOR;
	
	int vidas=0; // VAI RECEBER NUMEROS INTEIROS
	char letra='B'; // VAI RECEBER UMA LETRA ENTRE 'a' ASPAS
	double decimalGrande=5.3; // RECEBE NUMERO DECIMAL COM PRECISÃO MAIOR
	float decimalMenor=5.2; // RECEBE UM DECIMAL COM PRECISÃO MENOR
	bool VouF=true; // RECEBE VERDADEIRO 1 (TRUE) OU FALSE 0 (FALSO)
	string nome="Vasco"; // RECEBE UM TEXTO ENTRE "VASCO" ASPAS DUPLAS
	
	cout << vidas << "\n";
	cout << decimalGrande << "\n";
	cout << letra << "\n";
	cout << VouF << "\n";
	cout << nome << "\n";
	
	cout << "Digite vidas; ";
	cin >> vidas; // RECEBIMENTO DE INFORMAÇÃO DO TECLADO
	cout << vidas;
	
	
	return 0;
}
