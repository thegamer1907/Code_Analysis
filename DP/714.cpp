#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int A[s.length()];
    A[0] = 0;
    /*for(int i = s.length()-2; i >= 0; i--){
        if(s[i+1] == s[i]) A[i] = 0;
        else if(A[i+1] >= 0) A[i] = A[i+1] + 1;
        else A[i] = -1;
    }*/

    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]) A[i] = A[i-1]+1;
        else A[i] = A[i-1];
    }

    int m;
    cin >> m;

    /*for(int i = 0; i < s.length(); i++){
        cout << A[i] << " ";
    }*/

    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        cout <<(A[b-1] - A[a-1])<< "\n";
    }

}
