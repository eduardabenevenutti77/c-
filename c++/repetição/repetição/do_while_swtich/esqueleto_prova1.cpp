/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui:__________________________________

Data: <<versão 01 ou versão_final>> :___________________________ 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

int idade, acumula, media,i;
using namespace std;

main ()
{  
	system("chcp 65001");
   for(int i=1; i<=3; i++)
   {
   
   do{
   	    cout<<"\n\n digite a idade da "<<i<<" pessoa: ";
   	    cin>> idade;
   
   	if((idade<0) || (idade>145))
   	{
   		cout<<"\n\n idade errada";
   		cout<<"\n\n informe novamente da "<<i<<" pessoa: ";
   		cin>>idade;
	   }
} while((idade<0) || (idade>145));
	     acumula += idade;
	     media=acumula/i;
	}
	     cout<<"a média das idades: "<<media<<"";
}

