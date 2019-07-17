#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,m,k;
	cin>>n>>m>>k;
	
	vector<long long> v;
	for(long long i=0;i<m;i++)
	{
	    long long x;
	    cin>>x;
	    v.push_back(x);
	}
	if(k==1)
	{
	    cout<<m<<endl;
	    return 0;
	}
	long long count=0,i=0,last_position=-1,t=k,turn=0;
	while(count<m)
	{
	    vector<long long>::iterator low1;
        low1 =lower_bound(v.begin(), v.end(), t);
        
        long long pos=low1-v.begin();
        if(v[pos]!=t)
            pos--;
        if(pos!=last_position && pos!=-1)
        {
            t=t+(pos - last_position);
            count+=(pos-last_position);
            turn++;
            last_position=pos;
        }
        else
        {
            t=max(t+1,(long long)ceil((long double)v[pos]/k)*k+count);
            //unsigned long long temp = ceil((long double)v[pos]/k);
            //t = temp*k + count;
            //long long temp = (v[pos+1]-count+k-1)%k;
            //t = (k-1-temp)+v[pos+1];
            
            if(t>=n)
                t = n;
            
        }
	}
	cout<<turn<<endl;
	return 0;
}