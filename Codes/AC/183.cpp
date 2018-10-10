#include<vector>
#include<iostream>

using namespace std;

int bin_ser(vector<int> &A, int x){
    int l= 0, r= A.size(), m;
    while (r - l > 1){
        m= (r + l) / 2;
        if (A[m] >= x){
            r= m;
        }else{
            l= m;
        }
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n + 1);
    for (int i= 1; i <= n; i++){
        int x;
        cin >> x;
        A[i]= A[i - 1] + x;
    }

    int m;
    cin >> m;
    for (int i= 0; i < m; i++){
        int x;
        cin >> x;
        cout << bin_ser(A, x) << "\n";
    }
    return 0;
}
