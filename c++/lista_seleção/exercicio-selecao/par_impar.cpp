#include<iostream>
using namespace std;
int valor;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	
	cout<<"informe um valor:";
	cin>>valor;
	
	if(valor%2==0)
	{
		cout<<"o n�mero "<<valor<<" � par;";
	}
	else
		cout<<"o n�mero "<<valor<<" � �mpar;";
	
	cout<<"\n\n";
}
