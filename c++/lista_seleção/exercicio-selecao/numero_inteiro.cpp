#include<iostream>
using namespace std;
int n1,n2,n3,temp;
main (){
	system("chcp 65001");
	system("cls");
	cout<<"\n\n";
	
	cout<<"informe um n�mero 1:";
	cin>>n1;
	
	cout<<"informe um n�mero 2:";
	cin>>n2;
	
	cout<<"informe um n�mero 3:";
	cin>>n3;
	
	
	if(n2 > n1){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n3 > n1){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if(n3 > n2){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
	cout <<n1<<" -> "<<n2<<" -> "<<n3<<endl;
}
