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

vector<double> v;
int main() {
    debug_iv_ac;
   	int h,m,s;
   	cin>>h>>m>>s;
   	int t1,t2;
   	cin>>t1>>t2;
   	if(h==12) h = 0;
   	double h1 = h + m*(1.0/60) + s*(1.0/3600);
   	double m1 = m + s*(1.0)/60;
   	double s1 = s*1.0;
   	h1*=5;
   	//if(h1==60.0) h1 = 0.0;
   	//cout<<h1<<" "<<m1<<" "<<s1<<endl;
   	t1 = t1*5,t2 = t2*5;
   	t1%=60,t2%=60;
   	if(t1>t2) swap(t1,t2);
   	//cout<<t1<<" "<<t2<<endl;
   	v.pb(h1),v.pb(m1),v.pb(s1);
   	sort(v.begin(),v.end());
   	//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
   	//cout<<ceil(v[1])<<" "<<ceil(v[0])<<endl;
   	if(t1>=ceil(v[0])&&t2<=floor(v[1])||t1>=ceil(v[1])&&t2<=floor(v[2])||t2>=ceil(v[2])&&((t1>=ceil(v[2])&&t1<=60)||((t1>=0&&t1<=floor(v[0]))))||t1>=0&&t2<=floor(v[0]))
	   cout<<"YES";
	  else	
	cout<<"NO";
    return 0;
}
  