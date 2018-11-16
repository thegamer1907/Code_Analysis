#include <iostream>

using namespace std;

int main()
{
    int A[105],n,res=0;
    int k;
    cin>>n>>k;
    for(int i=1 ; i<=n ; ++i){
        cin>>A[i];
    }
    for(int i=1 ; i<=n ; ++i){
        if(A[k]<=A[i] && A[i]>0){
            res+=1;
        }
    }
    cout<<res<<endl;
    return 0;
}

