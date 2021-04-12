#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;

#define maxTamPilha 100

typedef int TipoDado;

class Pilha
{
	TipoDado dados[maxTamPilha];
	int topo;
	int ant;
	bool isFullP();

public:
	Pilha() { //Construtor
		topo = -1; //inicializa o topo em -1
		ant = -1; // inicializa o anterior ao topo em -1
	}
	~Pilha() {  //destrutor
		//nada por enquanto
	}
	//métodos publicos
	void createP();
	void addElemento(TipoDado elemento);
	void erase();
	TipoDado firstP();
	bool emptyP();
	void push(TipoDado elemento);
	TipoDado pop();
	void showElement();
	void showAnterior();

};

