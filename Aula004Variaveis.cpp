#include <iostream>

using namespace std; // obrigatorio com essa extens�o da bibioteca

int main(){
	cout<<"Vasco";
	// DECLARA��ES DE VARIAVEIS
	// TIPO NOME;
	// TIPO NOME = VALOR;
	
	int vidas=0; // VAI RECEBER NUMEROS INTEIROS
	char letra='B'; // VAI RECEBER UMA LETRA ENTRE 'a' ASPAS
	double decimalGrande=5.3; // RECEBE NUMERO DECIMAL COM PRECIS�O MAIOR
	float decimalMenor=5.2; // RECEBE UM DECIMAL COM PRECIS�O MENOR
	bool VouF=true; // RECEBE VERDADEIRO 1 (TRUE) OU FALSE 0 (FALSO)
	string nome="Vasco"; // RECEBE UM TEXTO ENTRE "VASCO" ASPAS DUPLAS
	
	cout << vidas << "\n";
	cout << decimalGrande << "\n";
	cout << letra << "\n";
	cout << VouF << "\n";
	cout << nome << "\n";
	
	cout << "Digite vidas; ";
	cin >> vidas; // RECEBIMENTO DE INFORMA��O DO TECLADO
	cout << vidas;
	
	
	return 0;
}
