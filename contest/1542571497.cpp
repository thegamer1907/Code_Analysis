#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,k;
    cin >> n >> k;
    int arr[n][k],minn=1000,ind,ind2;
    for(int i=0; i<n; i++){
        int sumN=0;
        for(int j=0; j<k; j++){
            cin >> arr[i][j];
            sumN += arr[i][j];
        }
        if(n==1 && sumN==0){
            cout << "YES";
            return 0;
        }
        if(sumN<minn){
            minn=sumN;
            ind=i;
        }else if(sumN==minn) ind2=i;
    }

    for(int i=0; i<n; i++){
        int flag=0;
        if(i==ind) continue;
        for(int j=0; j<k; j++){
            if(arr[ind][j]+arr[i][j]==2) flag=1;
        }
        if(!flag){
            cout << "YES";
            return 0;
        }
    }
    for(int i=0; i<n; i++){
        int flag=0;
        if(i==ind2) continue;
        for(int j=0; j<k; j++){
            if(arr[ind2][j]+arr[i][j]==2) flag=1;
        }
        if(!flag){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
