//Curso de C++ #22 - Fun��es - Parte 1
#include<iostream>
using namespace std;

// prototipar uma fun��o � apresentar a fun��o ao programa

void texto();// prototipando
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
	int res;
	texto();//Chamando a fun��o no corpo principal, se n�o chamar n�o executa
	soma(15,5);
	res = soma2(5,14);
	string transp[4]={"carro","moto","barco","aviao"};
	
	cout<< "\nsoma e "<< res<<"\n\n";
	
	tr(transp);
	
	return 0;// significa q ao final do programa retorna 0
}

//VOID SIGNIFICA Q N�O TEM VALOR DE RETORNO

void texto(){
	
	cout << "\nTexte primeira funcao\n";// a func�o so � executada quando chamada
	
}

void soma(int n1, int n2){//PASSANDO ARGUMENTOS OU PARAMETROS PARA PODER USAR OS VALORES
	
	cout<<"A soma dos valores e "<<n1+n2<<"\n";
	
}

int soma2(int n1, int n2){//VALOR INT RETORNA VALOR INTEIRO
//SEMPRE Q FOR DIFERENDE DE VOID USAR RETURN

return n1+n2;
	
}

void tr(string tra[4]){
	for (int i = 0; i<4; i++){
		cout <<tra[i]<<"\n";
	}
	
}
