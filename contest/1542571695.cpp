/*
 ____    _____      _      _               _____ 
/ ___|  | ____|    / \    | |             |___  |
\___ \  |  _|     / _ \   | |      _____     / / 
 ___) | | |___   / ___ \  | |___  |_____|   / /  
|____/  |_____| /_/   \_\ |_____|          /_/   

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define modulo(a, b) (a%b<0 ? a%b+b : a%b)
#define PI 3.1415926535897
#define ceil(a,b) ((a+b-1)/b)
#define MOD 1000000007
#define INF 1e18+7
bool check(double a,int b,int c)
{
	if(a>=b&&a<=c)
	{
		return true;
	}
	return false;
}

int main(){
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h=h%12;
    t1=t1%12;
    t2=t2%12;    
    double sec_pos=(s*6);
    double min_pos=(m*6+((1.0/60.0)*s));    
    double hour_pos= ((h*30)+(m/2)+((0.5/60.0)*s));
    double t1_pos=(t1*30);
    double t2_pos=(t2*30);
    if(t1_pos>t2_pos){
    	swap(t1_pos,t2_pos);
    }  
    //cout<<hour_pos<<endl<<min_pos<<endl<<sec_pos<<endl<<t1_pos<<endl<<t2_pos<<endl;
    if(hour_pos>=t1_pos and hour_pos<=t2_pos and min_pos>=t1_pos and min_pos<=t2_pos and sec_pos>=t1_pos and sec_pos<=t2_pos){
    	cout<<"YES\n";
    }
    else if((hour_pos<=t1_pos or hour_pos>=t2_pos) and (min_pos<=t1_pos or min_pos>=t2_pos) and (sec_pos<=t1_pos or sec_pos>=t2_pos)){
    	cout<<"YES\n";
    }
    else{
    	cout<<"NO\n";
    }
}