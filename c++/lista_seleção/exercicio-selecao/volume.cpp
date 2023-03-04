#include<iostream>
using namespace std;
int r,altura,volume;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	cout<<"informe o valor do raio:";
	cin>>r;
	cout<<"informe o valor da altura:";
	cin>>altura;
	volume=3.14*(r**2)*altura;
	if(volume)
	{
		cout<<"a altura da lata de óleo é "<<altura<<", e ela tem o raio de "<<r<<" cm";
		cout<<"portanto, o volume é "<<volume<<"";
	}
	cout<<"\n\n";
}
