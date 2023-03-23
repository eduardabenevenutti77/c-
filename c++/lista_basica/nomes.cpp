#include <iostream>
using namespace std;
int idade, menor, maior=0, num=0;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	cout<<"\tidades das pessoas\n";
	for(int i=1;i<=5;i++){
		cout<<"pessoa "<<i<<", informe sua idade:";
		cin>>num;
		if((i == 1) || (num<menor))
		{
			menor=num;
		}
		if (num>maior){
			maior = num;
		}
}
	cout<<"\na menor de idade: "<<menor;
	cout<<"\na maior de idade: "<<maior;
}