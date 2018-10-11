#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int ans = 0;
    int temp = 0;
    for(int i=0; i<n; i++){
        temp += a[i];
            while(temp > t){
              temp -= a[i-ans];
              i++;
              if(i >= n)
                 break;
              temp += a[i];
            }
            if(i != n)
                ans++;
    }
    cout<<ans;
    return 0;
}
