#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int h, m, s, t1, t2;
	cin>>h>>m>>s>>t1>>t2;
	float markH, markM, markS;
	if(h == 12) h = 0;
	if(t1 == 12)    t1 =0;
	if(t2 == 12)    t2 = 0;
	//Convert 360 degree as 3600*12 for integral solutions
	markH = h*3600 + m*60 +s;
	t1*=3600;
	t2*=3600;
	markM = m*60*12 + s*12;
	markS = s*60*12;
	int start;
	//cout<<h<<" "<<m<<" "<<s<<" "<<endl;
	//cout<<markH<<" "<<markM<<" "<<markS<<" "<<endl;
	start = t1;
	while(start != t2){
	    start+=1;
	    //cout<<start<<endl;
	    if(start == 3600*12) start = 0;
	    if((start == markH)||(start == markM)||(start == markS))
	        break;
	}
	if(start == t2) {
	    cout<<"YES"<<endl;
	    return 0;
	}
	start = t2;
	//cout<<"new"<<endl;
	while(start != t1){
	    start+=1;
	    //cout<<start<<endl;
	    if(start == 3600*12) start = 0;
	    if((start == markH)||(start == markM)||(start == markS))
	        break;
	}
	if(start == t1) {
	    cout<<"YES"<<endl;
	    return 0;
	}
	
	
	cout<<"NO"<<endl;
	return 0;
}