#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
int n,k;

cin>>n>>k;

int tab[n];

for (int i=0;i<n;i++)
{
  cout<<" ";
    cin>> tab[i];
}

int s=0;

for (int i=0;i<n;i++)
{

    if ((tab[i]>0)&& (tab[i]>=tab[k-1])) s+=1;

}
cout<<s<<endl;

    return 0;
}