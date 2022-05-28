#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[101][101];


int main()
{
    v[48][47] = 1;
    v[64][27] = 1;
    v[54][28] = 1;
    v[80][83] = 1;
    v[92][36] = 1;

    for(int i=0; i<=100; i++)
    {  
        for(int j=0; j<=100; j++)
            g<<v[i][j]<<' ';
        g<<'\n';
    }

    return 0;
}