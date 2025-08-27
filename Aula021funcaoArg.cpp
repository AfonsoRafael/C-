#include<iostream>
#include <string.h>// IMPORTAÇÃO PARA COMPARAR AS STRINGS
#include <stdlib.h>//PARA COMANDOS DO PROMPT

//Curso de C++ #21 - Argumentos para a função main, argc e argv
using namespace std;
int main(int argc, char *argv[]){//argc é a quantidade de parametros, o * significa ponteiros, 
//ponteiros e argv é uma matriz de caracteres, sera explicado melhor depois
	
	cout << argv[0] <<"\n\n";//PRIMEIRO PARAMETRO É O NOME DO PROGRAMA
	cout << argv[1] <<"\n\n";// SEGUNDO O PARAMETRO Q VC PASSAR
	cout<< argc<<"\n\n";// IMPRIME A QUANTIDADE DE PARAMETROS INFORMADOS
	
	//-------------------------COMO USAR NO PROGRAMA---------------------
	if(argc>1){// VERIFICA SE TEM UM PARAMETRO ALEM DO NOME DO PROGRAMA
		if(!strcmp(argv[1],"sol")){//PRECISA NEGAR POIS SE AS STRINGS ARGV[1] FOR IGUAL A SOL RETORNA 0 E 0 É FALSO
		//STRCMP É PARA COMPARAR AS STRINGS
			cout<<"Vou ao clube";
		}else if(!strcmp(argv[1],"nublado")){
			cout <<"Vou ao cinema";
		}else{
			cout<<"Vou ficar em casa";
		}
	}
	system("pause");
	
	return 0;
}

//MELHOR TESTAR NO PROMPT DE COMANDO
//PRIMERO COMANDO C:
//COLA O CAMINHO
//CHAMA O PROGRAMA PARA TESTAR
