#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define se second
#define fi first
#define pb push_back

string st[105];

int main(){

//	freopen("in.txt","r",stdin);

	string s;
	cin >> s;
	int n;
	scanf("%d",&n);
	for(int i=0;i < n;i++){
		cin >> st[i];
		if(st[i] == s){
			puts("YES");
			return 0;
		}
	}
	for(int i=0;i < n;i++){
		for(int j=0;j < n;j++){
			string temp="";
			temp+=st[i][1];
			temp+=st[j][0];
			if(temp == s){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");

}
