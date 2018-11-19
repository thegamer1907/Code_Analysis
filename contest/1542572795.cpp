#include <bits/stdc++.h>

using namespace std;

int main() {
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = ((h*60)/12)*2;
    t1 = ((t1*60)/12)*2;
    t2 = ((t2*60)/12)*2;
    m *= 2;
    s *= 2;
    if(m || s) h++;
    if(s) m++;
    int arr[5];
    arr[0]=h,arr[1]=m,arr[2]=s,arr[3]=t1,arr[4]=t2;
    sort(arr,arr+5);
    if((arr[0]==t1 && arr[4]==t2) || (arr[0]==t2 && arr[4]==t1)){
        cout << "YES" << endl;
        return 0;
    }
    for(int i=0; i<4; i++){
        if((arr[i]==t1 && arr[i+1]==t2) || (arr[i]==t2 && arr[i+1]==t1)){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
