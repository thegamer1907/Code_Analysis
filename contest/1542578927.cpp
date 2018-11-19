#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
string s[100005],str[10]= {"0001","0010","0011","0100","0101","0110","0111"};
map<string,int>mp;
int main()
{
    int n,k,x;
    while(~scanf("%d%d",&n,&k))
    {
        mp.clear();
        for(int i = 0; i<n; i++)
        {
            s[i]="";
            for(int j = 0; j<k; j++)
            {
                scanf("%d",&x);
                if(x)s[i]+="1";
                else s[i]+="0";
            }
            mp[s[i]]++;
        }
        int flag = 0;
        if(k==4)
        {
            if(mp["0000"])flag = 1;
            for(int i = 0; i<7; i++)
            {
                if(flag)break;
                if(!mp[str[i]])continue;
                if(i==0)
                {
                    if(mp["0010"]||mp["0100"]||mp["0110"]||mp["1000"]||mp["1010"]||mp["1100"]||mp["1110"])
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==1)
                {
                    if(mp["0100"]||mp["0101"]||mp["1000"]||mp["1001"]||mp["1100"]||mp["1101"])
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==2)
                {
                    if(mp["0100"]||mp["1000"]||mp["1100"])
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==3)
                {
                    if(mp["1001"]||mp["1000"]||mp["1010"]||mp["1011"])
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==4)
                {
                    if(mp["1000"]||mp["1010"])
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==5)
                {
                    if(mp["1000"]||mp["1001"])
                    {
                        flag = 1;
                        break;
                    }
                }
                else if(i==6)
                {
                    if(mp["1000"])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        else if(k==3){

            if(mp["000"])flag = 1;
            else {
                if(mp["001"]&&(mp["010"]||mp["100"]||mp["110"]))flag = 1;
                else if(mp["010"]&&(mp["100"]||mp["101"]))flag = 1;
                else if(mp["011"]&&mp["100"])flag = 1;
            }
        }
        else if(k==2){
            if(mp["00"])flag = 1;
            else if(mp["01"]&&mp["10"])flag = 1;
        }
        else if(k==1){
            if(mp["0"])flag = 1;
        }
        if(flag)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}