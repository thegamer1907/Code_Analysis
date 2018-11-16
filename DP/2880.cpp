#include        <bits/stdc++.h>
#define ll      long long int
#define pb      push_back
#define mp      make_pair
#define F       first
#define S       second
#define MOD     1000000007
#define pii     pair<int,int>
#define vi      vector<int>
#define fio     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N       200010
#define M       21
using namespace std;

int a[110],b[110];

int main() {
    fio;
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<k; i++){
        cin>>b[i];
    }
    sort(b,b+k);
    reverse(b,b+k);
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            a[i]=b[c];
            c++;
        }
    }
    for(int i=1; i<n; i++){
        if(a[i]<=a[i-1]){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}












