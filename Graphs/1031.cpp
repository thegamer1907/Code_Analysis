#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MX=1e6+1 ;
bool vis[MX] ;


ll N,M,C ;

//int dfs(int x)
//{
//    vis[x]=true ;
//    for(int j=0 ; j<v[x].size() ; j++)
//    {
//        int ch=v[x][j] ;
//        if(!vis[ch])
//        {
//            dfs(ch) ;
//        }
//        else if(vis[ch])
//        {
//            cout << ch <<" " ;
//            return 0 ;
//        }
//    }
//}
vector<int> v[MX] ;
int dfs (int x)
{
    vis[x]=true ;
    for(int j=0 ; j<v[x].size() ; j++)
    {
        int ch=v[x][j] ;
        if(!vis[ch])
        {
            dfs(ch) ;
        }
    }
}
int sq (int x,int x1,int y,int y1,int z ,int z1)
{
    return sqrt((x1-x)*(x1-x))+sqrt((y1-y)*(y1-y))+sqrt((z1-z)*(z1-z));
}


pair<int , int > p[MX] ;

int main()
{
    int n , t ;
    cin >> n >>t ;
    for(int i=1 ; i<=n-1 ; i++)
    {
        int a ;
        cin >> a ;
        v[i].pb(i+a) ;
    }
    dfs(1);
    if(!vis[t])
    {
        cout << "NO" ;
        return 0 ;
    }
    cout << "YES" ;
}








































