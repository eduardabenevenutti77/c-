#include <iostream>
using namespace std;
int mult,soma;
main(){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"calcular a soma dos numeros impares que sao multiplos de cinco e que se encontram entre 1 a 1000\n";
	
	for(int i=1;i<=1000;i++){
		if(i%2==1 && i%5==0){ //faz a soma da quantidade de numeros impares que existem entre 1 a 1000
			soma += 1;
		}
	}
	cout<<"\na soma dos numeros impares|multiplos de 5 que estao entre 1 a 1000 : "<<soma<<"";
}
