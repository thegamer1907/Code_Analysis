#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
string s;
int n;
string a[107];
int main(){
	ios_base::sync_with_stdio(0);
	cin>>s;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
        if(a[i]==s){
            cout<<"YES";
            return 0;
        }
	}
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][1]==s[0] && a[j][0]==s[1]){
                cout<<"YES";
                return 0;
            }
        }
	}
	cout<<"NO";
}
