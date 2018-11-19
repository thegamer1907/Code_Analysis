#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
int h,m,s,t1,t2;
int main(){
	ios_base::sync_with_stdio(0);
	cin>>h>>m>>s>>t1>>t2;
	h*=5;
	t1*=5;
	t2*=5;
	if(h==60) h=0;
	if(m==60) m=0;
	if(s==60) s=0;
	if(t1==60) t1=0;
	if(t2==60) t2=0;

	for(int i=t1;;i++){
        if(i==60) i=0;
        if(i==t2){
            cout<<"YES";
            return 0;
        }
        if(i==h || i==s || i==m) break;
	}
	for(int i=t1-1;;i--){
        if(i==-1) i=59;
        if(i==h || i==s || i==m) break;
        if(i==t2){
            cout<<"YES";
            return 0;
        }
	}
	cout<<"NO";
}
