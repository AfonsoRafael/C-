//Curso de C++ #24 - Omiss�o de argumentos e argumentos padr�o
#include<iostream>

using namespace std;
void inp(string txt="Texto padrao");

int main(){
	
	inp("Vasco sempre");
	inp();
	return 0;
}

void inp(string txt){
	cout<<"\n"<<txt<<"\n";
}
