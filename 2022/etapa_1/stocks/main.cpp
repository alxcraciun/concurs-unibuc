#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int price[101];

int main()
{
    for(int i=1; i<=100; i++)
        price[i] = (i*i*i + 7*i*i+3*i+84)%100;
    
    for(int i=1; i<=100; i++)
        g<<price[i]<<'\n';



    return 0;
}