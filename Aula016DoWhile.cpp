//Curso de C++ #16 - Comando de loop Do While
// DO WHILE EXECUTA O PROGRAMA PELO MENOS UMA VEZ E NO FINAL FAZ A VERIFICA��O

#include<iostream>
using namespace std;
int main(){
	int cont=30;
	do{
		cout<<"\nNumero "<<cont;
		cont++;
	}while(cont<20);//CONT � MAIOR Q A CONDI��O, POREM O CODIGO � EXECUTADO PELO MENOS UMA VER
	
	return 0;
}
