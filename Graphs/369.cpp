#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

typedef int ll;

long long gcd(long long a, long long b){
	return a? gcd(b % a, a) : b;
}

void swap(char* a, char* b){
    char temp = *a;
    *a=*b;
    *b=temp;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,t;
    cin>>n>>t;
    
    char arr[n];
    
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(ll i=0;i<t;i++){
        for(ll j=0;j<n-1;j++){
            if(arr[j]=='B'&&arr[j+1]=='G'){
                arr[j]='G';
                arr[j+1]='B';
                j++;
            }
        }
    }
    
    for(ll i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}