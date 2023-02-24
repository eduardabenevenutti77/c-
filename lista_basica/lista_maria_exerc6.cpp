//transforme quilometros em metros
#include<iostream>
using namespace std;
int km,metros;
float hora,seg;
main (){
	system("chcp 65001");
	cout<<"informe o km:";
	cin>>km;
	metros = km * 1000;
	cout<<km<<"km é "<<metros<<"m convertidos.";
	
	cout<<"informe o horario (hora) a ser convertido em segundos:";
	cin>>hora;
	seg = hora * 3600;
	cout<<hora<<"h convertidos em segundos é "<<seg<<"s.";
}