#include<iostream>
using namespace std;
int lado1,lado2,lado3;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"informe o lado 1:";
	cin>>lado1;
	
	cout<<"informe o lado 2:";
	cin>>lado2;
	
	cout<<"informe o lado 3:";
	cin>>lado3;
	
	if(lado1 == lado2 == lado3){
		
		cout<<"esse triângulo é equilátero, pois possue os mesmos valores laterais";
	}
	cout<<"\n\n";
}