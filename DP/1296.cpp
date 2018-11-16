#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false)
#define fastcin cin.tie(NULL)
using namespace std;

int main(){

	fastio;
	fastcin;	
	
    
    // freopen("small_input.txt", "r", stdin);
    
    // freopen("small_output.txt", "w", stdout);

    int n;

    cin>>n;
    int* a=new int[n];

    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int cn1=0,extra0=0,extra0max=-1;
    for(int i=0;i<n;i++){
    	if(a[i] == 1){
    		cn1++;
    		if(extra0 > 0){
    			extra0--;
    		}
    	}else{
    		extra0++;
    		extra0max = max(extra0,extra0max);
    	}

    }
    cout<<extra0max+cn1;
	return 0;
}