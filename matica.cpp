#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int p[7][4], r, s, sucet = 0;

    cout << " matica ma 7 riadkov 4 stlpce \n\n";

    for (r = 0; r < 7; r++)
    {
        for (s = 0; s < 4; s++)
        {

            p[r][s] = rand() % 100 - 50;
            cout << p[r][s] << "    ";
        }
        cout << "\n \n";
    }
    return 0;
}
