#include <iostream>
#include <windows.h>
using namespace std;
int main() 
{
	char kl;
	cout << "Stlacaj klavesy v strednom rade";
	
	do
	{
		cin >> kl;
		switch (kl)
		{
			case 'a' : Beep(261,300);break;
			case 's' : Beep(294,300);break;
			case 'd' : Beep(329,300);break;
			case 'f' : Beep(349,300);break;
			case 'g' : Beep(392,300);break;
			case 'h' : Beep(440,300);break;
			case 'j' : Beep(494,300);break;
			case 'k' : Beep(523,300);break;
			default : break;
		}
	
	}
	while (kl !='q');
	return 0;
}
