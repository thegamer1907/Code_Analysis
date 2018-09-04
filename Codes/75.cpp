#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define ll long long int
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
vector <int> v1,v2,v3,v;
int main()
{
	//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	v.pb(1);v.pb(2);v.pb(3);v.pb(3);v.pb(3);v.pb(4);v.pb(4);v.pb(5);v.pb(6);
	//cout<< *upper_bound(v.begin(),v.end(),1) <<"  "<< upper_bound(v.begin(),v.end(),1) - v.begin();
	int i,j,x,y,t;
	int n;
	cin>>n;
    ll a[n+5],sum=0;
    for(i=1;i<=n;++i){
    	cin>>a[i];
    	sum+=a[i];
    }
    if(sum%3!=0){
    	cout<<"0";
    	return 0;
    }
    sum/=3;

    ll pre[n+5]={0};
    for(i=1;i<n;++i){
    	pre[i]=pre[i-1]+a[i];
    	if(pre[i]==sum)
    		v1.pb(i);
    	if(pre[i]==2LL*sum)
    		v2.pb(i);
    	if(pre[i]==3LL*sum)
    		v3.pb(i);
    }
  /*  for(i=0;i<=n;++i)
    	cout<<pre[i]<<" ";
    cout<<"\n";*/
    if(v1.size()==0 || v2.size()==0){
    	cout<<"0";
    	return 0;
    }
    int pre2[(int)v2.size()+5]={0};
  /*  for(i=0;i<v1.size();++i){
    	cout<<v1[i]<<" ";
    }cout<<"\n";
    for(i=0;i<v2.size();++i){
    	cout<<v2[i]<<" ";
    }cout<<"\n";
    for(i=0;i<v3.size();++i){
    	cout<<v3[i]<<" ";
    }cout<<"\n";*/
  /*  pre[0]=0;
    for(i=0;i<v2.size();++i){
         pre[i+1]= pre[i] +   (int)v3.size()-(int)(upper_bound(v3.begin(),v3.end(),v2[i]) - v3.begin()) ;
    }
    for(i=1;i<=v3.size();++i)
    	cout<<pre[i]<<" ";
    cout<<"\n";*/
    ll ans=0;
    for(i=0;i<v1.size();++i){
    	  // cout<< (int)(upper_bound(v2.begin(),v2.end(),v1[i]) - v2.begin()) <<"   M\n";
          // ans+= pre[v2.size()] - pre[(int)(upper_bound(v2.begin(),v2.end(),v1[i]) - v2.begin()) ] ;
           ans+= v2.size()-(int)(upper_bound(v2.begin(),v2.end(),v1[i]) - v2.begin())  ;

          // cout<<ans<<"\n";
    }
    cout<<ans<<"\n";
return 0;
}