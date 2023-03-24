/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui:Maria Eduarda Benevenutti

Data: <<versÃ£o 01 ou versão_final>> :___________________________ 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();

float t1,t;
int op;
using namespace std;
main ()
{
   system("chcp 65001");// para usar acentos
   setlocale(LC_ALL, "portuguese");
   cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
   system ("cls"); // limpar a tela
   system ("color 2"); // usar a cor verde
   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza operações aritméticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
   
   
   do{
   system ("cls");
   cout<<"\n\t\tUnidades de medidadas";
   cout<<"\n [1] QuestÃ£o 01 - << Converta o valor para massa>>";
   cout<<"\n [2] QuestÃ£o 02 - << Converta o valor para comprimento>>";
   //cout<<"\n [3] QuestÃ£o 03 - << >>";
   //cout<<"\n [4] QuestÃ£o 04 - << >>";
   //cout<<"\n [5] QuestÃ£o 05 - << >>";
   cout<<"\n [3] FIM <<Bônus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
    case  1:{
             system ("color 2");
             cout<<"\n Converta o valor para massa";
             cout<<" \n Informe o valor que deseja converter de kg para hg? ";
             cin>>t1;
             for(int i=0;i<=t1;i++){
			 
             t = t1*10;
         }
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Converta o valor para comprimento";
             cout<<" \n APERTE UMA TECLA";
             getch(); //ou system("pause");
             break;
           }
    //case 3:{
             //system ("color 3");
             //cout<<"\n OpÃ§Ã£o 03";
             //cout<<" \n APERTE UMA TECLA";
             //getch(); //ou system("pause");
             //break;
           //}
    //case 4:{
             //system ("color 3");
             //cout<<"\n OpÃ§Ã£o 04";
             //cout<<" \n APERTE UMA TECLA";
             //getch(); //ou system("pause");
             //break;
           //}
    //case 5:{
             //system ("color 3");
             //cout<<"\n OpÃ§Ã£o 02";
             //cout<<" \n APERTE UMA TECLA";
             //getch(); //ou system("pause");
             //break;
           //}
    case 3:{
             system ("color E");
             cout<<"\nSah ein Knab’ ein Röslein stehn,\nRöslein auf der Heiden,\nWar so jung und morgenschön,\nLief er schnell es nah zu sehn,\nSah’s mit vielen Freuden.\nRöslein, Röslein, Röslein rot,\nRöslein auf der Heiden.\n\nKnabe sprach: “Ich breche dich,\nRöslein auf der Heiden.”\nRöslein sprach: “Ich steche dich,\nDass du ewig denkst an mich,\nUnd ich will’s nicht leiden.\nRöslein, Röslein, Röslein rot,\nRöslein auf der Heiden\n\nUnd der wilde Knabe brach\n‘s Röslein auf der Heiden.\nRöslein wehrte sich und stach,\nHalf ihm doch kein Weh und Ach,\nMusst es eben leiden.\nRöslein, Röslein, Röslein rot,\nRöslein auf der Heiden.";
             getch();
             break;
            }
   default: {
               cout<<"\n Informou a opção errada";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=3);
cout<<"\n\n\n ";
}
