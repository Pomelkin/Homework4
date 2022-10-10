#include "pt4.h"
using namespace std;

int pal(int i, int n)
{ 
    int k = 0;
    for (i; i <= n; i++)
    {
        int num = i, sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum / 10 == 0 || sum / 10 == sum % 10)
        {
            k += 1;
            pt<<i;
        }
    }
    return k;
}

void Solve()
{
    Task("TheTri11");
    int a, b;
    pt >> a >> b;
    if (pal(a, b) == 0)
    {
        pt << "No solution";
    }
}
//сумма цифр числа должна быть палиндром