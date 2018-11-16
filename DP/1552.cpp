#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,ones=0; cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]==1) B[i]=-1;
        else B[i]=1;
        ones+=A[i];
    }
    int curr_max=B[0], max_so_far=B[0];
    for(int i=1;i<n;i++){
        curr_max=max(curr_max+B[i],B[i]);
        max_so_far=max(max_so_far, curr_max);
    }
    cout<<ones+max_so_far<<endl;
    return 0;
}
