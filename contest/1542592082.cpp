#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	int n;cin>>n;
	string a[101];
	set<string>ss;ss.clear();
	for (int i=0;i<n;i++){cin>>a[i];ss.insert(a[i]);}
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++){
			string t="  ";
			t[0]=a[i][1];t[1]=a[j][0];
			ss.insert(t);
			t[0]=a[j][1];t[1]=a[i][0];
			ss.insert(t);
		}
//	for (string i:ss)cout<<i<<endl;
	cout<<(ss.count(s)?"YES":"NO")<<endl;
}
