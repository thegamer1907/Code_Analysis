#include <bits/stdc++.h>
using namespace std;

int main() {
        int count=1;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size()-1;i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            count++;
	        }
	        else if(count>=7)
	        {
	            break;
	        }
	        else
	        {
	            count=1;
	        }
	        
	    }
	    if(count>=7)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	return 0;
}