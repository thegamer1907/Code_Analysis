#include<iostream>
#include<vector>
using namespace std;
const long long int INF=2000000000000000000;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define ii pair<int,int>
#define si set<int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 1000000007
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int maximum(int a ,int  b)
{
    if(a<b)
        return b;
    else
        return a;
}
main()
{
    int n;
    int m;
    vector<int> ar;
    int temp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ar.push_back(temp);

    }
    int max=ar[0];
    int  min=ar[0];
    int min_i=0;
    //cout<<max<<" ";
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            min_i=i;
        }
        if(ar[i]>max)
        {
      //      cout<<ar[i]<<" ";
            max=ar[i];
        }
    }
    //cout<<max<<"\n";
    for(int i=0;i<m;i++)
    {
        ar[min_i]++;
        min++;
        if(i==m-1)
        {
            break;
        }
       // cout<<min<<"\n";
        for(int i=0;i<n;i++)
        {
            if(ar[i]<min)
            {
                min_i=i;
                min=ar[i];
            }
        }
    }
    //cout<<min<<" "<<max<<"\n";;
    min=maximum(min,max);


    max=max+m;
    cout<<min<<" "<<max;



}
