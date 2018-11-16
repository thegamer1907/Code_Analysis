#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define ff first
#define ss second
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int c1=0;
    int a[n];for(int i=0;i<n;i++){cin>>a[i];if(a[i]){c1++;}}
    //cout<<c1<<endl;
    int te=0,ans=0,tc1=0,x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1){te--;}
        else{te++;}
        if(te<0){te=0;}
        if(ans<te)
        {
            ans=te;
        }
        //cout<<te<<" ";
    }
    if(c1==n){cout<<n-1;}else{
    cout<<c1+ans;}
}
