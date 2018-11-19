#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	int a[59][2];
	for(int i=0;i<59;i++){
	    a[i][0]=i;
	    a[i][1]=0;
	}
	if(h==12)
	a[0][1]=1;
	else
	a[h*5][1]=1;
	a[m][1]=1;
	a[s][1]=1;
	int x=min(t1,t2);
	int y=max(t1,t2);
	int f=0;
	for(int i=(x*5);i<(y*5);i++){
	    if(a[i][1]==1){
	        f=1;
	        break;
	    }
	}
	if(f==0)
	cout<<"YES"<<endl;
	else{
	    int g=0;
	    for(int i=(y*5);i<59;i++){
	        if(a[i][1]==1){
	            g=1;
	            break;
	        }
	    }
	    if(g==1)
	    cout<<"NO"<<endl;
	    else{
	        int flag=0;
	        for(int i=0;i<(x*5);i++){
	            if(a[i][1]==1){
	                flag=1;
	                break;
	            }
	        }
	        if(flag==1)
	        cout<<"NO"<<endl;
	        else
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
