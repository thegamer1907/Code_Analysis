#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define f(i, x, y) for(int i = x; i < y; i++)
#define int long long
const  int mod = 1e9 + 7;
const int inf = 1e14;
using namespace std;

main() {
	fastread;
	int n, k; cin>>n>>k;
	int num = pow(2, k) - 1;
	int table[num+1];
	memset(table, 0, sizeof(table));
	//cout<<num<<" ";
	f(i, 1, n+1)
	{
	    int arr[k];
	    f(j, 0, k)
	        cin>>arr[j];
	    //if(i == 1)
	     //   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
	    f(j, 1, num+1)
	    {
	        bool p = true;
	        f(l, 0, k)
	        {
	            if(((1<<l) & j) && arr[k-l-1] != 0)
	                p = false;
	        }
	        if(p)
	        {
	 //           cout<<i<<" "<<j<<"\n";
	            table[j]++;    
	        }
	    }
	}
	
//	f(i, 1, num+1)
//	    cout<<table[i]<<" ";
	
	if(k == 1)
	{
	    cout<<((table[1] > 0)? "YES" : "NO");
	    return 0;
	}
	
	f(i, 1, num+1)
	{
	    if(table[i] > 0)
	    {
	        f(j, 1, num+1)
	        {
	            if(((i ^ j) == num) && table[j] > 0)
	            {
	                //cout<<i<<" "<<j<<" "<<((i ^ j) == num)<<" "<<num;
	                cout<<"YES"; return 0;
	            }
	        }
	    }
	}
	cout<<"NO";
}