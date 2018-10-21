#include "stdafx.h"



CJugador::CJugador(){

	x = 10;
	y = 10;
	dx = 1;
	dy = 1;
	ancho = 3;
	alto = 3;
	v = 6;
	
}

CJugador::~CJugador(){}

void CJugador::set_x(int _x){
	x = _x;

}

int CJugador::get_x(){

	return x;

}

void CJugador::set_y(int _y){
	y = _y;

}

int CJugador::get_y(){

	return y;
}

void CJugador::set_dx(int _dx){
	dx = _dx;

}

int CJugador::get_dx(){

	return dx;
}

void CJugador::set_dy(int _dy){
	dy = _dy;

}

int CJugador::get_dy(){

	return dy;

}

void CJugador::set_ancho(int _ancho){
	ancho = _ancho;


}

int CJugador::get_ancho(){

	return ancho;

}

void CJugador::set_alto(int _alto){
	alto = _alto;


}

int CJugador::get_alto(){

	return alto;

}

void CJugador::set_v(int _v){

	v = _v;
}

int CJugador::get_v(){

	return v;
}

void CJugador::mover(char _tecla){

	switch (_tecla)
	{
	case 'w': y--; break;
	case 's': y++; break;
	case 'a': x--; break;
	case 'd': x++; break;
	default:
		break;
	}



}

void CJugador::mostrar(){
	Console::SetCursorPosition(x,y);
	cout << "***" << endl;
	Console::SetCursorPosition(x, y+1);
	cout << "***" << endl;
	Console::SetCursorPosition(x, y+2);
	cout << "***" << endl;

}

void CJugador::borrar(){
	Console::SetCursorPosition(x, y);
	cout << "   " << endl;
	Console::SetCursorPosition(x, y + 1);
	cout << "   " << endl;
	Console::SetCursorPosition(x, y + 2);
	cout << "   " << endl;

}

