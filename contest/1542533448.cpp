#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, k;
string a[100000];
int mej[100000];
long long c[20000];

int solve(string s){
	for(int i=10;i>=0;i--){
		bool flag=0;
		for(int j=0;j<(1<<i);j++){
			string t;
			for(int k=0;k<i;k++)
				if(j&(1<<k)) t+='1';
				else t+='0';
			if(s.find(t)==s.npos){
				flag=1; break;
			}
		}
		if(!flag) return i;
	}
	return 0;
}

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++)
    	 cin >> a[i];
    
    cin >> m;
    for (int i = 1; i <= m; i++){
    	 cin >> x >> y;
    	 a[++n] = a[x] + a[y];
    	 k++;
    	  if ((int)a[n].size() > 1000)
    	     a[n] = a[n].substr (0, 500) + a[n].substr((int)a[n].size()-500, 500);
    
    	 int sol = max (solve(a[n]), max(mej[x], mej[y]));
    	 printf ("%d\n", sol);
    	 mej[n] = sol;
         
        }

	return 0;
}