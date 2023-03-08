#include<iostream>
using namespace std;
#define PI 3.14;
int r, altura;
double volume;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	cout<<"informe o valor do raio:";
	cin>>r;
	cout<<"informe o valor da altura:";
	cin>>altura;
	volume = r * r * PI * altura;
	if (volume){
		cout<<"o volume é "<<volume<<" cm.";
	}
	cout<<"\n\n";
}
