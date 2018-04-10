#include <stdio.h>
#include <stdlib.h>
#include "criar.c"
#include "deletar.c"
#include "editar.c"
#include "exibir.c"
#include "utilidades.c"

int main()
{
	int op;
	
	do{
		op = menuInicial();
	}while(op != 5);

	return 0;
}
