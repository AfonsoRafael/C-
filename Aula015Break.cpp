//Curso de C++ #15 - Comando Break
#include<iostream>
using namespace std;

int main (){
	
	int cont = 0;
	while(cont<100){
		cout<<cont<<"\n";
		cont++;
		if (cont==50){
			break;// FAZ O COMANDO PARAR 
		}
	}
}
