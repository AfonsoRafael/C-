//Curso de C++ #12 - Operador tern�rio
#include<iostream>
using namespace std;// O OPERADOR TERNARIO � PARECIDO COM O IF MAS � MAIS RAPIDO, POREM O RESULTADO � MAIS SIMPLES

int main(){
	
	// MODELO DA SINTAXE  (EXPRESS�O) ? : VALOR1 : VALOR2
	// OU SEJA, VAI VERICAR O VALOR DA EXPRESSAO, SE FOR VERDADEIRO MOSTRA VALOR1, SE N�O MOSTRA VALOR2
	
	int n1,n2,final;
	string res;
	int nu1,x=10;
	
	cout<< "Digite a primeira nota: \n\n";
	cin>>n1;
	cout<< "Digite a segunda nota: \n\n";
	cin>>n2;
	final=(n1+n2)/2;
	
//	(final>=6) ? res="aprovado": res="reprovado";  //FORMA 1
	
	res=(final>=6) ? res="aprovado": res="reprovado";
	cout<< "O aluno esta " << res << "!\n\n";
	
	cout<<"Digite um valor: ";
	cin>>nu1;
	
	(nu1>=5) ? x++ : x--;
	cout<<x;
	
	return 0;
}
