#include<iostream>
using namespace std;
int main()
{
    int n;
    int x,y,z;
    int sumx = 0, sumy = 0, sumz = 0;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> z;
        sumx = sumx + x;
        sumy = sumy + y;
        sumz = sumz + z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}