#include <iostream>
using namespace std;
int teste;
int num, contador_posi, contador_nega;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	cout<<"\tnúmeros negativos com contador em c++";
	
	cout<<"\ninforme a quantidade de números a serem pedidos ao usúario: ";
	cin>>teste;
	for(int i=0; i<teste; i++){
	
	cout<<"\ninforme o "<<i+1<<" número:";
	cin>>num;
	if(num>0){
		contador_posi = contador_posi + 1;
	} else {
		contador_nega = contador_nega + 1;
	}
}
	cout<<"\nexistem "<<contador_posi<<" números positivos";
	cout<<"\nexistem "<<contador_nega<<" números negativos";
	
}