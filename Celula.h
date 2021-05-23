//#ifndef __CELULA__
//#define __CELULA__

#ifndef CELULA_H
#define CELULA_H

class Celula {
	private:
	char info;
	Celula * prox;
	Celula * ant;

	public:
	Celula(char);
	char getInfo();
	void setInfo(char);
	Celula * getProx();
	void setProx(Celula * );
	Celula * getAnt();
	void setAnt(Celula * );
};
#endif