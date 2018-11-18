#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	int n;
	cin>>n;
	int i,count=0,count1=0,count3=0,count2=0;
	char a[n],b[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    cin>>b[i];
	}
	
	//cout<<endl;
	for(i=0;i<n;i++)
	{
	    if(s[0]==b[i])
	    {
	        count++;
	    }
	    if(s[1]==a[i])
	    {
	        count1++;
	    }
	}
	for(i=0;i<n;i++)
	{
	if(s[0]==a[i] && s[1]==b[i])
	{
	    cout<<"YES";
	    return 0;
	}
	}
	//cout<<count<<" "<<count1<<endl;
	for(i=0;i<n;i++)
	{
	    if(count>=1 && count1>=1)
	    {
	        cout<<"YES";
	       return 0;
	    }
	    else 
	        cout<<"NO";
	        return 0;
	} 
	    
}