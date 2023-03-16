#include <iostream>
using namespace std;
int num, qtnd_neg;
int const TAM = 10; //constante de tamanho
main(){
	system("chcp 65001");
	cout<<"pesquisa\n";
    for (int i=1; i<=TAM;i++)
    {
    	cout<<"informe "<<i<<"* número: ";
    	cin>>num;
    	if(num<0)
   	 		{
   	 			qtnd_neg++;
			}
		cout<<"quantidade de números negativos: "<<qtnd_neg<<".";
	}
}