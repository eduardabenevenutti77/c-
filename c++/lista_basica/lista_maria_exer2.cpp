//leia as horas trabalhadas e o valor delas e informe o falor que deverá receber no final do mes
#include<iostream>
using namespace std;
float valor,tempo,recebe,mes;
main(){
	system("chcp 65001");
	cout<<"qual é o valor da hora trabalhada?";
	cin>>valor;
	cout<<"qual é o tempo trabalhado?";
	cin>>tempo;
	recebe = valor * tempo;
	mes =  recebe * 31;
	cout<<"O valor de horas trabalhadas é "<<valor<<" e o tempo de horas trabalhada é "<<tempo<<"h ao mes, portanto, você deverá receber "<<mes<<" reais.";
}