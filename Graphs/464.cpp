#include<bits/stdc++.h>


using namespace std;
int main()
{
    int n,t;
    string student;
    cin>>n>>t;
    cin>>student;
    while(t>0)
    {
      for(int i=0;i<n;)
      {
        if(student[i]=='B' && student[i+1]=='G')
        {
          int temp=student[i];
          student[i]=student[i+1];
          student[i+1]=temp;
          i+=2;

        }
        else
        i++;

      }




    t--;
    }
    cout<<student<<endl;







    return 0;
}

