
#include <iostream>
#include <time.h>
using namespace std;

int main()
{

	srand(time(0));


	int max = 1 + rand() % 15;

	
	int i = 0;
	while (i < max) {


		char c = 'a' + rand() % 2;
		cout << c << " ";
		i++;

	
		if (c == 'a') {


			if (i == max)
				cout << "CADENA ACEPTADA\n";

			while (i < max) {
				c = 'a' + rand() % 2;
				cout << c << " ";
				i++;


				if (c == 'a' && i == max) {
					cout << "\nCADENA ACEPTADA\n";
				}

		
				else if (i == max) {
					cout << "\nCADENA RECHAZADA\n";
				}
			}
		}


		else {
			while (i < max) {
				c = 'a' + rand() % 2;
				cout << c << " ";
				i++;
			}
			cout << "\nCADENA RECHAZADA\n";
		}
	}

	return 0;
}
