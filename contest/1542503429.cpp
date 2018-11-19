#include<bits/stdc++.h>
#include<string>

using namespace std;
const int M =1e5 + 50;

#define rush() int T;cin>>T;while(T--)

string a[M];

int main() {

	string ans;
	cin>>ans;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			string tmp = a[i] + a[j];
			if(tmp.find(ans)!=-1) {
				return puts("YES"),0;
			}
		}
	}
	
	puts("NO");
}


