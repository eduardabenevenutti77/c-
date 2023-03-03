#include<iostream>
using namespace std;
char msg,local,parente,dever,trabalho,amor,feliz,arma,analise,sim;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"trocou mensagens com a vítima? SIM/NÃO:";
	if( msg == sim){
		cout<<"armazene a informação!\n";
	}
	cin>>msg;
	cout<<"esteve no local do crime? SIM/NÃO:";
	if( local == sim){
		cout<<"armazene a informação!\n";
	}
	cin>>local;
	cout<<"é parente ou reside perto da vítima? SIM/NÃO:";
	cin>>parente;
	if( parente == sim){
		cout<<"armazene a informação!\n";
	}
	cout<<"devia algum valor para a vítima? SIM/NÃO:";
	cin>>dever;
	if( dever == sim){
		cout<<"armazene a informção!\n";
	}
	cout<<"trabalha ou trabalhou com a vítima? SIM/NÃO:"; 
	cin>>trabalho;
	if( trabalho == sim){
		cout<<"armazene a informação!\n";
	}
	cout<<"possui algum tipo de relacionamento amoroso com a vítima? SIM/NÃO:"; 
	cin>>amor;
	if( amor == sim){
		cout<<"armazene a informação!\n";
	}
	cout<<"ficou feliz pelo destino fatídico na vítima? SIM/NÃO:";
	cin>>feliz;
	if( feliz == sim)
	cout<<"possui algum tipo de arma de fogo? SIM/NÃO:";
	cin>>arma;
	if( arma == sim){
	}
	else{if(sim >= 4)
		cout<<"suspeito";
	}

}