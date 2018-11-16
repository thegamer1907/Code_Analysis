#include<iostream>
#include<cstring>

using namespace std;
int main(){

    int n,k;
    cin >> n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int point = arr[k-1];
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i] >= point && arr[i] >0){
            sum++;
        }
    }
    cout << sum;
    return 0;
}
