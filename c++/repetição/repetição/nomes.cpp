#include <iostream>
using namespace std;
int idade, acum_idademenor, acum_idade;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	cout<<"\tidades das pessoas\n";
	for(int i=0;i<15;i++){
		cout<<"pessoa "<<i+1<<", informe sua idade:";
		cin>>idade;
		if(idade<18){
			acum_idademenor = acum_idademenor + idade;
		} else{
			acum_idade = acum_idade + idade;
		}
	}
	cout<<"a menor de idade: "<<acum_idademenor<<"";
	cout<<"a maior de idade: "<<acum_idade<<"";
}