#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int p[8], i, sucet = 0;
	for (i = 7; i >= 0; i--)
	{
		p[i] = rand() % 2;
		cout << p[i] << " ";
		if (p[i] == 1)
			sucet += pow(2, i);
	}
	cout << endl
		 << "v desiatkovej sustave to je" << sucet;
	cout << endl
		 << "v dekadicekej";
}
