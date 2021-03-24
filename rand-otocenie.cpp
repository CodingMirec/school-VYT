#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
		srand (time(0));
		double p[10];
		int i, s;
		s= 0;
		cout << "nahodne pole" << endl;
		for (i = 0; i < 10; i++){
			p[i] = rand() % 41 - 20;
			if (p[i] >= 0)
				cout << p[i] <<"   "<< pow(p[i],2) << "   " << sqrt(p[i]) << endl;
			else
				cout << p[i] <<"   "<< pow(p[i],2) << "   " << "neexistuje" << endl;
			
			s = s + p[i];
	
		}
		
		cout << "otocene pole" << endl;
		for (i = 9; i >= 0; i--){
			cout << p[i] << endl;
		}
		cout << "sucet je " << s << endl;
}

