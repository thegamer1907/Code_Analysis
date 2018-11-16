#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <set>

using namespace std;
#define ll long long
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MAX 1000010
#define sz(i) int(i.size())

int n, m, suff[MAX], l, a[MAX];
int main(){
    boost;
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    set <int> s;
    for(int i=n-1; i>=0; i--)
    {
        s.insert(a[i]);
        suff[i]= s.size();
    }
    for(int i=0; i<m; i++){cin>>l; cout<<suff[l-1]<<endl;}
    return 0;
}