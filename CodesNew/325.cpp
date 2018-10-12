#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A[100000];
    int n, t;
    cin>>n>>t;

    for(int i = 0; i < n; i++){
        cin>>A[i];
    }

    int k = 0, cont = 0, temp = 0;

    for(int j = 0; j < n; j++){

        temp = temp + A[j];

        while(t < temp){

            temp = temp - A[k];
            k++;

        }

        int act = j - k + 1;
        if(cont < act){
            cont = act;
        }

    }

    cout<<cont;

}
