#include <iostream>

using namespace std;

int main()
{
    float cena, spolu = 0;
    do
    {
        cout << "Zadaj cenu... ";
        cin >> cena;
        spolu += cena;

    } while (cena != 0);
    cout << "Vysledny sucet je " << spolu << endl;
    if (spolu >= 100)
        cout << "mate zlavu 10%, platite len " << spolu * 0.9 << "$ \n";
    else
        cout << "mate zlavu 10%, platite len " << spolu * 0.9 << "$ \n";
    return 0;
}