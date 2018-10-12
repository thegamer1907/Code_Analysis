//MOHA

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3F3F3F3F
#define MAXNODES 101

int dx[] ={ 1, 0, -1, 0, -1, 1, -1, 1 };
int dy[] ={ 0, 1, 0, -1, -1, 1, 1, -1 };


void moha() {
#ifndef ONLINE_JUDGE
	/*freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);*/
#endif
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
}
const long double eps=1e-10;
const int N = 1e6;
vector <int> a ,b;

int main()
{
    moha();


     int n ;
     cin>>n;
     int x[n+1];
     for (int i=0 ; i<n ; i++)
        cin>>x[i];


     sort (x , x+n);

     for (int i=0 ; i<n/2 ; i++)
       a.push_back(x[i]);

    for (int i=n/2 ; i<n ; i++)
       b.push_back(x[i]);




     int c=0 , j=0;
     for (int i=0 ; i<n/2 ; i++){
            if(a[j]*2 <= b[i]){
                c++;
                j++;
            }


     }


     int cc=n-c*2;

     cout<<c+cc<<endl;
















    return 0;
}
