//Curso de C++ #13 - Comando Switch Case
#include<iostream>
using namespace std;
int main(){
	
	int val;
	cout<< "Digite uma cor: \n";
	cout<<"[1]Verde\n[2]Vermelho\n[3]Azul\n";
	cin>>val;
	
	switch(val){
		case 1:
			cout<<"\nValor selecionado e Verde";
			break;
		case 2:
			cout<<"\nValor selecionado e Vermelho";
			break;
		case 3:
			cout<<"\nValor selecionado e Azul";
			break;
		default:
			cout<<"\nValor selecionado invalido";
				
	}
	
		cout<< "Digite uma cor: \n";
	cout<<"[1,2,3]Verde\n[4,5,6]Azul\n";
	cin>>val;
	
	switch(val){
		case 1:
		case 2:
		case 3:
			cout<<"\nValor selecionado e Verde";
			break;
		case 4:
		case 5:
		case 6:
			cout<<"\nValor selecionado e Azul";
			break;
		default:
			cout<<"\nValor selecionado invalido";
				
	}
	cout<<"\nDigite [1]Carro\n[2]Moto\n[3]Aviao\n[4]Helicoptero\n";
	cin>>val;
	switch(val){ //switch alinhado, um dentro do outro
		case 1:
		case 2:
			cout<<"\nTransporte Terestre";
			switch(val){
			case 1:
				cout<<"\nCarro selecionado";
				break;
			case 2:
				cout<<"\nMoto Selecionada";
				break;
		}
			break;
		case 3:
		case 4:
			cout<<"\nTransporte Aerio";
			switch(val){
			case 3:
				cout<<"\nAviao selecionado";
				break;
			case 4:
				cout<<"\nHelicoptero Selecionado";
				break;
		}
			break;
		default:
			cout<<"\nValor selecionado invalido";
				
	}
	
}
