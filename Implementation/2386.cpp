#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    k=240-k;
    k/=5;
    int dp;
    for(int i=1;i<=10;i++)
    {
        if((i*(i+1))/2>k)
        {
            dp=i-1;
            break;
        }
    }
    cout << min(dp,n);
	return 0;
}
