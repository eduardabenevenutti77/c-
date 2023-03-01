#include<iostream>
using namespace std;
char letra;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"teste uma letra ->";
	cout<<" F ou M:";
	cin>>letra;
	if(letra=='f'){ //se for f, faz tal coisa
		cout<<"f -> feminino\n";
	}
	else
	{if(letra=='m'){ //se não for f, faça tal coisa
		cout<<"m -> masculino";
	}
	}
	cout<<"\n\n";
}