#include <bits/stdc++.h>

using namespace std;

#define PI                   acos(-1)
#define inf                  1e9
#define SZ(a)                a.size()
#define ms(a,b)              memset(a,b,sizeof a)
#define clr(a)               memset(a,0,sizeof a)
#define input                freopen("in.txt","r",stdin)
#define output               freopen("out.txt","w",stdout)
#define fast                 ios_base::sync_with_stdio(0); cin.tie(0)
#define LL                   long long
#define isValid(a,b,A,B)     ((0<=a&&a<A) && (0<=b&&b<B))
#define Abs(a,b)             a>b ? a-b : b-a // if a>b is true return a-b eles b-a
#define pb                   push_back
#define mp                   make_pair
#define spc                  printf(" ")
#define nl                   printf("\n")
#define sf                   scanf
#define pf                   printf

/* .......................................................*/


int main()
{
	int l;
	string str;
	while(cin>>str){
		l=str.size();
		bool ab=false,ba=false;
		for(int i=0; i<l-1; i++){
			if(str[i]=='A' and str[i+1]=='B' and !ab){
				ab=true;
				i++;
			}
			else if(str[i]=='B' and str[i+1]=='A' and !ba and ab){
				ba=true;
				i++;
			}
		}
		if(ab and ba) cout<<"YES"<<endl;
		else{
			ab=false, ba=false;
			for(int i=0; i<l-1; i++){
				if(str[i]=='B' and str[i+1]=='A' and !ba){
					ba=true;
					i++;
				}
				else if(str[i]=='A' and str[i+1]=='B' and !ab and ba){
					ab=true;
					i++;
				}
			}
			if(ab and ba) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
    return 0;
}