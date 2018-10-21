// EJEMPLODT.cpp: archivo de proyecto principal.

#include "stdafx.h"



int main()
{
	CJuego * objJuego = new CJuego();
	char tecla;


		objJuego->InsertarD();


	


	while (1)
	{
		objJuego->MostrarTodos();
		_sleep(100);
		objJuego->BorrarTodos();
		objJuego->MoverTodos();

		if (kbhit())
		{
			tecla = getch();
			
			objJuego->MoverJ(tecla);

		}
		

	}



    return 0;
}
