#include<bits/stdc++.h>
using namespace std ;

void solve(){
	int n,a,b,tour=0;
	cin >> n >> a >> b ;
	int aux =a;
	a=min(a,b);
	b=max(aux,b);
	vector <int > tab;
	for (int i=0;i<n;i++)
	tab.push_back(i+1);
	while (n/2!=1){
		tour++;
		vector <int > v ;
		for (int i=0;i<n-1;i+=2)
		{
			if  (tab[i]==a && tab[i+1]==b)
			{
			cout << tour ;
			return ; 
			}
			if (tab[i+1]==a || tab[i+1]==b)
			v.push_back(tab[i+1]);
            else v.push_back(tab[i]);

		}
		n=n/2;
		tab=v;
	}
  cout << "Final!";
}

int main(){
	solve();
	return 0 ;
}