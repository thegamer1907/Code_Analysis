#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define var int
#define push push_back
using namespace std;

map<long long int,long long int> l;
map<long long int,long long int> r;

long long int a[200500];

int main()
{
    int n;
    long long int k;
    cin >> n >> k;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        r[a[i]]++;
    }
    long long int res=0;
    for (int i=0;i<n;i++)
    {
        r[a[i]]--;
        if (a[i]%k==0)
        {
            res+=l[a[i]/k]*r[a[i]*k];
        }
        l[a[i]]++;
    }
    cout << res;
    return 0;
}


