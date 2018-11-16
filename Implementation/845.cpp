#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    scanf("%d%d",&n,&s);
    char str[n];
    scanf("%s",str);
    while (s--){
        for (int i=0; i<n-1; i++){
            if (str[i]=='B' && str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i++;
            }
        }
    }
    printf("%s\n",str);
}