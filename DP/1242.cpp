#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total,num,i,j,sum=0,c=1;
    scanf("%d",&total);
    vector <int> v,v2;

    for(i=0; i<total; i++){
        scanf("%d",&num);
        v.push_back(num);
        if(num==1)
        sum++;
    }

    int psum;
    for(i=0; i<total; i++){
        psum=sum;
        for(j=i; j<total; j++){
            if(v[j])
                psum-=1;
            else
                psum+=1;
            v2.push_back(psum);
        }
    }

    sort(v2.begin(),v2.end());
    int len = v2.size();
    printf("%d\n",v2[len-1]);
    return 0;
}