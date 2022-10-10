#include "pt4.h"
#include <cmath>
#include <fstream>
using namespace std;

int lenght(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1)-(x2), 2) + pow((y1)-(y2), 2));

}

void Solve()
{
    Task("TheTri5");
    ifstream file("e.otr");
    float max = 0;
    int maxx1 = 0, maxy1 = 0, maxx2 = 0, maxy2 = 0;
    int n;
    file >> n;
    for (int i = 0; i < n; i++ )
    {
        int x1, x2, y1, y2;
        file >> x1 >> y1 >> x2 >> y2;
        if (max < lenght(x1, y1, x2, y2))
        {
            max = lenght(x1, y1, x2, y2);
            maxx1 = x1;
            maxy1 = y1;
            maxx2 = x2;
            maxy2 = y2;
        }
    }
    pt << maxx1 << maxy1 << maxx2 << maxy2;
    file.close();
}
// поиск наибольшего отрезка 
