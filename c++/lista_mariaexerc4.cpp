//imprama o valor bruto e com desconto do inss
#include<iostream>
using namespace std;
int salario,desc,desc1,valor_desc;
main (){
 	system("chcp 65001");
 	cout<<"qual � o seu sal�rio?";
 	cin>>salario;
 	desc = salario * 13;
 	desc1 = desc / 100;
 	valor_desc = salario - desc1;
 	cout<<"o seu sal�rio � de "<<salario<<", portanto o seu desconto � de "<<desc1<<" reais. Sendo assim, o valor final � de"<<valor_desc<<"";
}
