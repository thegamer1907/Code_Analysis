#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pb push_back
#define X first
#define Y second
typedef long long ll;
typedef pair<int,int> p;
#define vi vector<int>
#define mem(x,y) memset(x,y,sizeof(x))
const int N=1e5+2;
int arr[N][4];
int bitmask[16];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    int t,i,j;
    int n,k;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        int tmp=0;
        for(j=0;j<k;j++)
        {
            cin>>arr[i][j];
            tmp*=2;
            tmp+=arr[i][j];
        }
        bitmask[tmp]++;
    }
    if(bitmask[0])
    {
        cout<<"YES";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        int tmp=0;
        for(j=0;j<k;j++)
        {
            tmp*=2;
            tmp+=arr[i][j];
        }
        for(j=1;j<16;j++)
        {
            if(bitmask[j] && !(tmp&j))
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
