#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
const int maxn = 250;
bool has[maxn][2100];
string pre[maxn];
string last[maxn];
string s[maxn];
int solve(int x,int y,int cur)
{
	for(int i = 1; i < 2100; i++){
		if(has[x][i])
			has[cur][i] = 1;
		if(has[y][i])
			has[cur][i] = 1;
	}
//	cout << last[x] << " " << pre[y] << '\n'; 
	for(int i = 0; i < last[x].length(); i++)
	for(int j = 0; j < pre[y].length(); j++){
		int p = 1;
		for(int k = i; k < last[x].length();k++){
			p = (p << 1) + (last[x][k] - '0');
		}
		for(int k = 0; k <= j; k++){
			p = (p << 1) + (pre[y][k] - '0');
		}
	//	printf("%d %d %d\n",i,j,p);
		if(p <= 2050) has[cur][p] = 1;
	}
	if(pre[x].length() == 8) pre[cur] = pre[x];
	else {
		string s1 = pre[x];
		for(int j = 0; pre[x].length() + j + 1 <= 8 && j < pre[y].length(); j++){
			s1 += pre[y][j];
		}
		pre[cur] = s1;
	}
	if(last[y].length() == 8) last[cur] = last[y];
	else{
		string s1 = "";
		for(int j = max(0, (int)(last[x].length() - (8 - last[y].length()))); j < last[x].length(); j++){
			s1 += last[x][j];
		}
		s1 += last[y];
		last[cur] = s1;
	}
	/*
	cout << pre[cur] << '\n';
	for(int i = 1; i <= 10; i++){
		printf("%d %d\n",i,has[cur][i]);
	}
	*/
	for(int i = 9; i >= 1; i--){
		int be = (1 << i);
		int en = (1 << (i + 1)) - 1;
		//printf("%d %d\n",be,en);
		int ok = 1;
		for(int j = be; j <= en; j++){
			if(has[cur][j] == 0){
				ok = 0;
				break;
			}
		}
		if(ok == 1){
			return i;
		}
	}
	return 0;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
		cin >> s[i];
	for(int i = 1; i <= n; i++){
		for(int le = 0; le < s[i].length(); le++){
				int p = 1;
				for(int j = le; j < le + 9 && j < s[i].length(); j++){
					p = (p << 1) + (s[i][j] - '0');
					has[i][p] = 1;
				}
		}
	}
	for(int i = 1; i <= n; i++){
		string s1 = "";
		for(int j = 0; j < s[i].length() && j < 8; j++){
			s1 += s[i][j];
		}
		pre[i] = s1;
		s1 = "";
		for(int j = max(0,(int)(s[i].length() - 8)); j < s[i].length(); j++){
			s1 += s[i][j];
		}
		last[i] = s1;
	}
	/*
	for(int i = 1; i <= n; i++){
		int p = 1;
		for(int j = 0; j < s[i].length() && j < 8; j++){
			p = (p << 1) + (s[i][j] - '0');
			pre[i].push_back(p) 
		}
	}
	for(int i = 1; i <= n; i++){
		for(int le = (max(0,s[i].length() - 8));le < s[i].length();le++){
			int p = 1;
			for(int j = le;j<s[i].length(); j++){
				p = (p << 1) + (s[i][j] - '0');
			}
			last[i].push_back(p);
		}
	}
	*/
	scanf("%d",&m);
	for(int i = 1; i <= m; i++){
		int a,b;
		scanf("%d%d",&a,&b);
		printf("%d\n",solve(a,b,n+i));
	}
	return 0;	
}