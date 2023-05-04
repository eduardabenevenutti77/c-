#include <iostream>
using namespace std;
int idade, acum_idademenor, acum_idade, maior, numero, cont;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	cout<<"\tidades das pessoas\n";
	for(int i=0;i<4;i++){
		cout<<"pessoa "<<i+1<<", informe sua idade:";
		cin>>idade;
		if(idade<18){
			acum_idademenor += 1;
		} else{
			acum_idade += 1;
		}
		if(idade = 1){
			acum_idademenor = maior;
			acum_idade = numero;
		}
		else if(numero>acum_idade){
			acum_idade= numero;
			
		} else if(numero<acum_idademenor){
		
    		acum_idademenor = numero;
	}
	cont++;
}
	cout<<"a menor de idade: "<<acum_idademenor<<"";
	cout<<"a maior de idade: "<<acum_idade<<"";
}
