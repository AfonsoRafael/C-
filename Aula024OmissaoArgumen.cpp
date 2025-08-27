//Curso de C++ #24 - Omissão de argumentos e argumentos padrão
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
