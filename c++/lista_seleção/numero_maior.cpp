#include<iostream>
using namespace std;
int n1,n2;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"informe um número 1:";
	cin>>n1;
	cout<<"informe um número 2:";
	cin>>n2;
 
 	if(n1>n2)
 	{
 		cout<<"o número: "<<n1<<" é maior";
	 }
	 else
	 {if(n2>n1)
	 cout<<"o número:"<<n2<<" é maior";
	 }

	cout<<"\n\n";
}