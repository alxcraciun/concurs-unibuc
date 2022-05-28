#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("date.in");

int palindrom(int k)
{
    int pal = 0;

    while (k > 0)
    {
        if(k%10==4)
            return 0;

        pal *= 10, pal += k%10;

        k /= 10;
    }

    return pal;
}

int main()
{
    int nr = 0;

    for(int i=0; i<2022; i++)
        if(i == palindrom(i))
          nr++;

    cout<<nr;

    return 0;
}