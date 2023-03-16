#include <iostream>
using namespace std;
int vezes;
char caracter;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"alteração do programa anterior";
	
	cout<<"\ninforme a quantidade de vezes que será impresso: ";
	cin>>vezes;
	cout<<"\ninforme o caracter a ser impresso: ";
		cin>>caracter;
	for(int i=0; i<vezes; i++){
		cout<<" "<<caracter<<" ";
	}
}