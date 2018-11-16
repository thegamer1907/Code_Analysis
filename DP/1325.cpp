#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>v,b;
int o=0;
for(int i=0;i<n;i++)
{int t; cin>>t;
	v.push_back(t);
	b.push_back(t==0?1:-t);
	if(t==1) o++;
}	
int max_sum=INT_MIN;
int cur_sum=0;
for(int i=0;i<n;i++)
{
	cur_sum+=b[i];
	max_sum=max(max_sum,cur_sum);
	if(cur_sum<0)
		cur_sum=0;
}
cout<<o+max_sum<<"\n";

}