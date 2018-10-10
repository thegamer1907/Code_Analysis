#include <bits/stdc++.h>
using namespace std;
int k;

bool perfect(int x)
{
    int cnt = 0;
    while(x)
    {
        cnt += x%10;
        x/=10;
        if(cnt > 10) return false;
    }
    return cnt==10;
}

int main()
{
    cin >> k;
    int rnk = 1, cur = 19;
    while(rnk < k)
    {
        do
        {
            cur+=9;
        }while(!perfect(cur));
        rnk++;
    }
    cout << cur << '\n';
}
