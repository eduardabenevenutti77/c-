//Fup que peça 5 números. Imprima: a soma, a subtração, o produto e a divisão entre esses números. Atenção: como resultado mostre obrigatoriamente 2 casas decimais como resultado.
#include<iostream>
int n1,n2,n3,n4,n5,soma,sub,pd,d,d1,d2,d3,d4;
using namespace std;
main (){
	system("chcp 65001");
	cout<<"informe o primeiro número:";
	cin>>n1;
	cout<<"informe o segundo número:";
	cin>>n2;
	cout<<"informe o terceiro número:";
	cin>>n3;
	cout<<"informe o quarto número:";
	cin>>n4;
	cout<<"informe o quinto número:";
	cin>>n5;
	
	soma = n1 + n2 + n3 + n4 + n5;
	cout<<"a soma é: "<<soma<<"\n";
	
	sub = n1 - n2 - n3 - n4 - n5;
	cout<<"a subtração é: "<<sub<<"\n";
	
	pd = n1 * n2 * n3 * n4 * n5;
	cout<<"o produto é: "<<pd<<"\n";
	
	d1 = n1 / n2;
	d2 = d1 / n3;
	d3 = d2 / n4;
	d4 = d4 / n5;
	d = d1,d2,d3,d4;
	cout<<"a divisão é: "<<d<<"";
	
}