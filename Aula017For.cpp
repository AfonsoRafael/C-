//Curso de C++ #17 - Comando de loop FOR
//� USADO QUANDO SABEMOS QUANDO SERA FINALIZADO O LOOP
#include<iostream>
using namespace std;
int main(){
	int x,y;
	
	for(x=0;x<5;x++){
		cout<<"\n"<<x;
		
	}
		for(x=0,y=1;x<5;x++,y+=2){//PODE SE USAR MAIS DE UMA CONDI��O
		cout<<"\n"<<x<<y;
		
	}
	for(x=0;x<1000000000;x++);//ISSO FAZ DAR UM TEMPO NO PROGRAMA APESAR DE N�O MOSTRAR NADA
	
	return 0;
}
