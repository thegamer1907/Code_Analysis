#include <bits/stdc++.h>
#define loop(a,b,c) for(int a=b;a<=c;a++)

using namespace std;

int main(){
	int t,n;
	bool child[109];
	string s;
	cin >> n >> t;
	cin >> s;
	
	while(t--){
		loop(i,0,s.length()-1) child[i]=false;
		loop(i, 0, s.length()-1){
			if(i!=s.length()-1){
				if(s[i]=='B'&&s[i+1]=='G'&&!child[i]){
					swap(s[i],s[i+1]);
					child[i+1]=true;
				}
			}
		}
	}
	cout << s << endl;
}
