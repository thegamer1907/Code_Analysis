#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	multiset<int> s;
	set<int>::iterator it;
	for(int i=0;i<n;i++)
	{
	    //cout<<arr[i]<<" ";
		s.insert(arr[i]);
	}
	int max;
	for (it = s.begin(); it!=s.end();  ++it) 
	{
        //cout << *it << " "; 
         max=*it;
	}
	//cout<<max<<"hiiiiiii"<<endl;
	int a,b;
	for(int i=1;i<=m;i++)
	{
	   // cout<<endl;
		a=*(s.begin());
		//cout<<a<<" helooo"<<endl;
		b=a+1;
		s.insert(b);
		s.erase(s.begin());
		
	}
	int max1;
	for (it = s.begin(); it!=s.end();  ++it) 
	{
            //cout << *it << "efgfwg "; 
             max1=*it;
	}
	cout<<max1<<" "<<max+m<<endl;
}