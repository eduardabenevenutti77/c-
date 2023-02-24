#include<iostream>
using namespace std;
float a,b,a1,b1,b5,a2;
main (){
	system("chcp 65001");
	cout<<"informe o valor da variável A:";
	cin>>a;
	cout<<"informe o valor da variável B:";
	cin>>b;
	
	a2 = b;
	b5 = a;
	b1 = b;
	a1 = a;
	
	cout<<"valor invertido de A é: "<<b<<", e valor invertido de B é: "<<a<<" | antes -> a:"<<a1<<" e b:"<<b1<<"";
}