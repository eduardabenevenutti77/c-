#include <iostream>
using namespace std;
int num;
main (){
	system ("chcp 65001");
	
	cout<<"\n\n\n";
	cout<<"\t tabuada com a estrutura de repetição for\n";
	cout<<"\n\ninforme um número:";
	cin>>num;
	
	for(int i=0; i<=10; i++)
	{
		cout<<"\n"<<num<<"x"<<i<<"="<<num*i;
	}
}