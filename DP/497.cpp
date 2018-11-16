#include <iostream>
#include <climits>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;


int main(){

	fastio;
	fastcin;	
	
    
    //freopen("small_input.txt", "r", stdin);
    
    //freopen("small_output.txt", "w", stdout);
    int n,m;
    cin>>n;
	int* a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//int m;
	cin>>m;

	int* b = new int[m];

	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int answer = 0;
	int count= 0;
	for(int i=0;i<n;i++)
	{
		for(int j=count;j<m;j++)
		{
			
			if(abs(a[i]-b[j])<=1)
			{

				count = j+1;
				answer++;
				break;
			}
		}
		
	}
	cout<<answer<<"\n";
}