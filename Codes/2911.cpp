#include<bits/stdc++.h>
using namespace std;
int pi[1000001];
int main(){
    string s;
    cin>>s;
    int n=s.size();
	for (int i=1;i<n;i++) {
		int j=pi[i-1];
		while(j>0 && s[i]!=s[j])j=pi[j-1];
		if(s[i]==s[j])j++;
		pi[i]=j;
	}
	int ans=0;
	for(int i=1;i<n-1;i++){
        if(pi[i]==pi[n-1])ans=pi[n-1];
	}
	if(ans==0)ans=pi[pi[n-1]-1];
	if(ans==0){
        cout<<"Just a legend";
	}
	else{
        for(int i=0;i<ans;i++){
            cout<<s[i];
        }
	}
    return 0;
}
