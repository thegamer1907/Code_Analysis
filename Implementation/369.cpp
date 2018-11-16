#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d;
    int amount;
    amount = 0;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    d = a[m - 1];
    for (auto x: a)
    	{
        if (x >= d)
        {
        	if (x != 0){
           		amount ++;
        	}
        }
    
    }
    cout << amount << endl;
    return 0;
}