#include <iostream>

using namespace std;

main(){
	system("chcp 65001");
	cout<<"par:";
	for(int i=0; i<=100;i++)
	{
		if(i%2==0)
		cout<<" "<<i;
	}
	cout<<"\nímpar:";
	for(int i=0; i<=100; i++)
	{
		if(i%3==0)
		cout<<" "<<i;
	}
	cout<<"\n\n\n\n";
}