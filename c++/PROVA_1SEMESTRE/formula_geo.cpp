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
   //system ("color, 9");
   //textbackground(1);
   cout<<"\n FORMULAS GEOMETRICAS";
   cout<<"\n [1] Questão 01 - <<CALCULE A FÓRMULA DO RETÂNGULO>>";
   cout<<"\n [2] Questão 02 - <<CALCULE A FÓRMULA DO QUADRADO >>";
   cout<<"\n [3] Questão 03 - <<CALCULE A FÓRMULA DO CÍRCULO >>";
   cout<<"\n [4] Questão 04 - <<CALCULE A FÓRMULA DO TRIÂNGULO >>";
   cout<<"\n [5] Questão 05 - <<CALCULE A FÓRMULA DO TRAPÉZIO >>";
   cout<<"\n [6] FIM <<Bônus >>.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
    case  1:{
             system ("color B");
             cout<<"\n\t Retângulo: ";
             cout<<" \n Informe o valor da base: ";
             cin>>base;
             cout<<"\n Informe o valor da altura: ";
             cin>>altura;
             
             if((base<=0) && (altura<=0)){
             	
             	cout<<"\ndigite um valor válido!";
             	
			 }else{
			 	
             p = (2*base)+(2*altura);
             a = base*altura;
             cout<<"\no perimetro é = "<<p<<" cm.";
             cout<<"\na área é = "<<a<<" cm.";
             
        	 }
         
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 6");
             cout<<"\n\t Quadrado: \n";
             cout<<" \n Informe o valor lateral do quadrado: ";
             cin>>lado;
             if(lado<=0){
             	
             	cout<<"\ndigite um valor válido!";
             	
			 }else{
			 
             p = lado*4;
             a = lado *2;
             
             cout<<"\no perimetro é = "<<p<<" cm.";
             cout<<"\na área é = "<<a<<" cm.";
         	}
             getch(); //ou system("pause");
             break;
           }
    case 3:{
             system ("color 7");
             cout<<"\n\t Círculo:\n ";
             cout<<" \n Informe o valor do raio: ";
             cin>>raio;
             if(raio<=0){
             
			 cout<<"\n o valor inserido não corresponde ao número real!";
			 
			 }else{
			 
             c = 2 * 3.14 * raio;
             a = 3.14 * raio * 2;
			 
             cout<<"\na circunferencia é = "<<c<<" cm.";
             cout<<"\na área é = "<<a<<" cm.";
            }
             getch(); //ou system("pause");
             break;
           }
    case 4:{
             system ("color E");
             cout<<"\n\t Triângulo:\n ";
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
             if((ldA<=0)&&(ldB<=0) || (ldC<0) && (altura<=0) || (base<=0)){
             	
             	cout<<"\ninforme um valor real!";
		
			 }else{
			
             p = ldA+ldB+ldC;
             a = 0.5*altura*base;
             
             cout<<"\no perimetro é = "<<p<<" cm.";
             cout<<"\na área é = "<<a<<" cm.";
         	}
             getch(); //ou system("pause");
             break;
           }
    case 5:{
             system ("color C");
             cout<<"\n\t Trapézio:\n";
             cout<<" \n Informe o valor do lado A:";
             cin>>ldA;
             cout<<"\n Informe o valor do lado B: ";
             cin>>ldB;
             cout<<"\n Informe o valor do lado C: ";
             cin>>ldC;
             cout<<"\n Informe o tamanho da base: ";
             cin>>base;
             cout<<"\n Informe o tamanho da altura: ";
			 cin>>altura;
			 
			 if((ldA<=0)&&(ldB<=0) || (ldC<0) && (altura<=0) || (base<=0)){
			 	
			 	cout<<"\ndigite um valor real, o valor digitado corresponde a um número negativo!";
			 	
			 }else{
	
			 p = ldA+ldB+ldC+base;
			 a = 0.5 * altura *(base+ldB);
			 
			 cout<<"\no perimetro é ="<<p<<" cm.";
			 cout<<"\na base é ="<<a<<" cm.";
			 
			}
             getch(); //ou system("pause");
             break;
           }
    case 6:{
             system ("color D");
             cout<<"\n\tGEFUNDEN (1813)\n\nIch ging im Walde\nSo für mich hin,\nUnd nichts zu suchen,\nDas war mein Sinn.\n\nIm Schatten sah ich\nEin Blümchen stehn,\nWie Sterne leuchtend,\nWie Äuglein schön.\nIch wollt es brechen,nDa sagt es fein:\nSoll ich zum Welken\nGebrochen sein?\n\nIch grub’s mit allen\nDen Würzlein aus.\nZum Garten trug ich’s\nAm hübschen Haus.\n\n\n\tJohan Wolfang von Goethe ";
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
