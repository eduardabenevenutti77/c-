#include<iostream>
using namespace std;
float acumula,media,notas,i;
main (){
	for (notas>=0;notas<=4;notas++)
	{
	do{
		system("chcp 65001");
		
		cout<<"informe a primeira nota:";
		cin>>notas;
		
		cout<<"informe a primeira nota 2:";
		cin>>notas;
		
		cout<<"informe a primeira nota 3:";
		cin>>notas;
		
		cout<<"informe a primeira nota 4:";
		cin>>notas;
		
		if((notas<0) || (notas>10))
		{
			cout<<"\n\n informe novamente da "<<notas<<" nota: ";
			cin>>notas;
		}
		
	} while((notas>0)||(notas<=10));
	
	acumula += notas; 
	media = acumula/4;
}
	cout<<"a sua média é "<<media<<".";
	cout<<"\n\n\n\n\n";
}