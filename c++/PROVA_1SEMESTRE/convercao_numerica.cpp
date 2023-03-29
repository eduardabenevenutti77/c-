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

float t1,c,c2,c3,c4,c5,c6;
int op;
using namespace std;
main ()
{
   system("chcp 65001");// para usar acentos
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
   cout<<"\n [1] Questão 01 - << Converta o valor para massa>>";
   cout<<"\n [2] Questão 02 - << Converta o valor para comprimento>>";
   cout<<"\n [3] FIM <<Bônus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
    case  1:{
             system ("color D");
             cout<<"\n Converta o valor para massa\n";
             cout<<"\n Informe o valor que deseja converter de kg para hg? ";
             cin>>t1;
             c = t1*10;
             cout<<"\n\t • o valor é: "<<c<<" hg;\n";
             
             cout<<"\n o valor " <<c<<" convertido em dag:";
             c2 = c*10;
             cout<<"\n\n\t • o valor é: "<<c2<<" dag;\n";
             
             cout<<"\n o valor: "<<c2<<" convertido em g:\n";
             c3 = c2*10;
             cout<<"\n\t • o valor é: "<<c3<<" g;\n";
             
             cout<<"\n o valor:"<<c3<<" convertido para dg:\n ";
             c4 = c3*10;
             cout<<"\n\t • o valor é: "<<c4<<" dg;\n";
             
             cout<<"\n o valor: "<<c4<<" para converter em cg:\n ";
             c5 = c4*10;
             cout<<"\n\t • o valor é: "<<c5<<" cg;\n";
             
             cout<<"\n o valor: "<<c5<<" convertido em mg:\n ";
             c6 = c5*10;
             cout<<"\n\t • o valor é: "<<c6<<" mg;";
             
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Converta o valor para comprimento";
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
             cout<<"\n\tHEIDENRÖSLEIN\n\nSah ein Knab’ ein Röslein stehn,\nRöslein auf der Heiden,\nWar so jung und morgenschön,\nLief er schnell es nah zu sehn,\nSah’s mit vielen Freuden.\nRöslein, Röslein, Röslein rot,\nRöslein auf der Heiden.\n\nKnabe sprach: “Ich breche dich,\nRöslein auf der Heiden.”\nRöslein sprach: “Ich steche dich,\nDass du ewig denkst an mich,\nUnd ich will’s nicht leiden”.\nRöslein, Röslein, Röslein rot,\nRöslein auf der Heiden\n\nUnd der wilde Knabe brach\n‘s Röslein auf der Heiden.\nRöslein wehrte sich und stach,\nHalf ihm doch kein Weh und Ach,\nMusst es eben leiden.\nRöslein, Röslein, Röslein rot,\nRöslein auf der Heiden.\n\nJohan Wolfang von Goethe";
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
