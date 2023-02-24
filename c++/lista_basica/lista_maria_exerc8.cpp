#include<iostream>
using namespace std;
float altura,peso;
int c,f;
main (){
	system("chcp 65001");
	cout<<"informe a sua altura e o sistema vai falar qual é o seu peso ideal:";
	cin>>altura;
	peso = (72.7 * altura) - 58;
	cout<<"como a sua altura é "<<altura<<"cm, seu peso ideal é de "<<peso<<"kg";
	
	cout<<"\ninforme a temperatura em Celsius:";
	cin>>c;
	f = (9 * c + 160) / 5;
	cout<<"a temperatura convertida para Fahrenheit é "<<f<<".";
	
}