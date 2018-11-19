#include<iostream>
#include<stdio.h>
using namespace std;
char ch1,ch2;
string ch;
int n;
int s1[266],s2[266];
int main(){
	//freopen("868A.inp","r",stdin);
	cin>>ch;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ch1>>ch2;
		if(ch1==ch[0]&&ch2==ch[1]){
			cout<<"YES";
			return 0;
		}
		s1[int(ch1)]++;
		s2[int(ch2)]++;
	}
	if(s2[ch[0]]>0&&s1[ch[1]]>0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
