//Curso de C++ #14 - Comando de la�o While
#include<iostream>// � USADO QUANDO EU N�O CONHECO QUANDO VAI ACABAR
using namespace std;
int main(){
	
	int n=0;
	
	while(n<10){
		cout<<n<<"\n";
		n++;
	}
	n=0;
		while(n<10){
		cout<<n<<"\n";
		cin>>n;
	}
		n=0;
		while(n++<10){//N�O USAR COM VALOR DIFERENTE DE 1
		cout<<n<<"\n";
		if(n==5){
			break;//FAZ O PROGRAMA PARA ANTES
		}
	}
	
}
