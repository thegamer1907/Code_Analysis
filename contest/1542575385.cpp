#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int n, k;

map<int,int> mp;
set<int> S;
set<int>::iterator it;

int main() {
	int n, k;
	cin >> n >> k;
	mp.clear();
	S.clear();
	bool has[4];
	memset(has, 0, sizeof(has));
	for(int i=0;i<n;i++) {
		int s = 0;
		int n0 = 0;
		for(int j=0;j<k;j++) {
			int x;scanf("%d", &x);
			if(x==0) has[j]=1, n0++;
			s=s*2+x;
		}
		mp[s] = 1;
	}
	if(mp.count(0)>0) return puts("YES");
	else {
		if(k==1) return puts("NO");
		else if(k==2) {
			if(mp.count(1)>0&&mp.count(2)>0) return puts("YES");
			else return puts("NO");
		} else 
		if(k==3) {
			for(int i=0;i<3;i++) {
				int s = 0;
				for(int j=0;j<3;j++) {
					if(j==i) s=s*2+1;
					else s=s*2;
				}
				if(mp.count(s)>0&&has[i]) return puts("YES");
			}
			return puts("NO");
		} else
		{
			if(mp.count(3)&&mp.count(12)) return puts("YES");
			if(mp.count(5)&&mp.count(10)) return puts("YES");
			if(mp.count(6)&&mp.count(9)) return puts("YES");
			for(int i=0;i<4;i++) {
				int s = 0;
				for(int j=0;j<4;j++) {
					if(j==i) s=s*2+1;
					else s=s*2;
				}
				if(mp.count(s)>0&&has[i]) return puts("YES");
			}
			return puts("NO");
		}
	}
}