//Curso de C++ #28 - Pilha / Stack - Parte 1
//É como se fosse um vetor porem com controles especificos
/*Seria como se fosse um tubo onde o primeiro elemento a ser inserido seria o ultimo a ser trabalhado
e o ultimo a ser colocado seria o primeiro a ser trabalhado
pensa em bolas colocadas em um recipiente para guardar, a ultima a ser 
colocada sera a primeira a sair e a primeira a ser colocada a ultima a sair
*/
#include<iostream>
#include<stack>// biblioteca de pilha
using namespace std;
int main(){
	
	stack <string> cartas;//coloca o tipo do dado e o nome da pilha
	
	if(cartas.empty()){//VERIFICA SE TEM ELEMENTOS NA PILHA, SE NÃO HOUVER RETORNA TRUE, SE TIVER FALSE
		cout<<"Pilha vazia\n\n";
	}else{
		cout<<"Pilha com cartas\n\n";
	}
	
	cartas.push("Rei de copas");// adicionando elementos a pilha
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de paus");
	
		if(cartas.empty()){
		cout<<"Pilha vazia\n\n";
	}else{
		cout<<"Pilha com cartas\n\n";
	}
	
	cout<<"Tamanho da pilha: "<<cartas.size()<<"\n";//size é tamanho da pilha
	
	cout<<"Carta do topo: "<<cartas.top()<<"\n";//top apresenta a carta do topo
	
	cartas.pop();//retira o primeiro elemento da pilha, no caso Rei de paus
	
	cout<<"Tamanho da pilha: "<<cartas.size()<<"\n";//size é tamanho da pilha
	
	cout<<"Nova carta do topo: "<<cartas.top()<<"\n";
	
	
	while(!cartas.empty()){// PARA IR REMOVENDO AS CARTAS TUDO
		cout<<"Nova carta do topo: "<<cartas.top()<<"\n";
		cartas.pop();
	}
	
	return 0;
}
