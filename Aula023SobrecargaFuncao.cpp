//Curso de C++ #23 - Sobrecarga de fun��es
#include <iostream>
using namespace std;
void soma(int n1, int n2);
void soma();

int main(){
	
	soma();
	soma(10,30);
	
	return 0;
}
//POSSO USAR DUAS FUN��ES COM MESMO NOME DESDE Q TENHAM PARAMETROS DIFERENTES, ASSIM O PROGRAMA VAI SABER QUAL FUN��O ESTA CHAMANDO
void soma (int n1,int n2){
	int re;
	re = n1 + n2 ;
	cout<<"A soma dos numeros e "<<re<<"\n";
}

void soma(){
	
	int n1,n2,re;
	n1=10;
	n2=20;
	re=n1+n2;
	cout<<"A soma dos numeros e "<<re<<"\n";
}
