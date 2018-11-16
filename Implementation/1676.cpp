
 #include <iostream>
  #include <string>
using namespace std;
int a,b,c;
int mas[100];
char zam;
string s;
int main()
{
    cin>>s;
    a=0;
    b=0;
    zam=s[0];
    for(int i=0;i<s.size();++i)
    {

        if(s[i]==zam)
        {
            a++;

        }
        else
        {
            mas[b]=a;
            a = 0;
            b++;
            zam=s[i];
            a++;
        }
    }
    mas[b] = a;
    ++b;
    c=mas[0];
    for(int i=0;i<b;++i)
    {

        if(mas[i]>c)
        {
            c=mas[i];

        }
    }
    if(c>=7)   {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}