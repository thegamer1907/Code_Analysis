#define debug_iv_ac ios::sync_with_stdio(false);cin.tie(NULL);
#include <bits/stdc++.h>
 
#define pb push_back
#define  mp make_pair
#define pp pop_back
#define pf push_front
#define fi first
#define se second
#define maxn 1000005
typedef long long ll;
using namespace std;
#define pi pair<int,int>
 
/*
struct node{
    int pos,left,right;
    int val,idx;
    node(){}
    
    node(int _left, int _right){
        left = _left; right = _right;
    }
    
    bool operator < (node X)const{
        if(left != X.left) return left < X.left;
        //if(pos!=X.pos) return X.pos<pos;
        return right < X.right;
    }
}aux;*/

vector<int> v;
set<int> s;
int cnt[10];
int main() {
    debug_iv_ac;
   	int n,k;
   	cin>>n>>k;
   	for(int i=0;i<n;i++)
   	{
   		int mask = 0;
   		for(int j=0;j<k;j++) 
   		{
			int num;cin>>num;
			if(num) mask^=(1<<j);
		}
		if(s.find(mask)==s.end()) v.pb(mask);
		s.insert(mask);
	}
	int sz = s.size();
	for(int i=1;i<(1<<sz);i++)
	{
		int sz1 = 0;
		for(int j=0;j<sz;j++)
		{
			if(i&(1<<j))
			{
				for(int l=0;l<k;l++)
				{
					if(v[j]&(1<<l)) cnt[l]++;
				}
				//cout<<v[j]<<" ";
				sz1++;
			}
		}
		//cout<<endl;
		//cout<<"x "<<sz1<<endl;
		int flag =0;
		for(int j=0;j<k;j++)
		{
			if(cnt[j]>sz1/2)
			{
				//cout<<cnt[j]<<" ";
				flag = 1;break;
			}
			//cnt[j] =0;
		}
		for(int j=0;j<k;j++) cnt[j] =0;
		//cout<<endl;
		if(!flag)
		{
			cout<<"YES";return 0;
		}
	}
	cout<<"NO";
    return 0;
}
  