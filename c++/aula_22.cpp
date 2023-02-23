#include<iostream>
using namespace std;
int idade,resp1,ano,ano1; //é uma variavel inteira

main (){
	system("chcp 65001");
	
	cout<<"\nquantos anos vc terá no futuro!\n";
	cout<<"qual ano vc nasceu?";
	cin>>ano;
	cout<<"em qual ano vc deseja descobrir a sua idade?";
	cin>>ano1; //variavel
	resp1 = ano1 - ano;
	//resp = idade+2072-2023; //efetua a operação e transforma o resultado em resp
	
	cout<<"\nvocê nasceu em "<<ano<<" e em " <<ano1<<", você terá "<<resp1<<" de idade.";
	cout<<"\n\n\n\n";
}  