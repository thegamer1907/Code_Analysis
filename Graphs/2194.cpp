#include <ctype.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include<vector>
#include <iomanip>
using namespace std;
long long k=1,n,check=0,prev,m,summa;
vector<int> use,use1 ;
vector < int > in;
vector < vector <int > >out;
vector<long long> cost;
vector<int> order;

void dfs(int s,int cur)
{
//	cout<<s<<" ";
    use[s]=1;
    for(int i=0;i<out[s].size();i++)
    {
        if(use[out[s][i]]==0)
        {
		//	cout<<"what "<<s<<" "<<i<<" "<<out[s][i]<<"    ";
            dfs(out[s][i],cur+1);
            
        }
       // cout<<"nowhat "<<s<<" "<<i<<" "<<out[s][i]<<"    ";
    }
	if(cur>k)
	{
	//	cout<<s<<" "<<k<<endl;
		k=cur;
	}
}
void dfsback(int s)
{
	
     use1[s]=1;
    if(use1[in[s]]==0)
        dfsback(in[s]);
    if(use1[in[s]]==1)
        {
        //	cout<<in[s]<<endl;
            dfs(in[s],1);
        
        }
  cout<<endl<<endl;
}
int main()
{
    long long n,t;
    cin>>n;
    in.resize(n);
    use.resize(n);
    use1.resize(n);
    out.resize(n);
    
    for(long long i=0;i<n;i++)
    {
        cin>>t;
        
        t--;
        if(t>=0)
       		out[t].push_back(i);
       	
		   	
        
        in[i]=t;
    }
    cout<<endl;
   /*for(int i=0;i<n;i++)
   {
   	cout<<i<<" "<<in[i]<<"     ";
	for(int j=0;j<out[i].size();j++)
   		cout<<out[i][j]<<" ";
   	cout<<endl;	
	}*/
	dfsback(0);
    for(int i=1;i<n;i++)
    {
    	
        if(use[i]==0)
        {
        	
			
             dfsback(i);
         }
    }
    cout<<k;
    return 0;
}

