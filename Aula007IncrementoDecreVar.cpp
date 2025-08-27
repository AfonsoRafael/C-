//Curso de C++ #07 - Incremento e Decremento de Variáveis, Operadores pós e pré-fixados
#include<iostream>

using namespace std;

int main(){
	
	int n1,n2;
	n1=0;
	n2=10;
	
	cout << n1<<endl;
//	n1=n1+1;         // FORMA PADRÃO DE IMCREMENTO, AQUI PODE SE FAZER UM IMCREMENTO MAIOR Q 1
	n2+=10;           // FORMA SIMPLIFICADA DE INCREMENTO, AQUI PODE SE FAZER UM IMCREMENTO MAIOR Q 1
	n1++;            // FORMA DE IMCREMENTO MAIS SIMPLIFICADA, MAS SO SE PODE ADICIONAR 1
	cout<<endl<<n1<<"\n\n"<<n2<<"\n\n";
	
		cout << n1<<endl<<n2<<"\n\n";
//	n1=n1-1;         // FORMA PADRÃO DE DECREMENTO
	n2-=10;           // FORMA SIMPLIFICADA DE DECREMENTO
	n1--;            // FORMA DE IMCREMENTO MAIS SIMPLIFICADA, MAS SO SE PODE DIMINUI 1
	cout<<endl<<n1<<"\n\n";
	
//	n2*=2; // FORMA SIMPLIFICADA TAMBEM SERVE PARA AS DEMAIS OPERAÇÕES
	cout<<n2;
	
	
	// n1=n1+10     n1+=10
	// n1=n1-10     n1-=10        FORMA NORMAL     FORMA SIMPLIFICADA
	// n1=n1*10     n1*=10
	// n1=n1/10     n1/=10
	
	
	// DIFERENÇA ENTRE n1++(POS FIXADO) e ++n1(PRE FIXADO)
	
	
	cout<<"\n--------------------------\n\n"<<n2<<"\n";
	cout<<  n2++<<"\n\n"; //PRIMEIRO ELE USA O VALOR DA VARIAVEL DEPOIS INCREMENTE
	cout<<n2<<"\n\n"; // VALOR IMCREMENTADO DEPOIS DO COMANDO ANTERIOS
	cout<<  ++n2<<"\n\n"; // PRIMEIRO INCREMENTA DEPOIS USA O VALOR DA VARIAVEL
	
		// DIFERENÇA ENTRE n1--(POS FIXADO) e --n1(PRE FIXADO)
	cout<<"\n--------------------------\n\n"<<n2<<"\n";
	cout<<  n2--<<"   APOS n2--\n\n"; //PRIMEIRO ELE USA O VALOR DA VARIAVEL DEPOIS DECREMENTE
	cout<<n2<<"\n\n"; // VALOR DECREMENTADO DEPOIS DO COMANDO ANTERIOS
	cout<<  --n2<<"   APOS --n2\n\n"; // PRIMEIRO DECREMENTA DEPOIS USA O VALOR DA VARIAVEL
	
	return 0;
}
