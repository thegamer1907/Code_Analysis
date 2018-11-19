#include <iostream>

using namespace std;
char c[105][2],a,b;

int main(){
    int i,j,n;
    cin >> a >> b;
    cin >> n;
    bool flag=0;
    for(i=0;i<n;i++){
        cin >> c[i][0] >> c[i][1];
        if(c[i][0]==a && c[i][1]==b) flag=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(c[i][1]==a && c[j][0]==b)
                flag=1;
        }

    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}
