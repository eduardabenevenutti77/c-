#include<iostream>
using namespace std;
int const TAM = 5;
int i,cont=0;
float media,notas[TAM], notasMenores, notasMaiores, menor, maior, negativo, invalidaNota;//TAM para gerenciar o tamanho do vetor
int verificaMenorNota(float notas[],int TAM);
int menorNota(float notas[],int TAM);
int maiorNota(float notas[], int TAM);
int nota(float notas[], int TAM);
int verificaMaiorNota(float notas[],int TAM);
float media_vetor(float notas[],int TAM);
main()
{
  system("chcp 65001"); //para usar acentuação
  cout<<"\n\n\t\t ****  VETORES NOTAS   *** \n\n";
  cout<<"\n Informe " << TAM <<" notas";
  for (i=0;i<TAM;i++)
  { 
    cout<<"\n Informe a "<<i+1<<"ª nota: ";
	cin>> notas[i];
  } 
  media = media_vetor(notas,TAM);
  notasMenores = verificaMenorNota(notas, TAM);
  notasMaiores = verificaMaiorNota(notas, TAM);
  menor = menorNota(notas, TAM);
  maior = maiorNota(notas, TAM);
  //negativo = nota(nota);
  cout<<"\n A média das notas é: " <<media;
  cout<<"\n notas menores que 7: "<<notasMenores;
  cout<<"\n notas maiores que 7: "<<notasMaiores;
  cout<<"\n menor nota: "<<menor;
  cout<<"\n maior nota: "<<maior;
  //cout<<"\n teste: "<<teste;
  cout<<"\n\n\n\n\n"; 
}
float media_vetor(float notas[],int TAM)
{
 float media,acum=0;
 int i;
 for (i=0;i<TAM;i++)
  { 
   	acum = acum + notas[i];
  }
  media=acum/TAM;
  return (media);
	
}
int verificaMenorNota(float notas[], int TAM){
	int cont_menor_7 =0;
	for(int i=0; i<TAM; i++){
		if(notas[i]<7)
		cont_menor_7++;
	}
	return (cont_menor_7);
}
int verificaMaiorNota(float notas[], int TAM){
	int cont_maior_7=0;
	for(int i=0;i<TAM; i++){
		if(notas[i]>7)
		cont_maior_7++;
	}
	return (cont_maior_7);
}
//mostra o menor número do vetor
int menorNota(float notas[], int TAM){
	float menor;
	for (int i=0;i<TAM;i++)
	{
	if(i==0) 
	menor = notas[i];
	if (menor>notas[i])
	menor = notas[i];
}
	return (menor);
}
//mostra o maior número do vetor
int maiorNota(float notas [], int TAM){
	float maior;
	for(int i=0; i<TAM; i++){
		if(i==5)
		maior = notas[i];
		if(maior<notas[i])
		maior = notas[i];
	}
	return (maior);
}
int nota(float nota){
	//float negativo;
	//for(int i=0; i<TAM; i++){
		do{
			if((nota<0)|| (nota>10)){
			cout<<"\n erro - informe novamente";
			cin>>nota;
		}
		}
		while((nota<0)||(nota>10));
		return (nota);
	}
