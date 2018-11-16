#include <bits/stdc++.h>
using namespace std ;
int a[100000][2] ;
int b[100000] ;
int main(){
	string s ;
	cin >> s ;
	int n ;
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i][0] >> a[i][1] ;
	}
	int h = 0 ;
	for (int i = 0 ; i < s.size() - 1; i++)
	{
		if(s[i] == s[i + 1])
		{
			h++;
		}
		b[i] = h ;
	}
	for (int i = 0 ; i < n ; i++)
	{
		cout << b[a[i][1] - 2] - b[a[i][0] - 2] <<"\n";
	}
}
