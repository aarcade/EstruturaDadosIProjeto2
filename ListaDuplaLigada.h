#include <iostream>
#include <string.h>
#include "Celula.h"


using namespace std;

class ListaDuplaLigada {
	private:
	Celula * head;
	Celula * tail;
	int qtdCelulas;
	
	public:
	ListaDuplaLigada();
	bool vazia();
	int tamanho();
	char primeiro();
	char ultimo();
	void insereInicio(char n);
	void insereFinal(char n);
	int insereEmN(char n, int pos);
	int insereAposN(char n, int pos);
	int insereAntesN(char n, int pos);
	char removeInicio();
	char removeFinal();
	char removeEmN(int pos);
	char removeAposN(int pos);
	char removeAntesN(int pos);
  void leitura(string arquivo);
  void imprime();
  void salvaArquivo();
  int contaPalavras(string palavras);
  int trocaPalavras(string palavras);
};