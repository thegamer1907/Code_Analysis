#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s1;
	cin>>s1;
	//
    int n;
    cin>>n;
    string s[n];
    int flag=0;
    
    for(int i=0;i<n;i++)
	 {
	    cin>>s[i];
		
	 }	
	 
//cout<<"string h "<<s1<<endl;
    for(int i=0;i<n;i++)
    {
       //cout<<"as "<<s[i]<<endl;   
        if(s[i][1]==s1[0])
        {
        	//cout<<"mila "<<endl;
        	flag=1;
		}
		else if(s[i]==s1)
		{
			flag=2;	
		}
		else if(s[i][0]==s1[1] && s[i][1]==s1[0])
		{
			flag=3;
		}
	}
	

     if(flag==2)
	 cout<<"YES"<<endl;
	 else if(flag==1)
	 {
	 	ll f=0;
	   for(int i=0;i<n;i++)
	 {
	    if(s[i][0]==s1[1])
		{
		cout<<"YES"<<endl;
		f=1;
		break;	
		}	
	 }	
	 if(f==0)
	 cout<<"NO"<<endl; 	
	 }
	 else if(flag==3)
	 {
	    cout<<"YES "<<endl;	
	 }
	 
	 else
	 cout<<"NO"<<endl;
   
}