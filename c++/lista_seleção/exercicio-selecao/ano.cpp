#include<iostream>
using namespace std;
int ano;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	
	cout<<"informe um ano:";
	cin>>ano;
	
	if(((ano%4==0)&&(ano%100!=0))||ano%400==0)
	{
		cout<<"o ano "<<ano<<" � bisexto;";
	}
	else
		cout<<"o ano "<<ano<<" n�o � bisexto;";
	
	cout<<"\n\n";
}
