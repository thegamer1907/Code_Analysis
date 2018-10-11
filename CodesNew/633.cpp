#include  <bits/stdc++.h>
using namespace std;

int a, b, c;
set <string> dic;
string arr;

int main(){
    scanf("%d %d",&a,&b);
    for(int i=0; i<a; i++){
        cin >> arr;
        dic.insert(arr);
    }
    for(int i=0; i<b; i++){
        cin >> arr;
        if(dic.count(arr))
            c++;
    }
    if(a==b)
        printf("%s\n",c%2==1 ? "YES" : "NO");
    else
        printf("%s\n",a>b ? "YES" : "NO");
    return 0;
}