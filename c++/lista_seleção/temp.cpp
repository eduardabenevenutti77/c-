#include<iostream>
using namespace std;
int c,tem;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	
	cout<<"informe a temperatura em celsius:";
	cin>>c;
	
	tem = (9 * c + 32) / 5;
	
	if(c)
	{
		cout<<"a temperatura em fahrenheit � "<<tem<<" f;";
	}
	if(tem<0){
			cout<<"\na temperatura � negativa;";
	}
	if(tem>35){
		cout<<"\na temperatura � maior que 35";
	}
	else{if(10<tem<38){
		cout<<"\na temperatura est� entre 10C a 38C";
	}
	}
}
