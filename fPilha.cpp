#include <iostream>
#include <cstdlib>
#include "Pilha.hpp"

using namespace std;

//implementa��o dos m�todos

void Pilha::createP() {
	topo = -1;
}//fim de emptyP()

void Pilha::addElemento(TipoDado elemento) {
	if (isFullP()) {
		cout << "Transbordo da pilha!" << endl;
		exit(1);
	}
	topo++; //incrementa
	ant = dados[topo - 2]; //marca o elemento anterior ao que est� no topo
	dados[topo] = elemento;
}//fim de addElemento()

void Pilha::push(TipoDado elemento) { //faz o mesmo (primitiva dela)
	addElemento(elemento);
}//fim de push()

TipoDado Pilha::pop() {
	TipoDado aux;
	if (emptyP()) {
		cout << "Est� tentando retirar elementos de uma pilha vazia!" << endl;
		exit(1);
	}
	aux = dados[topo];
	topo--;
	return aux;
}//fim de pop()

TipoDado Pilha::firstP() { //identica a anterior
	if (emptyP()) {
		cout << "Est� tentando tirar um elemento de uma pilha vazia!" << endl;
		exit(1);
	}
	return dados[topo];
}//fim de firstP()

void Pilha::erase() {
	if (emptyP()) {
		cout << "Imposs�vel de realizar, n�o h� elementos para tirar!" << endl;
		exit(1);
	}
	topo--; //caso d� realiza o decremento.
}//fim de erase()

bool Pilha::emptyP() { //esvazia a pilha
	return topo == -1;
}//fim de emptyP()

bool Pilha::isFullP() {
	return topo == maxTamPilha - 1;
}//fim de isFull()

void Pilha::showElement() { //mostra o elemento no topo da pilha
	std::cout << "O elemento do topo �: " << dados[topo] << endl;
}//fim de showElement

void Pilha::showAnterior() {
	std::cout << "Anterior �: " << ant << endl; //mostra o elemento anterior ao topo
	
}//fim de showAnterior