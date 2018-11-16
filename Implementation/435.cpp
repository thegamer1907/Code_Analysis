#include <iostream>
using namespace std;

int main() 
{
int n,k;
int score;
cin>>n>>k;
int A[n];
int count=0;

for(int i=0;i<n;i++){
cin>>A[i];
}


for(int i=0;i<n;i++){
    if(A[i]>=A[k-1] ){

      if(A[i]!=0)
      count++;

    }
}

cout<<count;



}