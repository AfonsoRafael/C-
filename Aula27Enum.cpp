//Curso de C++ #27 - Enum
#include <iostream>
using namespace std;
int main(){
	
	enum teste{teste1,teste2,teste3,teste4};
	//todo enum já vem com um valor seguencial
	teste testeSel;//teste Selecionado do tipo teste
	testeSel=teste1;
	cout<<testeSel;
	testeSel=teste2;
	cout<< testeSel;
	testeSel=teste3;
	cout<<testeSel;
	cout<<"\n\n\n";
	
	enum NovoTeste{Nteste1=100,Nteste2,Nteste3,Nteste4};
	//todo enum já vem com um valor seguencial, sempre 1+ o anterios
	NovoTeste testeSele;//teste Selecionado do tipo teste
	testeSele=Nteste1;
	cout<<testeSele;
	testeSele=Nteste2;
	cout<< "\n\n\n\n"<<testeSele;
	testeSele=Nteste3;
	cout<<"\n\n\n"<<testeSele;
	cout<<"\n\n\n\n";
	enum armas{fuzil=100,revolver=8,rifle=12,escopeta=1};
	armas = armaSel;
	armaSel=rifle;
	cout<<armaSel
	
	//Entao ENUM e criar um tipo de dado e nele colocar strings que possuem valor inteiro
	
	return 0;
}
