#include<iostream>
using namespace std;
int valor;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	
	cout<<"informe um valor:";
	cin>>valor;
	
	if(valor>0)
	{
		cout<<"o n�mero "<<valor<<" � positivo;";
	}
	else
	{if(valor<0)
		cout<<"o n�mero "<<valor<<" � negativo;";
	}
	
	cout<<"\n\n";
}
