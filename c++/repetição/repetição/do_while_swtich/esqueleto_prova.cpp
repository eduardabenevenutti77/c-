/* 
Faculdade SENAC - Joinville - SC
Prof¬™: Cl√°udia Werlich
Atividade Avaliativa de Introdu√ß√£o a Programa√ß√£o de Computadores

Insira Seu nome completo aqui:Maria Eduarda Benevenutti

Data: <<vers√£o 01 ou vers√£o_final>> :___________________________ 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

int op;
using namespace std;
main ()
{
   system("chcp 65001");// para usar acentos
   setlocale(LC_ALL, "portuguese");
   cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
   system ("cls"); // limpar a tela
   system ("color 2"); // usar a cor verde
   cout<<"ATIVIDADE AVALIATIVA DE INTRODU«√O A PROGRAMA«√O \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza operaÁıes matem·ticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de vari·veis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza operaÁıes aritmÈticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repetiÁ„o em algoritmos de acordo com o contexto. \n";
   
   
   do{
   system ("cls");
   cout<<"\n\t\tUnidades de medidadas";
   cout<<"\n [1] Quest√£o 01 - << Converta o valor para massa>>";
   cout<<"\n [2] Quest√£o 02 - << Converta o valor para comprimento>>";
   //cout<<"\n [3] Quest√£o 03 - << >>";
   //cout<<"\n [4] Quest√£o 04 - << >>";
   //cout<<"\n [5] Quest√£o 05 - << >>";
   cout<<"\n [3] FIM <<BÙnus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OP«√O --> ";
   cin>>op;
  switch (op)
  {
    case  1:{
             system ("color 2");
             cout<<"\n Op√ß√£o 01";
             cout<<" \n APERTE UMA TECLA";
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Op√ß√£o 02";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    //case 3:{
             //system ("color 3");
             //cout<<"\n Op√ß√£o 03";
             //cout<<" \n APERTE UMA TECLA";
             //getch(); //ou system("pause");
             //break;
           //}
    //case 4:{
             //system ("color 3");
             //cout<<"\n Op√ß√£o 04";
             //cout<<" \n APERTE UMA TECLA";
             //getch(); //ou system("pause");
             //break;
           //}
    //case 5:{
             //system ("color 3");
             //cout<<"\n Op√ß√£o 02";
             //cout<<" \n APERTE UMA TECLA";
             //getch(); //ou system("pause");
             //break;
           //}
    case 3:{
             system ("color 8");
             cout<<"\n\n <<Insira aqui uma mensagem de despedida.>>\n ";
             getch();
             break;
            }
   default: {
               cout<<"\nSah ein Knabí ein Rˆslein stehn,\nRˆslein auf der Heiden,\nWar so jung und morgenschˆn,\n";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=3);
cout<<"\n\n\n ";
}
