#include<bits/stdc++.h>
using namespace std;
int n;
string arr[1002];

 
int main(){
 
    string w;
    cin>>w;

    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>arr[i];

    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++){
    		string temp = arr[i] + arr[j];
    		if(temp.find(w) != -1){
    			cout<<"YES";
    			return 0;
    		}
    	}

    cout<<"NO";
    return 0;
}
