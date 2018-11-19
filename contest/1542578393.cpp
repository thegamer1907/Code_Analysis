#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
const ll mod = 1e9+7;
const ll sz = 100005;

int n,k, cnt[5], c[20];
bool a[sz][5];
bool ans;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int val = 0;
		for(int j=0;j<k;j++){
			cin>>a[i][j];
			if(a[i][j]) cnt[j]++,val += pow(2,k-j-1);
			}
		c[val] += 1;
		}
	if(c[0]){
		cout<<"YES\n";
		exit(0);
		}
	else{
		for(int i=0;i<=15;i++){
			for(int j=i+1;j<=15;j++){
				if(c[i]>0 and c[j]>0){
					bool res = true;
					for(int y=0;y<k;y++){
						if((i&(1<<y)) and (j&(1<<y))){
							res = false;
							}
						}
					if (res) {
						cout<<"YES\n";
						//cout<<i<<' '<<j;
						exit(0);
						}
					}
				}
			}
		}
	cout<<"NO\n";
	
}
