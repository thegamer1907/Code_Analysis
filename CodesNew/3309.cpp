#include<bits/stdc++.h>
#define mp make_pair
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
#define mod 1000000007
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    int max = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
        }
    }

    int inidiff = 0;
    for(int i = 0; i < n; i++){
        inidiff += (max - a[i]);
    }

    if(m <= inidiff){
        cout << max << " " << max+m;
    }

    else{
        int diff = m - inidiff;
        int ans;
        if(diff % n == 0){
            ans = max + (diff/n);
        }

        else{
            ans = max + (diff/n) + 1;
        }

        cout << ans << " " << max + m;
    }
	return 0;
}
//Hi there Sourav Sahoo please use lli instead of int
