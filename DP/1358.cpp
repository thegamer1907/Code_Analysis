#include<bits/stdc++.h>

using namespace std;

int a[1000];


int flip(int n,int i, int j){

    int b[1000];

    for(int i=0;i< n; i++)
        b[i]=a[i];

    int count =0;
    for(int k=i; k<=j; k++){
        if(b[k]==0) {
            b[k]=1;

        }
        else b[k]=0;
    }

    for(int k=0; k< n; k++){
        if(b[k]==1) count++;
    }
    return count;
}

int main(){

    int n;
    cin>> n;

    for(int i=0; i< n; i++)
        cin>> a[i];

    int max=-1;
    for(int i=0; i< n; i++){
        for(int j=i; j<n; j++){
           int count= flip(n,i,j);
           if(count>max) max= count;
        }
    }

    cout << max << endl;
    return 0;
}
