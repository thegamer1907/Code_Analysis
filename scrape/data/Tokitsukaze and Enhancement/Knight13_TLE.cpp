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
    int m,n,k;
     char temp;
    cin>>n;
    if(check(n)=='A')
        cout<<"0 "<<check(n);
    else
    {
        m=n;
        k=0;
        m++;
        temp=check(m);
        while(temp!=check(n))
        {
            if(temp<check(n)){
                n++;k++;}
            m++;
        }
         temp=check(n);
    cout<<k<<" "<<temp;
    }

}