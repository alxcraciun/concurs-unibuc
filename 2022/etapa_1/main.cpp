#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int special[]={0, 100, 356, 440, 1137, 1901};
int dist[6], nr = 0;


bool is_prime(int k)
{
    if( k < 0 )
        return false;

    if (k == 0 || k == 1)
        return false;

    if (k == 2)
        return true;

    if (k % 2 == 0)
        return false;

    int x = sqrt(k);
    for (int i = 3; i <= sqrt(x); i += 2)
        if (k % i == 0)
            return false;

    return true;
}

int main()
{
    for(int x=1; x<=2022; x++)
    {
        int minim = 1000000;

        for(int j=1; j<=5; j++)
        {
            dist[j] = abs(x - special[j]);
            if(dist[j]<minim)
                minim = dist[j];
        }

        

        if(is_prime(minim))
            nr++;

        cout<<minim<<' '<<nr<<'\n';
    }

    return 0;
}