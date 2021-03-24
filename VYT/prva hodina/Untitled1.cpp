#include <iostream>
using namespace std;

int main()
{
    float r1, r2, r;
    char zapoj;
    cout << "Zadaj prvy odpor: " << endl;
    cin >> r1;
    cout << "Zadaj druhy odpor: " << endl;
    cin >> r2;
    cout << "Zadaj ako su zapojene s alebo p: " << endl;
    cin >> zapoj;
    if (zapoj == 's')
    {
        r = r1 + r2;
        cout << "seriove zapojenie: " << r << endl;
    }
    else if (zapoj == 'p')
    {
        r = (r1 * r2) / (r1 + r2);
        cout << "paralelne zapojenie: " << r << endl;
    }
    else
        cout << "zadal si to zle" << endl;
}
