#include<iostream>
using namespace std;
int valor;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"informe um valor:";
	cin>>valor;
	
	if(valor%2==0)
	{
		cout<<"o número "<<valor<<" é par;";
	}
	else
		cout<<"o número "<<valor<<" é ímpar;";
	
	cout<<"\n\n";
}