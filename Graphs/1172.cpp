#include<bits/stdc++.h>
using namespace std;

/*void dfsUtil(int src,bool *visited){

    visited[src]=true;

    cout<<src<<" ";

    list<int>::iterator itr ;

    for(itr=adj[src].begin();itr!=adj[src].end();itr++){
        if(!visited[*itr])
            dfsUtil(*itr,visited);
    }

}
*/

bool dfs(int arr[],int n,int i,int dest){

	//cout<<"t1"<<endl;

	int temp = arr[i-1] + i ;
	
	//cout<<i<<"\t"<<temp<<endl;

	if(temp == dest)
		return true;
	else if(temp > dest)
		return false;

	//cout<<i<<"\t"<<temp<<endl;
	
	int ret1 = dfs(arr,n,temp,dest);
	//int ret2 = dfs(arr,n,i+1,dest);

	//cout<<"t2"<<endl;


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