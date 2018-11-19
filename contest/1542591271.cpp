#include <bits/stdc++.h>
#define ll long long

using namespace std;
void task();
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	task();
	return 0;
}
string w[1002];
void task(){
	string a;
	int n;
	cin>>a>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int l=1;l<=n;l++){
				string x=w[i];
				x+=w[j];
				x+=w[l];
				int r=x.find(a);
				if(r>=0 && r<=x.size()){
					puts("YES");
					return;

				}
			}
		}
	}
	puts("NO");

}
