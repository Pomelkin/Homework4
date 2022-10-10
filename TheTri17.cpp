#include "pt4.h"
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int systrans(int x, int y, int p)
{
    int x10 = 0;
    int k = 0;
    while (x > 0)
    {
        x10 += x % 10 * pow(p,k);
        k += 1;
        x /= 10;
    }
    
    int y10 = 0;
    k = 0;
    while (y > 0)
    {
        y10 += y % 10 * pow(p, k);
        k += 1;
        y /= 10;
    }
    int comp10 = x10 * y10;
    string scomp;
    while (comp10 > 0)
    {
        scomp += to_string(comp10 % p);
        comp10 /= p;
    }
    reverse(scomp.begin(), scomp.end());
    return stoi(scomp);
}

void Solve()
{
    Task("TheTri17");
    int a, b, c;
    pt >> a >> b >> c;
    if (a == 0 || b == 0)
    {
        pt << 0;
    }
    else
    {
        pt << systrans(a, b, c);
    }
}

// произведение чисел , которые находятся не в 10-тичной сист. счисл