#include<iostream> 
#define ANSI_COLOR_RED "\x1b[31m" //deixa as letras coloridas!
using namespace std; 

main () 
{
	system("chcp 65001"); //deixa com acento 
	printf(ANSI_COLOR_RED "hello, word!");
	cout<<"\nteste de c++";	
	cout<<"\n\n\n\n\n"; 
}