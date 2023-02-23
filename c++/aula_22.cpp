#include<iostream>
using namespace std;
int idade,resp1,ano,ano1; //é uma variavel inteira

main (){
	system("chcp 65001");
	
	cout<<"\nquantos anos vc terá em 2072!\n";
	cout<<"qual ano vc nasceu?";
	cin>>ano;
	cout<<"\n qual ano vc deseja descobrir a sua idade?";
	cin>>ano1; //variavel
	resp1 = ano1 - ano;
	//resp = idade+2072-2023; //efetua a operação e transforma o resultado em resp
	
	cout<<"vc nasceu em "<<ano<<" vc terá" <<ano1<<", vc terá "<<resp1<<".";
	cout<<"\n\n\n\n";
}  