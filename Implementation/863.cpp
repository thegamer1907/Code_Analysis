#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
char que[55];
int main(){
    int n,t;
    scanf("%d %d\n",&n,&t);
    scanf("%s",que);
    for(int i=0;i<t;i++){
        for (int j=0;j<n;){
            if(que[j]=='B'){
                if(que[j+1]=='G'){
                    que[j]='G';
                    que[j+1]='B';
                    j+=2;
                }
                else j++;
            }
            else j++;
        }
    }
    printf("%s\n",que);
    return 0;
}