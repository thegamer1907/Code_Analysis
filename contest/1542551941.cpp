#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
bool searchh (string pat, string txt)
{
    int found=0;
    int M = pat.length();
    int N = txt.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;

        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
         found=1;
    }
    if(found==1)
        return true;
    else return false;
}
bool unlocksuccses (string a , string b , string unlock)
{
    string c=a+b;
    //cout<<c;
      return searchh(unlock,c);
}
/* Driver program to test above function */
int main()
{
    int n,found=0;
   string unloack, tested[100];
   cin>>unloack;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>tested[i];
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(unlocksuccses(tested[i],tested[j],unloack))
           {
               found=1;
                break;
           }
       }
   }
   if(found)
  cout<<"YES";
  else
    cout<<"NO";
   return 0;
}
