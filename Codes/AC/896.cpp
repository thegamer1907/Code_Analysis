#include <bits/stdc++.h>

#define pi acos(-1.0)
#define pii pair<int, int>
#define mod 1000000007
#define MAX 1000000
#define pb push_back
#define FOR(i, a, b) for(int i=a; i<=b; i++)
#define dbg1(a) printf("yo is %d\n",a)
#define dbg2(a, b) printf("yo is %d %d\n",a ,b)
#define mem(ara,val) memset(ara,val,sizeof(ara))

using namespace std;
typedef long long ll;
typedef vector<int> vi;

int a[100010], b[100010], ca[100010], cb[100010], n, k;
string s;

int funa()
{
    int res = 0, l, h, mid, temp;
    FOR(i, 1, n)
    {
        l = i, h = n;
        while(h-l>=5)
        {
            mid = (l+h)/2;
            temp = cb[mid] - cb[i-1];
            if(temp>k)
            {
                h = mid;
            }
            else
            {
                l = mid;
            }
        }
        for(int j=h; j>=l; j--)
        {
            temp = cb[j] - cb[i-1];
            if(temp<=k)
            {
                res = max(res, j-i+1);
                break;
            }
        }
    }
    return res;
}

int funb()
{
    int res = 0, l, h, mid, temp;
    FOR(i, 1, n)
    {
        l = i, h = n;
        while(h-l>=5)
        {
            mid = (l+h)/2;
            temp = ca[mid] - ca[i-1];
            if(temp>k)
            {
                h = mid;
            }
            else
            {
                l = mid;
            }
        }
        for(int j=h; j>=l; j--)
        {
            temp = ca[j] - ca[i-1];
            if(temp<=k)
            {
                res = max(res, j-i+1);
                break;
            }
        }
    }
    return res;
}



int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin>>n>>k>>s;
    FOR(i, 0, n-1)
    {
        if(s[i]=='a')
            a[i+1] = 1;
        else
            b[i+1] = 1;
    }
    ca[1] = a[1];
    cb[1] = b[1];
    FOR(i, 2, n)
    {
        ca[i] = ca[i-1] + a[i];
        cb[i] = cb[i-1] + b[i];
    }
    printf("%d\n", max(funa(), funb()));
    return 0;
}


