#include <iostream>

using namespace std;
int main() 


{
	int D,H,i,sucet=0;
	cout << "zadaj D: ";
	cin >> D;
	cout << "zadaj H: ";
	cin >> H;
	
	if (D<H)
	{
	
		for (i=D; i<=H; i++)
			{
				cout << i <<endl;
				sucet += i;
			}
		cout << "Sucet cisiel je: "<< sucet;
	}
	else
	{
		for (i=H; i<=D; i++)
			{
				cout << i <<endl;
				sucet += i;
			}
		cout << "Sucet cisiel je: "<< sucet;
	}
		
	return 0;
}
