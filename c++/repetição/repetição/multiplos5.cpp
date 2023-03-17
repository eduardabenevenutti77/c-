#include <iostream>
using namespace std;
int mult,cont_mult;
main(){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"calcular a soma dos números ímpares que são múltiplos de cinco e que se encontram entre 1 a 1000\n";
	
	for(int i=1;i<1000;i++){
		if(mult%5==0){
			cont_mult = cont_mult + mult;
		}
	}
	cout<<"\nmúltiplos de 5:"<<cont_mult<<"";
}