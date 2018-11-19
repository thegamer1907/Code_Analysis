#include<bits/stdc++.h>
#define MAX 100005
#define mod 1000000007
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define inf 25
#define Mat vector<vector<int> >
#define int long long
#define coutd(a,b) cout<<fixed<<setprecision((b))<<(a)
const double root2 = 1.414213562;
const double pi = 3.141592653;

using namespace std;
string str;
string arr[MAX];
int a[50],b[50];
main()
{
    std::ios::sync_with_stdio(false);
    int n,i;
    cin>>str;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        if(arr[i]==str)
        {
            cout<<"YES";
            return 0;
        }
    for(i=0;i<n;i++)
    {
        //cout<<arr[i]<<" "<<arr[i][0]<<" "<<arr[i][1]<<endl;
        a[arr[i][0]-'a']=1;
        b[arr[i][1]-'a']=1;
    }
    if(b[str[0]-'a']==1 && a[str[1]-'a']==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
