#include <iostream>
#include <string>
#include "Pilha.hpp"

//testes com pilha estática

int main() {
	Pilha pilha1;
	pilha1.addElemento(56);
	pilha1.addElemento(888);
	pilha1.addElemento(98);
	pilha1.addElemento(77);
	pilha1.addElemento(969);

	pilha1.pop();

	pilha1.showElement();
	pilha1.showAnterior();

	system("pause");
	return 0;
}