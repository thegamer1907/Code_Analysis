#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define PI 3.14159265358979323846
#define root 1.41421356237309504880
#define mod 1000000007
#define loop(x,y) for(ll i=x;i<y;i++)
#define jloop(x,y) for(ll j=x;j<y;j++)
#define kloop(x,y) for(ll k=x;k<y;k++)
#define pb push_back
#define vec(x) vector<x>
#define asgn(arr,len,val) for(ll i=0;i<len;i++) arr[i]=val;
#define asgn2d(arr,r,c,val) for(ll i=0;i<r;i++) for(ll j=0;j<c;j++) arr[i][j]=val;
#define asgn3d(arr,r,c,d,val) for(ll i=0;i<r;i++) for(ll j=0;j<c;j++) for(ll k=0;k<d;k++) arr[i][j][k]=val;
#define prntarr(arr,init,n) for(ll i=init;i<n;i++) cout<<arr[i]<<" ";
#define prntarr2d(arr,rows,columns) for(ll i=0;i<rows;i++) for(ll j=0;j<columns;j++){ cout<<arr[i][j]<<" ";} cout<<endl;
#define test cout<<"idhar"<<endl
#define str string
#define mp make_pair
#define pii pair<ll,ll>
#define fileinout freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define bloop(x,y) for(ll i=x;i>=y;i--)
#define nxtline cout<<endl;
#define fastio ios::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define inputarr(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
typedef struct _node {
    struct _node* L; 
    struct _node* R; 
    ll key; 
} tree;

typedef tree *treenode;

int main()
{
    fastio;
    string s;
    cin>>s;
    ll zero=0,one=0;
    loop(0,s.length())
    {
        if(s[i]=='0')
        {
            zero++;
            one=0;
        }
        else
        {
            one++;
            zero=0;
        }
        if(zero==7||one==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}