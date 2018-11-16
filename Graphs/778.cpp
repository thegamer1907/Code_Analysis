#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;



int main(){
    int n,t,j;
    string ch;
    cin >> n >> t;
    cin >> ch;
    for(int j=1;j<=t;j++){
        for (int i=0;i<n-1;i++){
            if ((ch[i]=='B') && (ch[i+1]=='G')){
                ch[i]='G';
                ch[i+1]='B';
                i++;
            }
        }
    }
    cout << ch;
    /*j=t%n;
    for (int i=n-j;i<n;i++){
        cout << ch[i];
    }
    for (int i=0;i<n-j;i++){
        cout << ch[i];
    }*/
}


  /*  for (int i=0;i<n;i++){
        cout << s[i];
    }*/

  /*  for (int i=0;i<n;i++){
        cin >> s[i];
    }*/
