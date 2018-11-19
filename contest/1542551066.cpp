#include <iostream>
#include <bitset>
#include <map>
#include <utility>

int main()
{
int n,k;

std::cin>>n>>k;

std::map<int,bool> v;
int zc=0;
for (int i=0;i<n;i++)
    {
    int q=0;
    for (int j=0;j<k;j++)
        {
        int temp;
        std::cin>>temp;
        q=(q<<1)|temp;
        }
    if (q==0) zc++;
    if (v.find(q)==v.end()) v.insert(std::make_pair(q,true));
    }
bool ret=false;
for (int i=0;i<16;i++)
    {
    for (int j=0;j<i;j++)
        {
        if ((v.find(i)!=v.end())&&(v.find(j)!=v.end()))
            {
            std::bitset<4> a(i),b(j);
            if (k==1) k=2;
            if ((a.count()<=(k>>1))||(b.count()<=(k>>1)))
                {
                if ((i&j)==0) ret=true;
                }
            }
        if (ret==true) break;
        }
    if (ret==true) break;
    }
if(zc>=2) ret=true;
if (n==zc) ret=true;
if (ret==true)
    {
    std::cout<<"YES"<<std::endl;
    }
else
    {
    std::cout<<"NO"<<std::endl;
    }
}
