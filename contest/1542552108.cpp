#include <iostream>
#include <string>
using namespace std;
const int maxn=100;
string a[maxn];
int main(){
	bool st=0;
	int t=0;
	string s;cin>>s;
	int n;cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		if(s==a[i]){
			st=1;
			break;
		}
	if(!st){
		for(int i=0;i<n;i++)
			if(s[0]==a[i][1]){
				t++;
				break;
			}
		if(t)
			for(int i=0;i<n;i++)
				if(s[1]==a[i][0]){
					t++;
					break;
				}
		if(t==2)
			st=1;
	}
	if(st)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
