#include<bits/stdc++.h>
using namespace std;


bool dfs(int arr[],int n,int i,int dest){

	int temp = arr[i-1] + i ;

	if(temp == dest)
		return true;
	else if(temp > dest)
		return false;
	
	int ret1 = dfs(arr,n,temp,dest);

	return ret1;
}


int main(){
    
    int n,p;
    cin>>n>>p;

    n--;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	
	bool get = false;
	get = dfs(arr,n,1,p);

	
	if(get)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;


    return 0;
}


/*
Sample Inputs:

#1	
	8 4
	1 2 1 2 1 2 1
	
#2	
	8 5
	1 2 1 2 1 1 1
	
Sample ouputs:

#1
	YES

#2
	NO
		




*/