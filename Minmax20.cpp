#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Minmax20");
    int n, num, kmax = 0, kmin = 0,  min = 9999999, max = -9999999;
    pt >> n;
    for (int i = 0; i < n; i++)
    {
        pt >> num;
        if (max < num) 
        {
            kmax = 1;
            max = num;
        }
        else
        {
            if (max == num)
            {
                kmax += 1;
            }
        }
        if (min > num)
        {
            min = num;
            kmin = 1;
        }
        else
        {
            if (min == num)
            {
                kmin += 1;
            }
        }
    }
    if (kmin == kmax)
    {
        pt << kmin;
    }
    else
    {
        pt << kmin + kmax;
    }
}
