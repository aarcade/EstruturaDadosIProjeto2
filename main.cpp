#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "ListaDuplaLigada.h"

using namespace std;

int main(){
  char x = true;
  int opc;
  string arquivoTxt = "inteligenciaEmocional.txt";

  ListaDuplaLigada lista;
  lista.leitura(arquivoTxt);

  while (x){
    cout << "\n *** PROJETO 2 - ESTRUTURA DE DADOS ***\n";
    cout << "\n Ana Cecília (TIA 32084935) e Gabriel Azevedo (TIA 32020309) \n";
		cout << "\n0 - Sair";
		cout << "\n1 - Contar palavras";
		cout << "\n2 - Trocar palavras";
		cout << "\n3 - Imprimir lista";
		cout << "\n4 - Salvar arquivo\n";
		cout << "Digite a opcao desejada: ";
    cin >> opc;
  
  if (opc ==0){
      cout <<"Saindo...";
      x = false;}
  else if (opc ==1){
      cout << "Digite a palavra a ser contada: ";
      string palavra;
      cin >> palavra;
      int n = lista.contaPalavras(palavra);
      if(n==0) cout << "Lista vazia ou palavra não encontrada.";
      else cout << "A palavra foi encontrada "<< n << " vez(es).";
   }
  else if (opc ==2){}
  else if (opc ==3){
    //Imprimir lista
    cout << "Lista: ";
    lista.imprime();}
  else if (opc ==4){
    ///Salvar arquivo
    cout << "Conteúdo salvo no arquivo.\n";
    lista.salvaArquivo();
  }else{
     cout << "Opção não disponível.Escolha uma opção do menu. \n";
  }
 }
}