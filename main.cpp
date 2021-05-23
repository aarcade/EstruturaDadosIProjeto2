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
  
  switch (opc) {
    case 0:
      cout <<"Saindo...";
      x = false;
   case 1:
     ///Contar palavras
   case 2:
     ///Trocar palavras
    case 3:
    ///Imprimir lista
    cout << "Lista: ";
    lista.imprime();
    case 4:
    ///Salvar arquivo
    ;
  }
}
}