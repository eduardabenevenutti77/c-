#include<iostream>
using namespace std;
float nt1,nt2,nt3,nt4,media;
main (){
	system("chcp 65001");
	
	cout<<"informe a primeira nota:";
	cin>>nt1;
	
	cout<<"informe a primeira nota 2:";
	cin>>nt2;
	
	cout<<"informe a primeira nota 3:";
	cin>>nt3;
	
	cout<<"informe a primeira nota 4:";
	cin>>nt4;
	media = (nt1 + nt2 + nt3 + nt4) / 4;
	cout<<"a sua média é "<<media<<".";
	
	cout<<"\n\n\n\n\n";
}