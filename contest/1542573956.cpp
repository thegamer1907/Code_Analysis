#include <bits/stdc++.h>
using namespace std;
#define kk 1000000007

int main() {
	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	cout.tie (NULL);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h=h*5;
	t1=t1*5;
	t2=t2*5;
	if(t1<t2){swap(t1,t2);}
	int p;
	int k1=0,k2=0;
	if(h==t1 || h==t2){
	    if(s==0 && m==0){
	        cout<<"NO"<<endl;
	        return 0;
	    }
	    else{
	        h++;
	    }
	}
	if(h!=t1 && h!=t2){
	    if(h>t2 && h<t1){
	        k1=1;
	    }
	    else{
	        k2=1;
	    }
	}
	if(m==t1 || m==t2){
	    if(s==0){
	        cout<<"NO"<<endl;
	        return 0;
	    }
	    else if(m==t1){
	        k2=1;
	    }
	    else{
	        k1=1;
	    }
	}
	else{
	    if(m>t2 && m<t1){
	        k1=1;
	    }
	    else{
	        k2=1;
	    }
	}
	if(s==t1 || s==t2){
	    cout<<"NO"<<endl;
	    return 0;
	}
	else{
	    if(s>t2 && s<t1){
	        k1=1;
	    }
	    else{
	        k2=1;
	    }
	}
	if(k1==1 && k2==1){
	    cout<<"NO"<<endl;
	}
	else{
	    cout<<"YES"<<endl;
	}
	return 0;
}