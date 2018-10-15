#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
const int N = 500000+5;
string a[N];
int n,stop[N];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stop[n-1] = a[n-1].length();
    for(int i=n-2;i>=0;i--){
        int len = min((int)a[i].length(),stop[i+1]);
        stop[i] = len;
        for(int j=0;j<len;j++){
            if(a[i][j] < a[i+1][j]){
                stop[i] = a[i].length();
                break;
            }else if(a[i][j] == a[i+1][j]){
                continue;
            }else {
                stop[i] = j;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<stop[i];j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**
3
#bbb
#aaa
#

1
#aaa

3
#
#
#
*/
