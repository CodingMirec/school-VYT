#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include <cmath> 
using namespace std; 
int main()
{
	srand(time(0));
	int i, sucet=0;
	int N=10;
	int a[N];
	for (i = 0; i < N; i++)
		{
		a[i]=rand() % 41 -20;
		sucet +=a[i];
		if (a[i] >= 0)
			cout << a[i] <<"	" <<pow(a[i],2) <<"		"<<sqrt(a[i]) <<endl;
		else
			cout << a[i] <<"	" <<pow(a[i],2) <<"		"<<"NULL"<<endl;
		}
		cout <<"opacne"<<endl;
	for (i = N-1; i >= 0; i--)
		{
		cout << a[i] <<"	" <<endl;
		}
	cout << "sucet je: " << sucet <<endl;
}
