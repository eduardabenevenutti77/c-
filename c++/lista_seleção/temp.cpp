#include<iostream>
using namespace std;
int c,tem;
main (){
	system("chcp 65001");
	cout<<"\n\n";
	
	cout<<"informe a temperatura em celsius:";
	cin>>c;
	
	tem = (9 * c + 160) / 5;
	
	if(c)
	{
		cout<<"a temperatura em fahrenheit é "<<tem<<";";
	}
}