#include<iostream>
using namespace std;
int n1,n2;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	
	cout<<"informe um n�mero 1:";
	cin>>n1;
	cout<<"informe um n�mero 2:";
	cin>>n2;
 
 	if(n1>n2)
 	{
 		cout<<"o n�mero "<<n1<<" � maior";
	 }
	 if(n2>n1){
	 cout<<"o n�mero "<<n2<<" � maior";
	 }
	 else{
	 	cout<<" os valores s�o iguais";	
	 }
	 

	cout<<"\n\n";
}
