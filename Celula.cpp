#include <cstdlib>
#include "Celula.h"

Celula::Celula(char i) {
	info =  i;
	prox = NULL;
	ant = NULL;
}

char Celula::getInfo() {
	return info;
}

void Celula::setInfo(char i) {
	info = i;
}

Celula * Celula::getProx() {
	return prox;
}

void Celula::setProx(Celula * p) {
	prox = p;
}

Celula * Celula::getAnt() {
	return ant;
}

void Celula::setAnt(Celula * p) {
	ant = p;
}