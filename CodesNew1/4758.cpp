#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<long long int>v; 
	long long s,a=0;
	cin>>s;
	for(int i=1;i<=s;i++){
    long long int t;
     cin>>t;
      v.push_back(t);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<s;i++)
     {
         if(v[a]*2<=v[i])
         {
             a++;
         }
     }
	cout<<s-min(a,s/2);
}