#include<bits/stdc++.h>
using namespace std;

long long n,f[2];
string a,b;

int main(){
    
    cin>>a;
	cin>>n;
	
	while(n--){
	    cin>>b;
	    
	    if(b==a){
	        f[0]=f[1]=1;
	        break;
        }
        
	    if(b[0]==a[1])
	    f[1]++;
	    
	    if(b[1]==a[0])
	    f[0]++;
    }
    
    if(f[0]>0&&f[1]>0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

return 0;
}

