#include <iostream>

using namespace std;


int h,m,s,t1,t2;


bool interfD(double a){
	int t11 = t1 * 360/12;
	int t22 = t2 * 360/12;
	
	if(t11 < a && t22 > a )   return true;
	return false;
	
}

bool interfU(double a){
	int t11 = t1 * 360/12;
	int t22 = t2 * 360/12;
	if (t22 < a || t11 > a) return true;
	return false;
}
int main(){
	cin>>h>>m>>s>>t1>>t2;
	
	
	int t  = t1;
	
	if(t2 < t1) {
		t1 = t2;
		t2 = t;
	}
	
	double h1 = 360 /12 * h + (double)m *30/60 + (double)s* 30 /3600;
	if(h1 > 360) h1 = h1 -360;
	double m1 = m *360/60 + (double)s*360/3600;
	if(m1 > 360) m1 = m1 - 360;
	
	double s1 = s* 360/60;
	

//	cout<< h1 << " h   " << m1 <<" m    "<< s1 << " s   "<<  t1 * 360/12 <<" t1   " <<  t2 * 360/12 << " t2  "<<endl;
	
	
	if( (interfU(h1) ||interfU(m1)|| interfU(s1) )  &&
	 (interfD(h1) ||interfD(m1)|| interfD(s1) )) cout<< "NO"<<endl;
	else cout<<"YES"<<endl;
	
}
