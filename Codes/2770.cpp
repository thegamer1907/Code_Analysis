#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<string.h>
#include<limits.h>
#include<queue>
#include<set>
#include<map>
#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;
typedef pair<llt,llt> pll;
typedef pair<char,char> pcc;
typedef pair<string,string> pss;
typedef pair<llt,char> plc;
#define endl "\n"
#define sd(x) scanf("%d",&x)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define tr(x) cout<<x<<endl;
#define tr2(x,y) cout<<x<<" "<<y<<endl;
#define tr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
#define tr4(w,x,y,z) cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
#define make0(a) memset(a,0,sizeof(a))
#define trv(v) for(llt i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl;
bool cmp(plc p1,plc p2){
	return p1.first>p2.first;
}
int x[1000001],c[1000001],i,j;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	llt n=s.size();
	x[0]=0;
	x[1]=0;
	for(i=2;i<=n;i++){
		j=x[i-1];
		while(true){
			if(s[j]==s[i-1]){
					x[i]=j+1;
					break;
			}
			else if(j==0){
				x[i]=0;
				break;
			}
			j=x[j];
		}
	}
	// for(i=0;i<21;i++)
		// cout<<x[i]<<" ";
	// cout<<endl;
	i=0;
	j=1;
	int check=0;
	while(j<n){
		if(s[j]==s[i]){
			j++;
			i++;
			if(j==n){
				while(i>0 and c[i]==0){
					i=x[i];
				}
				check=1;
				break;
			}
			c[i]=1;
		}
		else if(i>0)
			i=x[i];
		else
			j++;
	}
	if(i==0 or check==0)
		cout<<"Just a legend\n";
	else
		cout<<s.substr(0,i)<<endl;;
}
