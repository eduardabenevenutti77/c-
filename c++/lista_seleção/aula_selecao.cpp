#include<iostream>
#include<ctype.h>
using namespace std;
char letra;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"teste uma letra ->";
	cout<<" F ou M:";
	cin>>letra;
	letra==toupper (letra); //tranforma a letra em maiuscula
	
	if (letra=='F')
	{ //se for f, faz tal coisa
		cout<<"f -> feminino\n";
		//cout<<"F -> feminino\n";
	}
	else
	{if (letra=='M')
	{ //se não for f, faça tal coisa
		cout<<"m -> masculino";
		//cout<<"M -> masculino";
	}
	else{
		cout<<"\no valor informado não corresponde com o que foi pedido pelo sistema!";
	}
	}
	
	cout<<"\n\n";
}