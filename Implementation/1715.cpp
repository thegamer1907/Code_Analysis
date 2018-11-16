#include<bits/stdc++.h>
#define ll long long int;
#define v vector
using namespace std;
int main()
{
	string str;
	cin>>str;
	int l = str.size();
	int i1=0,i0 = 0,m1 = 0,m0 = 0;
	for(int i=0;i<l;i++){
	    if(str[i] == '1'){
	        i0 = 0;
	        i1++;
	    }
	    else{
	        i1 = 0;
	        i0++;
	    }
	    if(m1<i1)
	        m1 = i1;
	    if(m0<i0)
	        m0 = i0;
	}
	if(m1>=7 || m0>= 7)
	    cout<<"YES"<<endl;
	else
	    cout<<"NO"<<endl;
	return 0;
}