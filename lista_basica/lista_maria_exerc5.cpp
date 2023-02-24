//converta um valor em metros para centrimetros
#include<iostream>
using namespace std;
int metros,trans;
main (){
	system("chcp 65001");
	cout<<"informe o valor que você deseja transformar em centrimetros:";
	cin>>metros;
	trans = metros * 100;
	cout<<metros<<" metros é "<<trans<<" cm.";
}