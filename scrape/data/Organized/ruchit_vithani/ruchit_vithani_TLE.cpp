#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define pii pair<int,int>
#define ll long long int
#define ull unsigned long long int
#define db double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define inf LLONG_MAX
#define INF 2000000002
#define NUM 100005

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll p[m];
	int i,end=k,cnt=0,move=0;
	for(i=0;i<m;i++)cin>>p[i];
	i=0;
	while(i<m){
		move=0;
		while(i<m && p[i]<=end){
			move++;
			i++;
		}
		if(move){end+=move;cnt++;}
		else end+= ((p[i]-end-1)/k+1)*k;
	}
	cout<<cnt<<endl;
	return 0;
}