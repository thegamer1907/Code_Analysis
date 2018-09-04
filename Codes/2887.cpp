#include <bits/stdc++.h>
using namespace std;
int Z[1000001];
int L,R=-1;
string s;
int n;
void updateLR(int start,int ogstart) {
	R=-1;
	if (s[ogstart]==s[0]) L=ogstart;
	for (int i=start;i<n;i++) {
		if (s[i]!=s[i-ogstart]) {
			R=i-1;
			break;
		}
	}
	if (R==-1) R=n-1;
	//cout<<"start="<<start+1<<" og="<<ogstart+1<<" L="<<L+1<<" R="<<R+1<<"\n";
}
int main() {
	cin>>s;
	n=s.length();
	Z[0]=n;
	updateLR(1,1);
	Z[1]=R;
	for (int i=2;i<n;i++) {
		if (i>R) {
			updateLR(i,i);
			Z[i]=R-i+1;	
		} else {
			int k=i-L;
			if (R-i+1>Z[k]) {
				//We can extend it out more than k originally had. So basically, L and R stays
				Z[i]=Z[k];
				continue;
			} else {
				//The K's string can extend out more of R.
				updateLR(R,i);
				Z[i]=R-i+1;
			}
		}
	}
	vector<int> end;
	int maxi=0;
	for (int i=1;i<n;i++) {
		//cout<<"Z["<<i<<"]="<<Z[i]<<"\n";
		if (n-i==Z[i]) {
			end.push_back(i);
			maxi=max(maxi,Z[i]-1);
		} else maxi=max(maxi,Z[i]);
	}
	bool possible=false;
	int endpoint;
	int len=0;
	int ans=0;
	for (int i=0;i<end.size();i++) {
		int u=end[i];
		if (Z[end[i]]<=maxi) {
			possible=true;
			if (Z[end[i]]>ans) endpoint=u;
			ans=max(Z[end[i]],ans);
		}
	}
	//cout<<"endpoint="<<endpoint<<"\n";
	if (possible) {
		for (int i=endpoint;i<n;i++) cout<<s[i];
	}
	if (!possible) cout<<"Just a legend";
}