#include<bits/stdc++.h>
using namespace std;
typedef long long int Long;
typedef long double Double;
const int mod= 1e9 + 7;
const int MAX= 53;
char T[MAX];
int n,t;
int main(int argc, char const *argv[])
{
	scanf("%d%d%s",&n,&t,T+1);
	for(int i=1;i<=t;i++){
		for(int j=1;j<n;j++){
			if(T[j]=='B' && T[j+1]=='G') {swap(T[j],T[j+1]); j+=1;}
		}
	}
	for(int j=1;j<=n;j++) cout << T[j];
	return 0;
}