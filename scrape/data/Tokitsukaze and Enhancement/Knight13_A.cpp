#include<iostream>
using namespace std;
char check(int n)
{
    if(n%4==1)
        return 'A';
    else if(n%4==3)
        return 'B';
    else if(n%4==2)
        return 'C';
    else if(n%4==0)
        return 'D';
}
int main()
{
    int m,n,k=0;
     char temp;
    cin>>n;
    if(check(n)=='A')
        cout<<"0 "<<check(n);
    else
    {
       temp=check(n);
       for(int i=1; i<3; i++)
       {
           n=n+1;
           if(temp>check(n))
            {
                temp=check(n);
                k=i;
            }
       }
        cout<<k<<" "<<temp;
    }

}