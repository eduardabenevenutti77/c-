#include<iostream>
using namespace std;
int valor;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"informe um valor:";
	cin>>valor;
	
	if(valor>0)
	{
		cout<<"o número "<<valor<<" é positivo;";
	}
	else
	{if(valor<0)
		cout<<"o número "<<valor<<" é negativo;";
	}
	
	cout<<"\n\n";
}