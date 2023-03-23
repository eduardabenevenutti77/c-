#include<iostream>
using namespace std;
float nt1,nt2,nt3,nt4,media,notas;
main (){
	//for (notas>=0;notas<=10;i++)
	do{
		system("chcp 65001");
		
		cout<<"informe a primeira nota:";
		cin>>nt1;
		
		cout<<"informe a primeira nota 2:";
		cin>>nt2;
		
		cout<<"informe a primeira nota 3:";
		cin>>nt3;
		
		cout<<"informe a primeira nota 4:";
		cin>>nt4;
				
		
	} while((notas>0)||(notas<=10));
	
	notas = nt1 + nt2 + nt3 +nt4/4;
	cin>>notas;
	cout<<"a sua média é "<<notas<<".";
	cout<<"\n\n\n\n\n";
}