/* 
Faculdade SENAC - Joinville - SC
Prof¬™: Cl√°udia Werlich
Atividade Avaliativa de Introdu√ß√£o a Programa√ß√£o de Computadores
	
Insira Seu nome completo aqui:__________________________________
	
Data: <<vers√£o 01 ou vers√£o_final>> :___________________________ 
(Altere a data conforme a entrega)
	
*/
	
#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
	
int op,base,altura,p,a,b,lado,di,c,raio,ldA,ldB,ldC,op2;
float nota;
	
using namespace std;
		
main ()
	{
	   //system("chcp 65001");// para usar acentos
	   setlocale(LC_ALL, "portuguese");
	   cout << fixed << setprecision(4);// deixar o float com 2 casas decimais
	   system ("cls"); // limpar a tela
	   system ("color 2"); // usar a cor verde
	   cout<<"ATIVIDADE AVALIATIVA DE INTRODU«√O A PROGRAMA«√O \n";
	   cout<<"INDICADORES: \n";
	   cout<<"1. Realiza operaÁıes matem·ticas de acordo com os fundamentos e o contexto apresentado.\n";
	   cout<<"2. Utiliza adequadamente os tipos de vari·veis em algoritmos de acordo com o contexto.\n";
	   cout<<"3. Utiliza operaÁıes aritm·ticas em programas.\n";
	   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
	   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
	   cout<<"6. Utiliza as estruturas de repetiÁ„o em algoritmos de acordo com o contexto. \n";
	   
	   getch(); // serve para ler um caracter ou parar a tela
	   
	   
	   do{
	   system ("cls");
	   cout<<"\n ==============PERSONALIZE A INTERFACE DO PROGRAMA===============================================";
	   cout<<"\n [1] Quest„o 01 - FORMULAS GEOMETRICAS";
	   cout<<"\n [2] Quest„o 02 - CONVERS√O DE MEDIDAS";
	   cout<<"\n [3] Quest„o 03 - << AGUARDE >>";
	   cout<<"\n [4] Quest„o 04 - CRIE UMA SURPRESINHA PARA PROFESSORA ";
	   cout<<"\n [5] Quest„o 05 - N√O VAI TER";
	   cout<<"\n [6] FIM << MENSAGEM DE DESPEDIDA >> ";
	   cout<<"\n\n\n\n ESCOLHA UMA OP«√O --> ";
	   cin>>op;
	   switch (op)// SWITCH PRINCIPAL
	   {
	      case 1:{
	   	       do{
			 
	              system ("color 3");
	              cout<<"\n\t Calcule a ·rea o perÌmetro com C++";
	              cout<<"\n [1] Figura 01 - CALCULE A F”RMULA DO RET¬NGULO";
	              cout<<"\n [2] Figura 02 - CALCULE A F”RMULA DO QUADRADO";
	              cout<<"\n [3] Figura 03 - CALCULE A F”MULA DO CÕRCULO";
	              cout<<"\n [4] Figura 04 - CALCULE A F”RMULA DO TR¬NGULO";
	              cout<<"\n [5] Figura 05 - CALCULE A F”RMULA DO TRAP…ZIO";
	              cout<<"\n [6] Figura 06 - GEFUNDEN";
	              cout<<"\n [7] FIM  ";
	              cout<<"\n\n\n\n ESCOLHA UMA OP«√O --> ";
	              cin>>op2;
	              switch (op2)
	               {
	                 case  1:{
	                 	     system ("color B");
	                 	     cout<<"\n Ret‚ngulo: ";
	                 	     cout<<" \n Informe o valor da base: ";
	                 	     cin>>base;
	                 	     cout<<"\n Informe o valor da altura: ";
	                 	     cin>>altura;
	                 	     if((base<=0) && (altura<=0) || (altura<=0) || (base<=0))
							  {
	                 	     	cout<<"\ndigite um valor v·lido!";
	                 	      }else{
	                 	     		p = (2*base)+(2*altura);
	                 	     		a = base*altura;
	                 	     	cout<<"\no perimetro È = "<<p<<" cm.";
	                 	     	cout<<"\na ¡rea È = "<<a<<" cm.";
	                 	     	}
				             getch(); // espera digitar algo
				             break;
						    }
					case  2:{
							 system ("color 6");
	                 	     cout<<"\n\t Quadrado: \n";
	                 	     cout<<" \n Informe o valor lateral do quadrado: ";
	                 	     cin>>lado;
	                 	     if(lado<=0){
	                 	     	cout<<"\ndigite um valor v·lido!";
	                 	    }else{
	                 	    	p = lado*4;
	                 	    	a = lado *2;
	                 	    	cout<<"\no perimetro È = "<<p<<" cm.";
	                 	    	cout<<"\na ¡rea È = "<<a<<" cm.";
	                 	     	}
	                 	     getch(); // espera digitar algo
				             break;
								
						    }	    
	                
	                case  3:{
	                		 system ("color 7");
	               			 cout<<"\n\t CÌrculo:\n ";
	               			 cout<<" \n Informe o valor do raio: ";
	               			 cin>>raio;
	               			 if(raio<=0){
	               			 	cout<<"\n o valor inserido n„o corresponde ao n˙mero real!";
	               			 	}else{
	               			 	c = 2 * 3.14 * raio;
	               			 	a = 3.14 * raio * 2;
	               			 	cout<<"\na circunferencia È = "<<c<<" cm.";
	               			 	cout<<"\na ¡rea È = "<<a<<" cm.";
	               			 	}
	                         getch(); // espera digitar algo
				             break;
						    }
					case  4:{
							 system ("color E");
							 cout<<"\n\t Tri‚ngulo:\n ";
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
							 		cout<<"\no perimetro È = "<<p<<" cm.";
							 		cout<<"\na ¡rea È = "<<a<<" cm.";
							 	}
	                         getch(); // espera digitar algo
				             break; 	       
						    }	    
	                
	                case  5:{
	                		system ("color C");
	                		cout<<"\n\tTrapÈzio:\n ";
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
	                			cout<<"\ndigite um valor real, o valor digitado corresponde a um n˙mero negativo!";
	                			}else{
	                				p = ldA+ldB+ldC+base;
	                				a = 0.5 * altura *(base+ldB);
	                				cout<<"\no perimetro È ="<<p<<" cm.";
	                				cout<<"\na base È ="<<a<<" cm.";
	                			}
	                         getch(); // espera digitar algo
				             break; 	       
						    }
					case  6:{
							 system ("color D");
	                		 cout<<"\n\tGEFUNDEN\n\nIch ging im Walde\nSo f¸r mich hin,\nUnd nichts zu suchen,\nDas war mein Sinn.\n\nIm Schatten sah ich\nEin Bl¸mchen stehn,\nWie Sterne leuchtend,\nWie ƒuglein schˆn.\nIch wollt es brechen,\nDa sagt es fein:\nSoll ich zum Welken\nGebrochen sein?\n\nIch grubís mit allen\nDen W¸rzlein aus.\nZum Garten trug ichís\nAm h¸bschen Haus.\n\n\n\tJohan Wolfang von Goethe ";
					         getch(); // espera digitar algo
				             break; 	       
						    }
					case  7:{
	                 	       cout<<"\n FIM";
	                 	       getch(); // espera digitar algo
				             break;
							}			    
	            } 
	        } while (op2!=7);
	        cout<<" \n APERTE UMA TECLA";
	        getch(); //ou system("pause");
	        break;
	        }
	    case 2:{
	             system ("color 3");
	             cout<<"\n OpÁ„o 03";
	             cout<<" \n APERTE UMA TECLA";
	             getch(); //ou system("pause");
	             break;
	           }
	       
	    case 3:{
	             system ("color 3");
	             cout<<"\n Op√ß√£o 04";
	             cout<<" \n APERTE UMA TECLA";
	             getch(); //ou system("pause");
	             break;
	           }
	    case 4:{
	             system ("color 3");
	             cout<<"\n Op√ß√£o 02";
	             cout<<" \n SURPRESINHA PARA A PROFESSORA";
	             getch(); //ou system("pause");
	             break;
	           }
	    case 5:{
	             system ("color 8");
	             cout<<"\n\n <<A professora desistiu da quinta quest√£o.>>\n ";
	             getch();
	             break;
	            }
	  
	 }// fecha o SWITCH
	 
	} while(op!=6);
	cout<<"\n\n\n ";
}
