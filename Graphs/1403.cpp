#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> v(n-1);
    bool reach=false;
    int total=0;
    for(int i=0;i<n-1;i++)
        cin>>v[i];
        
    int i=0;
    while(true)
    {
        if(i==n-1&&i==t-1) {reach=true; break;}
        if(i==n-1) break;
        if(i==t-1) {reach=true; break;}
       i+=v[i];
       
    }
    if(reach) cout<<"YES";
    else cout<< "NO";
	return 0;
}