#include <bits/stdc++.h>
using namespace std;
int x,n;
int a[3];
int main(){
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for (int j=0 ; j<3 ; j++){
            cin>>x;
            a[j]+=x;
        }
    }
    if(a[0]==0 && a[1]==0 && a[2]==0)
        cout << "YES";
    else
    	cout << "NO";
}
