#include "stdafx.h"



CDiscoSpinning::CDiscoSpinning() :CDisco()
{
	

}


CDiscoSpinning::~CDiscoSpinning()
{
}



void CDiscoSpinning::mover(){

	if (x + dx + ancho >= 70 || x + dx <= 0 )
	{
		dx  *= -1;
	}
	else if (y + dy + alto >= 30 || y + dy <= 0)
	{
		dy *= -1;
	}

	x += dx;
	y += dy;

}


void CDiscoSpinning::mostrar(){
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y);
	cout << "++++" << endl;
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y + 1);
	cout << "++++" << endl;
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y + 2);
	cout << "++++" << endl;
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y + 3);
	cout << "++++" << endl;

}


void CDiscoSpinning::borrar(){

	Console::SetCursorPosition(x, y);
	cout << "    " << endl;
	Console::SetCursorPosition(x, y + 1);
	cout << "    " << endl;
	Console::SetCursorPosition(x, y + 2);
	cout << "    " << endl;
	Console::SetCursorPosition(x, y + 3);
	cout << "    " << endl;


}