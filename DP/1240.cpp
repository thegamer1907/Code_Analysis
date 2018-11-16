#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,total,num,ans=0;
    scanf("%d",&total);
    vector <int> v;

    for(i=0;i<total;i++){
        scanf("%d",&num);
        if(num){
        ans++;
        v.push_back(-1);
        }
        else
        v.push_back(1);
    }

    int max_pos=v[0],max_ans=v[0];

    for(i=1;i<total;i++){
        max_pos = max(v[i],max_pos+v[i]);
        max_ans = max(max_pos,max_ans);
    }

    printf("%d\n",max_ans+ans);
    return 0;
}
