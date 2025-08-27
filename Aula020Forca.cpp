//Curso de C++ #20 - Jogo da Forca
#include<iostream>
#include<stdlib.h>                                   //BIBLIOTECA DE COMANDO CMD
using namespace std;
int main(){
	
	char esc='s';                                    //ESCOLHA PARA O PROGRAMA VOLTAR PARA O INICIO
	do{                                             //O PROGRAMA SERA EXECUTADO PELO MENOS UMA VEZ
	
	
	
	char palavra[30],           //VAI ARMAZENAR O VALOR DA PALAVRA
	 letra[1],                  //SERA O VALOR DIGITA, SE A LETRA DIGITADA APARECE NA PALAVRA
	 secreta[30];               //A PALAVRA OCULTA, Q SERA SENDO REVELADA A MEDIDA Q A PESSOA VAI ACERTANDO
	int tam,                    //TAMANHO DA PALAVRA
	i,                          //CONTADOR PARA PERCORRER A PALAVRA
	chances,                    // A QUANTIDADE DE VIDAS DURANTE O JOGO
	acertos;                    // VERIFICAÇÃO SE JA ACERTOU TODAS AS LETRAS
	bool acerto=false;          //VERIFICAÇÃO SE A LETRA DIGITADA ESTA CERTA
	bool existeLetra = false;   //VERIFICAÇÃO SE A LETRA JA FOI DIGITADA ANTERIORMENTE
	
	
	
	chances = 6;                
	tam = 0;
	i=0;
	acertos=0;
	cout<<"\nFale para seuamigo tampar os olhos e digite a palavra secreta\n";
	cin>>palavra;
	system("cls");
	
	
	
	while(palavra[i] != '\0'){                   //VAI PERCORRER O ARRAY PALAVRA ATE ENCONTRAR UM ENTER, Q É O \0, QUE É COLOCADO APOS
//	                                               ESCREVER A PALAVRA E APERTAR ENTER

		i++;
		tam++;                                   //ENCONTRAMOS O TAMANHO DA PALAVRA;
		
		
	}
	
	for(i=0;i<30;i++){                          //PERCORRE O TAMANHO DA PALAVRA POSSIVEL
		
		secreta[i]='-';                        //ARMAZENA - EM TODOS OS ESPACOS POSSIVEIS O VALOR DE '-'
	}
	
		while((chances>0) && (acertos<tam)){  //O PROGRAMA SERA EXECUTADO ATE Q A CONDIÇÃO FOR VERDADEIRA, OU SEJA
		                                      //SE AINDA TIVER VIDAS OU AINDA FALTAR LETRAS PARA ACERTAR
		
		cout<<"\nChances restantes: "<<chances<<"\n";
		cout<<"Palavra secreta:  ";
		for(i=0;i<tam;i++){
			cout<<secreta[i];                 //SERA ESCRITO A QUANTODADE DE '-' COM A MESMA QUANTIDADE DE LETRAS DA PALAVRA
		}
		
		cout<<"\n\nDigite uma letra:  ";     //PEDE PARA O JOGADOR DIGITAR UMA LETRA
		cin>>letra[0];                       // LE A LETRA E ARMAZENA
		
		
		for(i=0;i<tam;i++){                  //SERA FEITA AS VALIDACOES DA PALAVRA
		
		
			 if (secreta[i] == letra[0]) {   //SE A LETRA JA TIVER SIDO DIGITADA SERA INTERRONPIDO ESSE IF E PULADO PARA O PROXIMO, ONDE 
			                                 //SERA COMPUTADO UM ERRO PARA O JOGADOR
                existeLetra = true;
                break;                       //FINALIZA O IF
            }
            
            
		else if(palavra[i]==letra[0]){      //SE AINDA NÃO FOI DIGITADA, VERIFICA SE A LETRA DIGITADA PERTENCE A PALAVRA
			acerto=true;
			secreta[i]=palavra[i];          //REVELA A LETRA NA PALAVRA DIGITADA
			acertos++;                     //CONTABILIZA UM ACERTO
		}
		
	 }
		if(!acerto){                       //CONTABILIZA O ERRO
			chances--;
		}
		
		acerto=false;                     //RETORNA AS CONDIÇOES ORIGINAIS DO SISTEMA
		system("cls");
		
	}
	
	if(acertos==tam){
		cout<<"\n Paraben voce ganho\n";
		
	}else{
		cout<<"\nVoce perdeu\n";
	}
	system("pause");
		system("cls");
	cout<<"\n\nDeseja jogar novamente?[s]: "; 
	cin>>esc;
	system("cls");                     //LIMPA O CMD
}while(esc == 's');                    //VERIFICAÇÃO PARA INICIAR OU FINALIZAR O PROGRAMA NOVAMENTE

	return 0;
}


