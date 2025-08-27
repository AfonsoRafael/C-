//Curso de C++ #14 - Comando de laço While
#include<iostream>// É USADO QUANDO EU NÃO CONHECO QUANDO VAI ACABAR
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
		while(n++<10){//NÃO USAR COM VALOR DIFERENTE DE 1
		cout<<n<<"\n";
		if(n==5){
			break;//FAZ O PROGRAMA PARA ANTES
		}
	}
	
}
