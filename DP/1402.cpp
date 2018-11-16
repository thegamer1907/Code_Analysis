#include<iostream>
#include<string>
using namespace std;
#define forn(i,a,b) for(int i = a; i < b; i++)
int main()
{
    int n;
    cin >> n;
    int a[n];
    forn(i,0,n) cin >> a[i];
    int ones = 0;
    forn(i,0,n) if(a[i]) ones++;
    int tt = ones;
    ones = 0;
    for(int i = 0; i < n; i++)
    {
        int change = 0;
        for(int j = i; j < n; j++)
        {
            if(!a[j]) change++;
            else change--;
            ones = max(ones, tt+change);
        }
    }
    cout << ones;
    return 0;
}
