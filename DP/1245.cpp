#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total,num,i,j,c=1;
    scanf("%d",&total);
    vector < pair<int,int> > v;
    vector <int> v2;
    scanf("%d",&num);
    int chk = num;
    int t= total;

    for(i=1; i<total; i++){
        scanf("%d",&num);

        if(num==chk)
            c++;

        else{
            v.push_back(make_pair(chk,c));
            c=1;
            chk=num;
        }

    }


    v.push_back(make_pair(chk,c));
    total = v.size();
    int sum=0,psum;

    //for(i=0;i<total;i++)
      //  cout<<v[i].first<<"--"<<v[i].second<<endl;

    for(i=0;i<total;i++)
        if(v[i].first==1)
            sum+= v[i].second;
    
    if(t==sum){
        printf("%d\n",sum-1);
        return 0;
    }    
            
    for(i=0;i<total;i++){
        psum=sum;
        //cout<<"pos "<<i<<" : "<<endl;
        for(j=i;j<total;j++){

            if(v[j].first==1)
                psum-=v[j].second;
            else
                psum+=v[j].second;

            //cout<<psum<<endl;
            v2.push_back(psum);
        }
    }
    sort(v2.begin(),v2.end());
    int len = v2.size();
    printf("%d\n",v2[len-1]);
    return 0;
}
