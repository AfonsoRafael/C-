//Curso de C++ #09 - Comando de decisão IF ELSE- Parte 1 E PARTE 2
#include<iostream>
#include<cstdlib>    // PARA PODER USAR COMANDOS DO CMD NO CODIGO
using namespace std;

int main(){
	int num=10;
	char opc='a';
	int n1,n2,res;
	
	if(num>=10){ //SE O TESTE LOGICO FOR VERDADEIRO
		// TESTE LOGICO <, >, <=, >=, ==, !=
		
	cout<<"verdadeiro";	
	}else{
		cout<<"falso";
	}
	
	/*
			>= 60        APROVADO
			>= 40 E <60  RECUPERAÇÃO
			>40          REPROVADO
	*/
	
	inicio:// PONTO DE MARCAÇÃO PARA O GOTO
	system("cls");// FAZ A LIMPEZA DO PROGRAMA, CODIGO DO CMD
	
	cout<< "\n\nDigite o valor da nota 1: ";
	cin>>n1;
	cout<< "Digite o valor da nota 2: ";
	cin>>n2;
	res=(n1+n2)/2;
	
	if(res>=6){
		
		cout<<"Aluno aprovado";
		
	}else if(res>=4){
		cout<<"Aluno em recuperacao";
	}else{
		cout<<"Aluno reprovado";
	}
	
	cout<< "\n\n Deseja continuar?[s/n] ";
	cin>>opc;
	
	if(opc == 's' or opc == 'S'){
		
		goto inicio;//GOTO VOLTA PARA UM PONTO MARCADO NO PROGRAMA NO CASO INICIO
	}
	
	return 0;
}
