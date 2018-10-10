#include<iostream>
#include <set>
using namespace std;
typedef long long lli;
int main()
{
    lli n;
    cin>>n;
    lli nos[n];
    lli nos2[n];
    for(lli i=0;i<n;i++){
        cin>>nos[i];
    }
    lli sum =0;
    nos2[n-1] = nos[n-1];
    for(lli i=n-2;i>=0;i--){
	nos2[i] = nos[i]+nos2[i+1];
    }
    for(lli i=0;i<n;i++){
        if(i>0)nos[i] = nos[i-1]+nos[i];
        lli start=n,jump =n;
        while(jump){
        	while(start-jump>i && nos2[start-jump]<=nos[i]){
        		start-=jump;
        	}
        	jump/=2;
        }
        if(start<n&&nos[i] == nos2[start]) sum = nos[i];
    }
    cout<<sum;
}