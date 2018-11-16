# include<iostream>
# include<string>
using namespace std;
int main ()
{
    string anis;
    int m=0,v,k,n;
    int temp;
    string anis2[1000];
    cin>>k>>n;
    cin>>anis;
     v=anis.size();
     while(n--)
     {


    for(int i=-1;i<v;)
    {
        if(m==1)
        {
            i=i+2;
            m=0;
        }
        else
        {
            i++;
        }
        anis2[i]=anis[i];
        if(anis[i]=='B')
        {

            for(int j=i+1;j<i+2;j++)
            {
                if(anis[j]=='G')
                {
                    temp =anis[i];
                    anis[i]=anis[j];
                    anis[j]=temp;
                    anis2[i]=anis[i];
                    anis2[j]=anis[j];
                    m++;

                }
            }
        }
    }
     }
    for(int i=0;i<v;i++)
    {

        cout<<anis2[i];
    }

}
