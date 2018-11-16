#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define pb(x) push_back(x)

int main(){
	string lin;
	int qnt;
	cin >> lin;
	int hans=0;
	int marca[112345];
	//lin+= "a";
	cin >> qnt;
	for(int i=0; i<lin.size()-1; i++){
		marca[i]=0;
	}
	for(int i=0; i<lin.size()-1; i++){
		if(lin[i] == lin[i+1]){
			hans++;
		}
		marca[i+1] = hans;
	}
	/*for(int i=0; i<lin.size(); i++){
		cout << marca[i] << " ";
	}*/
	//cout << endl;
	for(int i=0; i<qnt; i++){
		int a, b, ans=0; cin >> a >> b;
		/*for(int i=a-1; i<b-1; i++){
			if(lin[i] == lin[i+1]){
				ans++;
			}
		}*/
		ans = marca[b-1] - marca[a-1];
		cout << ans << endl;
	}
}