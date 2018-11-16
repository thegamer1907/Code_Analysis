#include <iostream>
 
 
using namespace std;
 
int main()
{
    int n, k, temp(0);
    cin >>n >> k;
    int *mass = new int[n];
    bool SeeNool(false),IfNotBreak(true);
    for (int i(0) ; i < n; i++)
    {
        cin >> mass[i];
        if (mass[i] < 1 && IfNotBreak && i<k)
        {
            SeeNool = true;
            temp = i;
            IfNotBreak = false;
        }
    }
    if (SeeNool){ cout << temp; return 0; }
    temp = k;
    while (mass[temp - 1] == mass[temp]) { temp++;}
    cout << temp;
    delete[] mass;
}