#include<bits/stdc++.h>
using namespace std;

int answer(int n, vector<int> A){
    
    int init=0;
    for(int i=0; i<n; i++){
        if(A[i]==1)
            init++;
    }
    
    if(init==n)
        return init-1;
    
    int max=0;
    int count=0;
    
    for(int j=0; j<n; j++){
        if(A[j]==0)
            count++;
        if(A[j]==1)
            count--;
        if(count<0)
            count=0;
        if(count>max)
            max=count;
    }
    
    return max+init;
  
}

int main(){
    int n, d;
    cin>>n;
    
    vector<int> A;
    for(int i=0; i<n; i++){
        cin>>d;
        A.push_back(d);
    }
    
    cout<<answer(n, A)<<endl;
}