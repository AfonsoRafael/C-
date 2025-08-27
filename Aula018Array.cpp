//Curso de C++ #18 - Array / Vetor
//ARRAY / VETOR SERVE PARA ARMAZENAR DADOS DO MESMO TIPO EM UMA VARIAVEL

#include<iostream>
using namespace std;

int main(){
	//TIPO NOME [TAMANHO]
//	int vetor[10]; //ESTA SENDO INDICADO Q O VETOR TEM 10 POSIÇÕES COMEÇANDO PELO 0 ATE 
/*
	int vetor[5];
	int i;
	
	vetor[0]=10;
	vetor[1]=20;
	vetor[2]=30;
	vetor[3]=40;
	vetor[4]=50;
//	vetor[5]=60;    ISSO DA UM ERRO POIS O VETOR TEM TAMANHO 5 E NÃO VAI ATE CINCO

	for(i=0;i<5;i++){
	cout<< vetor[i]<<"\n";
	
	
}
	for(i=0;i<sizeof(vetor)/4;i++){//SIZEOF LE O VETOR EM BYTE, MAS O INT VALE 4 BYTE, POIS ISSO É NECESSARIO DIVIDIR POR 4	
	cout<< vetor[i]<<"\n";
	
	
}
*/
	int tam=5;
	int vetor[tam]={10,20,30,40,50};
	int i;
	
	for(i=0;i<tam;i++){
		cout<< vetor[i]<<"\n";
	}
	
	
	
	return 0;
}
