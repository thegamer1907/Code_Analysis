#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const long long inf = 1000000000000000000LL;
const int N = 200000 + 5;


int n;
int  x;
int m;
int main() {
    cin >> n;
    cin >> m;
    int z=m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> x;
        arr[i]=x;
    }
    int maxim =0;
    for(int j=0;j<n;j++){
       maxim = max(maxim,arr[j]);
    }
    int raz;
    for(int g=0;g<n;g++){
        raz= maxim - arr[g];
        m= m-raz;
    }
    int minimal;
    if(m<=0){
       minimal = maxim;
    } else{
        int ost=m%n;
        int k = m/n;
        if(ost==0){
          minimal=maxim+k;
        }else{
            minimal=maxim+k+1;
        }
    }
cout << minimal ;
cout <<' '<< maxim+z;
    return 0;
}
