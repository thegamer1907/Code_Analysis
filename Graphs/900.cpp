#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int a[N];
int main ()
{
	int n,t;
	cin>>n>>t;
    for(int i =1;i<=n-1;i++) cin>>a[i];
    int to = 0;
    for(int i =1;i<=n-1;)
    {
    	to = i+a[i];
        i = to;
        if(to == t) {
        	cout<<"YES"<<endl;
        	return 0;
        }
    }
    cout<<"NO"<<endl;
	return 0 ;
}