#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
	 cin.tie(0);

    int n,m;
    cin>>n>>m;
    string array[n],arr[m];
    set<string>st;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        st.insert(array[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    if(n>m){cout<<"YES"<<endl;return 0;}
    else if(m>n){cout<<"NO"<<endl;return 0;}
    else
    {
        if(st.size()%2==1){cout<<"YES"<<endl; return 0;}
        else{cout<<"NO"<<endl; return 0;}
    }
	 return 0;
}
