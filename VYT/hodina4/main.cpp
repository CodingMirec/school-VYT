#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int N, i, sucet=0;
	cout << "zadaj kolko cisiel chces: "<< endl;
	cin >> N;
	int a[N];
	for (i = 0; i < N; i++)
		{
		a[i]=rand() % 101 -50;
		cout << a[i] <<" ";
		sucet +=a[i];
		}
	int MM = a[0];
	for (i = 1; i < N; i++)
		{
		if (a[i] < MM)
		MM = a[i]; 
		}
	cout << endl << "Minimum je: " << MM <<endl;
	
	MM = a[0];
	for (i = 1; i < N; i++)
		{
		if (a[i] > MM)
		MM = a[i]; 
		}
	cout << endl << "Maximum je: " << MM <<endl;
	cout << "sucet je: " << sucet <<endl;
	float priemer=sucet/N;
	cout << "priemer je: " << priemer <<endl;
}
