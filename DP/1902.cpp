#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define lld long long
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second

int main(){
	fast;
	string s;
	cin>>s;
	int cnta=0,cntb=0,cntc=0;
	int len=s.length();
	len-=1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='A' && s[i+1]=='B'){
			if(i+2<s.length() && s[i+2]=='A'){
				cntc++;
				i+=2;
			}
			else{
				cnta++;
				i++;
			}
		}
		else if(s[i]=='B' && s[i+1]=='A'){
			if(i+2<s.length() && s[i+2]=='B'){
				cntc++;
				i+=2;
			}
			else{
				cntb++;
				i++;
			}
		}
	}
	if(((cnta==0 && cntb==0) && cntc<2) ||(((cnta==0 && cntb!=0)||(cnta!=0 && cntb==0)) && cntc<1)) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}