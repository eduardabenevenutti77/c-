/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui:Maria Eduarda Benevenutti

Data: <<versão 01 ou versão_final>> :___________________________ 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

int op,base,altura,p,a,b,lado,di,c,raio,ldA,ldB,ldC;
using namespace std;
main ()
{
   system("chcp 65001");// para usar acentos
   setlocale(LC_ALL, "portuguese");//usar acentos na vers�o antiga
   cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
   system ("cls"); // limpar a tela
   system ("color 2"); // usar a cor verde
   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMA��O \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza operações aritméticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
   
   
   do{
   system ("cls");
   //system ("color, 9");
   //textbackground(1);
   cout<<"\n F�RMULAS GEOM�TRICAS";
   cout<<"\n [1] Quest�o 01 - <<CALCULE A F�RMULA DO RET�NGULO>>";
   cout<<"\n [2] Quest�o 02 - <<CALCULE A F�RMULA DO QUADRADO >>";
   cout<<"\n [3] Quest�o 03 - <<CALCULE A F�MULA DO C�RCULO >>";
   cout<<"\n [4] Quest�o 04 - <<CALCULE A F�RMULA DO TR�NGULO >>";
   cout<<"\n [5] Quest�o 05 - <<CALCULE A F�RMULA DO TRAP�ZIO >>";
   cout<<"\n [6] FIM <<B�nus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OP��O --> ";
   cin>>op;
  switch (op)
  {
    case  1:{
             system ("color B");
             cout<<"\n Ret�ngulo: ";
             cout<<" \n Informe o valor da base: ";
             cin>>base;
             cout<<"\n Informe o valor da altura: ";
             cin>>altura;
             
             p = (2*base)+(2*altura);
             a = base*altura;
             cout<<"o perimetro � = "<<p<<" cm.";
             cout<<"\na �rea � = "<<a<<" cm.";
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 6");
             cout<<"\n Quadrado: ";
             cout<<" \n Informe o valor lateral do quadrado: ";
             cin>>lado;
             p = lado*4;
             a = lado *2;
             cout<<"o perimetro � = "<<p<<" cm.";
             cout<<"\na �rea � = "<<a<<" cm.";
             getch(); //ou system("pause");
             break;
           }
    case 3:{
             system ("color 7");
             cout<<"\n C�rculo: ";
             cout<<" \n Informe o valor do raio: ";
             cin>>raio;
             c = 2 * 3.14 * raio;
             a = 3.14 * raio * 2;
             cout<<"a circunferencia � = "<<c<<" cm.";
             cout<<"\na �rea � = "<<a<<" cm.";
             
             getch(); //ou system("pause");
             break;
           }
    case 4:{
             system ("color E");
             cout<<"\n Tri�ngulo: ";
             cout<<" \n Informe o valor do lado A: ";
             cin>>ldA;
             cout<<"\n Informe o valor do lado B: ";
             cin>>ldB;
             cout<<"\n Informe o valor do lado C: ";
             cin>>ldC;
             cout<<"\n Informe a altura: ";
             cin>>altura;
             cout<<"\n Informe a base: ";
             cin>>base;
             p = ldA+ldB+ldC;
             a = 0.5*altura*base;
             cout<<"o perimetro � = "<<p<<" cm.";
             cout<<"\na �rea � = "<<a<<" cm.";
             getch(); //ou system("pause");
             break;
           }
    case 5:{
             system ("color C");
             cout<<"\n Trap�zio";
             cout<<" \n Informe o valor do lado A:";
             cin>>ldA;
             
             getch(); //ou system("pause");
             break;
           }
    case 6:{
             system ("color D");
             cout<<"\n\tGEFUNDEN (1813)\n\nIch ging im Walde\nSo f�r mich hin,\nUnd nichts zu suchen,\nDas war mein Sinn.\n\nIm Schatten sah ich\nEin Bl�mchen stehn,\nWie Sterne leuchtend,\nWie �uglein sch�n.\nIch wollt es brechen,nDa sagt es fein:\nSoll ich zum Welken\nGebrochen sein?\n\nIch grub�s mit allen\nDen W�rzlein aus.\nZum Garten trug ich�s\nAm h�bschen Haus.\n\n\n\tJohan Wolfang von Goethe ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=6);
cout<<"\n\n\n ";
}
