#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define ii insert

int main() 
{
    double h,m,s,t1,t2;
    
    cin>>h>>m>>s>>t1>>t2;
    
    h=(h+m/60.0+s/3600.0);
    
    if(h>12)
    h-=12;
    
    h*=30;
    
    m=(m+s/60.0);
    
    if(m>60)
    m-=60;
    
    m*=6;
    
    s=s*6;
    
    t1*=30;
    
    t2*=30;
    
    double x,y;
    if(t1>t2)
    {
        x=t1;
        y=t2;
    }
    else
    {
        x=t2;
        y=t1;
    }
    
    //cout<<h<<" "<<m<<" "<<s<<" "<<x<<" "<<y<<endl;
    
    int f=0;
    if(h>=y&&h<=x&&m>=y&&m<=x&&s>=y&&s<=x)
	f=1;
	
	if(((h>=x&&h<=360)||(h>=0&&h<=y))&&((m>=x&&m<=360)||(m>=0&&m<=y))&&((s>=x&&s<=360)||(s>=0&&s<=y)))
	f=1;
	
	if(f)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
