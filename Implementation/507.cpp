#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[51];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int dem = 0;
    for(int i = 0; i < n; ++i) 
    {
        if(a[i] >= a[k - 1] && a[i] != 0) ++dem;
    }
    
    cout << dem;
    return 0;
}