#include <iostream>

int afn = 1;


int bandera = 0;
using namespace std;


void est1(char c)
{
	
	if (c == 'a')
		afn = 2;
	else if (c == 'b' || c == 'c')
		afn = 1;
	else
		bandera = 1;
}


void est2(char c)
{

	if (c == 'a')
		afn = 3;
	else if (c == 'b' || c == 'c')
		afn = 2;
	else
		bandera = 1;
}

void est3(char c)
{

	if (c == 'a')
		afn = 1;
	else if (c == 'b' || c == 'c')
		afn = 3;
	else
		bandera = 1;
}


void est4(char c)
{

	if (c == 'b')
		afn = 5;
	else if (c == 'a' || c == 'c')
		afn = 4;
	else
		bandera = 1;
}


void est5(char c)
{

	if (c == 'b')
		afn = 6;
	else if (c == 'a' || c == 'c')
		afn = 5;
	else
		bandera = 1;
}


void est6(char c)
{

	if (c == 'b')
		afn = 4;
	else if (c == 'a' || c == 'c')
		afn = 6;
	else
		bandera = 1;
}


void est7(char c)
{

	if (c == 'c')
		afn = 8;
	else if (c == 'b' || c == 'a')
		afn = 7;
	else
		bandera = 1;
}


void est8(char c)
{
	
	if (c == 'c')
		afn = 9;
	else if (c == 'b' || c == 'a')
		afn = 8;
	else
		bandera = 1;
}


void est9(char c)
{

	if (c == 'c')
		afn = 7;
	else if (c == 'b' || c == 'a')
		afn = 9;
	else
		bandera = 1;
}


bool revisarA(string s, int x)
{
	for (int i = 0; i < x; i++) {
		if (afn == 1)
			est1(s[i]);
		else if (afn == 2)
			est2(s[i]);
		else if (afn == 3)
			est3(s[i]);
	}
	if (afn == 1) {
		return true;
	}
	else {
		afn = 4;
	}
}


bool revisarB(string s, int x)
{
	for (int i = 0; i < x; i++) {
		if (afn == 4)
			est4(s[i]);
		else if (afn == 5)
			est5(s[i]);
		else if (afn == 6)
			est6(s[i]);
	}
	if (afn == 4) {

		return true;
	}
	else {
		afn = 7;
	}
}


bool revisarC(string s, int x)
{
	for (int i = 0; i < x; i++) {
		if (afn == 7)
			est7(s[i]);
		else if (afn == 8)
			est8(s[i]);
		else if (afn == 9)
			est9(s[i]);
	}
	if (afn == 7) {

		return true;
	}
}


int main()
{
	string s = "bbbccca";
	int x = 7;


	if (revisarA(s, x) || revisarB(s, x) || revisarC(s, x)) {
		cout << "CADENA ACEPTADA";
	}

	else {
		if (bandera == 0) {
			cout << "CADENA RECHAZADA";
			return 0;
		}
		else {
			cout << "CADENA NO RECONOCIDA";
			return 0;
		}
	}
}
