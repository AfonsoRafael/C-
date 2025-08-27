//Curso de C++ #16 - Comando de loop Do While
// DO WHILE EXECUTA O PROGRAMA PELO MENOS UMA VEZ E NO FINAL FAZ A VERIFICAÇÃO

#include<iostream>
using namespace std;
int main(){
	int cont=30;
	do{
		cout<<"\nNumero "<<cont;
		cont++;
	}while(cont<20);//CONT É MAIOR Q A CONDIÇÃO, POREM O CODIGO É EXECUTADO PELO MENOS UMA VER
	
	return 0;
}
