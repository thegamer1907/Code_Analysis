#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int m,n;
        char a[1002][502],b[1002][502];
        cin>>n>>m;
        for(int i=0;i<n;i++)
          cin>>a[i];
        for(int i=0;i<m;i++)
          cin>>b[i];

    for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                    if(strcmp(b[i],b[j])==0)m--;}
    }

    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                    if(strcmp(a[i],a[j])==0)n--;}
    }

    if(n>m) cout<<"YES"<<endl;
        else if(n==m)
        {
            int z=0,num=0;
            for(int i=0;i<n;i++)
            {
                z=0;
                for(int j=0;j<m;j++)
                  if(strcmp(a[i],b[j])==0)
                  {
                      z=1;break;
                  }
              if(z)  num++;
            }
          if(num%2)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
        }
        else
          cout<<"NO"<<endl;

    return 0;
}
