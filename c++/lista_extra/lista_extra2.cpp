#include<iostream>
#include<cmath>
using namespace std;
int valor,quadrado,triplo,dobro,raiz;

main (){
	system ("chcp 65001");
	cout<<"insira um valor:";
	cin>>valor;
	
	dobro = valor * 2;
	cout<<"o dobro de "<<valor<<" é: "<<dobro<<"\n";
	
	triplo = valor * 3;
	cout<<"o triplo de "<<valor<<" é: "<<triplo<<"\n";
	
	raiz = sqrt(valor);
	cout<<"a raiz quadrada é: "<<raiz<<"\n";
	
	quadrado = valor * valor;
	cout<<"o quadrado de "<<valor<<" é: "<<quadrado<<"";
	
}