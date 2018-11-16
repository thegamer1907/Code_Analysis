#include <iostream>

using namespace std;

const int  MAX = 10000 * 5;

int N,M;
int a[MAX];

int main()
{
    cin>>N>>M;
    for(int i = 1;i < N;i++){
        cin>>a[i];
    }
    int k = 1;
    while(k != M&&k < M){
        k += a[k];
    }
    if(k==M)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
