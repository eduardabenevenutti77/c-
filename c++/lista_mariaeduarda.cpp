//imprama o sucessor e o antecessor de um número
#include<iostream>
using namespace std;
int num,ant,su;
main (){
	system("chcp 65001");
	cout<<"informe um número:";
	cin>>num;
	ant = num - 1;
	su = num + 1;
	cout<<"o antecessor de"<<num<<" é "<<ant<<" e o seu sucessor é "<<su<<".";
}