#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n,l;
    double array[1005],high = 0,x=0,y=0,z=0;
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array,array+n);
    for( int i = 0; i < n-1; i++){
        x = array[i+1]-array[i];
        if(x>high)high= x;
    }
    y = array[0]-0;
    high/=2;
    z = l - array[n-1];
    if(y > high)high = y;
    if(z > high)high = z;
    printf("%.10f",high);
    return 0;
}