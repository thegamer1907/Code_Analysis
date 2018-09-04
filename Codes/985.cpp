#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>
using namespace std;
int n,k;
string s;
int cha(char x){
	int l=0,r=0,cnt=0,ans=0;
	while(l<n&&r<n){
		while((s[r]==x||cnt<k)&&r<n){
			if(s[r]!=x){
				cnt++;
			}
			r++;
		} 
		ans=max(ans,r-l);
		while(s[l]==x){
			l++;
		}
		l++;
		cnt--;
	}
	return ans;
}
int main(){
	while(~scanf("%d%d",&n,&k)){
		cin>>s;
		int ans=max(cha('a'),cha('b'));
		printf("%d\n",ans);
	}
	return 0;
} 
