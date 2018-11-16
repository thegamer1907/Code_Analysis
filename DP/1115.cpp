#include <iostream>

using namespace std;

int maxim(int* p,int n,int o,int l)
{   int m=0; int i;
    for(i=0;i<n;i++){
        if(p[i]==1 && (i<o || i>l)){m++;}
    }
    for(i=o;i<=l;i++)
    {
        if(p[i]==0){m++;}
    }
    return m;
}

int main()
{
    int n=0,j=2,i;
    while(n<1 || n>100)
    {
        cin>>n;
    }

    int* p; p=new int[n];

    for (i=0;i<n;i++){
          while(j>1 || j<0)
           {
                //cout<<i;
                cin>>j;
                p[i]=j;
           }
                j=2;
    }

    int m=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
           if (maxim(p,n,i,j)>m){m=maxim(p,n,i,j);}
            //cout<<i<<j<<endl<<maxim(p,n,i,j)<<endl;
        }
    }
        cout<<m;




    /*cout<<endl;

    for (int i=0;i<n;i++){
        cout<<p[i];
    }*/

    delete[] p;


}
