// Author : Mohamed Sameh
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<queue>
#include<list>
#include<stack>
#include<deque>
using namespace std ;


typedef long long ll ;

#define pb push_back
#define f first
#define s second
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define PI  3.141592 
#define SZ(a) (int)a.size() 
int a[100];
int n,out;  
void num (int st , int en )
{
	int ans =0; 
	for (int i=0;i<n;i++)
	{
		if ((a[i] == 1&&(i<st||i>en) ) || (a[i]==0 &&  i >=st && i <= en ))
			ans ++; 
	}
	out = max (ans,out);
}
int main ()
{
	cin >> n; 
	for (int i=0;i<n;i++)
		cin >> a[i]; 
	for (int i=0;i<n;i++)
	{
			for (int j = i  ; j < n ; j++)
				{
					for (int k=j;k<n;k++)
						{
							num(j,k); 
						}
				}
	}
	cout << out <<"\n";
	return 0;
}

