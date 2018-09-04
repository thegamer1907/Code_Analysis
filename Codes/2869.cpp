#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length(),l=0,r=0;
	int z[n];
	z[0]=0;
	for(int i=1;i<n;i++){
		if(i>r){
			//cout<<1<<" ";
			l=r=i;
			while(r<n and s[r] == s[r-l]){
				r++;
			}
			z[i] = r-l;
			r--;
		}
		else{
			//cout<<2<<" ";
			int k = i-l;
			if(z[k] < r-i+1){
				z[i] = z[k];
				
			}
			else{
				l=i;
				while(r<n and s[r] == s[r-l]){
					r++;
				}
				z[i] = r-l;
				r--;
			}
		}
		//cout<<l<<" "<<r<<endl;
		//cout<<z[i]<<" ";
	}
	int ans = 0,idx,maxi = 0;
	for(int i=1;i<n;i++){
		if(z[i] == n-i and z[i] <= maxi){
			ans = z[i];
			idx=i;
			break;
		}
		maxi = max(maxi,z[i]);
	}
	if(ans)
		cout<<s.substr(idx,ans)<<endl;
	else
		cout<<"Just a legend"<<endl;
}