//transforme quilometros em metros
#include<iostream>
using namespace std;
int km,metros;
main (){
	system("chcp 65001");
	cout<<"informe o km:";
	cin>>km;
	metros = km * 1000;
	cout<<km<<"km é "<<metros<<" m convertidos";
}