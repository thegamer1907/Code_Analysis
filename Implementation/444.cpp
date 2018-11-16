#include<iostream>

using namespace std;

int main()
{
    int a[100], n, k, dem = 0;
    bool kt;
    cin>>n>>k;
    for (int i = 1; i <= n; i++)
        cin>>a[i];
    for (int i = 1; i <= n; i++)
        if (a[i] != 0 && a[i] >= a[k]) dem++;
    cout<<dem;
}
