//exemplo de c++;
// \a som de notificação

#include<iostream> // add a biblioteca string de entrada e saída;
#define ANSI_COLOR_RED "\x1b[31m"
using namespace std; //para usar o cout e o cin;


main () //serve para iniciar o programa;
{
	system("chcp 65001"); //deixa com acento 
	printf(ANSI_COLOR_RED "hello, word!");
	cout<<"\nteste de c++";	
	cout<<"\n\n\n\n\n"; //pula linha
}