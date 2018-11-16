/**
 *    Author:  "Ashutosh Kaushik" !!!
 *    ashutoshkaushik     (CodeForces)
**/
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.1415926535897932384626
typedef long long int ll;
#define all(x) (x).begin() , (x).end()
#define fi first
#define se second
#define pq priority_queue
#define pb push_back
#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define maX(a,b) ((a) > (b) ? (a) : (b))
#define miN(a,b) ((a) < (b) ? (a) : (b))
#define endl '\n'
vector<int> v[100000];
bool status[100000];
/**************************************Template Ends**********************************/
void dfs(int a, int des)
{
    status[a]  = true;

    if(a == des)
    {
        cout << "YES";
        exit(0);
    }
    else if(a > des)
    {
        cout << "NO";
        exit(0);
    }
    for(auto i:v[a])
    {
        if(status[i] == false)
        {
            dfs(i,des);
        }
    }
}
int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    memset(status,false,sizeof(status));
    int n,des;
    cin >> n >> des;
    int arr[n];
    for(int i = 1;i <= n; i++){
        cin >> arr[i];
        v[i].pb(i+arr[i]);
    }
    dfs(1,des);
    cout<<"NO";
    return 0;
}