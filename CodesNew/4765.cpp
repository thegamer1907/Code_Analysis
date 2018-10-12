#include<iostream>
#include<algorithm>

using namespace std;

int s[500500];
int main()
{
    int n,p;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    sort(s,s+n);
    p = n-1;
    for (int i=n/2-1; i>=0 ; i--){
        if (s[i] * 2 <= s[p])
            p--;
    }
    cout << p+1;
    return 0;
}