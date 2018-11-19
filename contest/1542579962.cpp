#include <iostream>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	long double h,m,s,t1,t2;cin>>h>>m>>s>>t1>>t2;
	long double h_d=(h*(360.0/12.0))+((360.0/12.0)*(m/60.0))+((360.0/12.0)*(s/3600.0));
	long double m_d=360.0 * (m/60.0)+(s/60.0 * 360.0/60.0);
	long double s_d=360.0 * (s/60.0);
	long double t1_d=t1*(360.0/12.0);
	long double t2_d=t2*(360.0/12.0);
	if(t2_d<t1_d)swap(t1_d,t2_d);
	if((t2_d>h_d && t2_d>m_d && t2_d>s_d && t1_d<h_d && t1_d<m_d && t1_d<s_d)    ||  
	  (!(t2_d>h_d && t1_d<h_d) && !(t2_d>m_d && t1_d<m_d) && !(t2_d>s_d && t1_d<s_d))){
		cout<<"YES";
	}
	else cout<<"NO";
    return 0;
}