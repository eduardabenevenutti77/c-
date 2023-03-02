#include<iostream>
#include<ctype.h>
using namespace std;
char vogal,a,e,i,o,u;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"insira um caracter:";
	cin>>vogal;
	vogal==toupper (vogal);
	
	if((vogal == 'a') || (vogal == 'e')|| (vogal == 'i') || (vogal == 'o') || (vogal == 'u'))
	{
		cout<<"o caracter: "<<vogal<<" é uma vogal";
	}
	else{
		cout<<"\no valor informado não corresponde com o que foi pedido pelo sistema!";
	}


	cout<<"\n\n";
}