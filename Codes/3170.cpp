#include<iostream>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, ans;
int main()
{
    cin>>n;
    int MIN = INF;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        if(MIN > (a-i+n)/n)
        {
            MIN = (a-i+n)/n;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}