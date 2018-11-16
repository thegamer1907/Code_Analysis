#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int on(0), ze(0), m_ze(-1);
    while(n--){
        int x;
        cin >> x;
        if(x == 1){
            on++;
            if(ze > 0)
                ze--;
        }else{
            ze++;
            if(ze > m_ze)
                m_ze = ze;
        }
    }
    cout << on + m_ze << endl;
    return 0;
}