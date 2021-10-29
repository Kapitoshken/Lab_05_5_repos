#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int g(int m, int a, int c)

{

    return (a - m + c) / 10;
}

int f(int m, int a, int c, int level, int &depth)
{
    if (level > depth)
        depth = level;

    if (m >= 0 && m <= 9)
    {
        return m;
    }
    else 
        return (g(m, a, c)* f(m - 1 - g(m, a, c), a, c, level+1, depth) + m);
}

int main()

{
    int m, c, a, depth;
    cout << "m = "; cin >> m;
    cout << "c = "; cin >> c;
    cout << "a ="; cin >> a;
    cout << "f =" << f(m, a, c, 1, depth) << endl;
    cout << "depth =" << depth << endl;
    return 0;
}

