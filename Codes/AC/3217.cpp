#include<iostream>
using namespace std;
int rup(int x, int y){
    if ((x%y) == 0){return x/y;}
    return (x+y)/y;
}
int main(){
    int n, mini = 1000000009; cin>>n;
    int arr[n];
    for (int i = 0; i<n; i+=1){
        int x; cin>>x;
        arr[i] = rup(x-i, n);
        mini = (mini < arr[i])? mini: arr[i];
    }
    for (int i = 0; i <n; i+=1){
        if (arr[i] == mini){
            cout<<i+1;
            return 0;
        }
    }
}
