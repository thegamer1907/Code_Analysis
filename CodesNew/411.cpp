 //MOHA

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3F3F3F3F
#define MAXNODES 101

int dx[] ={ 1, 0, -1, 0, -1, 1, -1, 1 };
int dy[] ={ 0, 1, 0, -1, -1, 1, 1, -1 };
const double eps=1e-6;
const int  N = 1e7 +10 ;

void moha() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

}
vector <ll >  v;
int main()
{

ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int  n , k;
cin>>n>>k ;
ll a;
deque<ll>dq;

ll sum=0 ;
int mx=0;
for (int i =0 ; i<n ; i++){
    cin>>a;
    dq.push_back(a);
    sum+=a;
    while(sum>k){
        sum-=dq[0];
        dq.pop_front();
    }
    int x=dq.size();
    mx=max( x , mx);

}


cout<<mx<<endl;

    return 0;
}
