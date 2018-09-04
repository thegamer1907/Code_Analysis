#include<bits/stdc++.h>
using namespace std;

int lps[1000005];
int mps[1000005];

void computeLPSArray(string pat, int M)
{

    int len = 0, i = 1;

    lps[0] = 0;

    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}


int KMPSearch(string txt, string pat)
{
    int M = pat.size();
    int N = txt.size();
    int res = 0;

    computeLPSArray(pat, M);

    int i = 0, j = 0;

    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            //   printf("Found pattern at index %d \n", i-j);
            ++res;
            j = lps[j-1];
        }

        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0) j = lps[j-1];

            else i = i+1;
        }
    }

    return res;
}

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie();

    string s;

    cin>>s;

    computeLPSArray(s, s.size());

    int sz = s.size();

    for(int i = 0; i<sz; i++) mps[i] = lps[i];

  //  for(int i = 0; i<sz; i++) cout<<lps[i]<<" ";



    string res = "Just a legend";

    int en = sz-1;

    while(mps[en] != 0)
    {

        string ss = s.substr(0, mps[en]);
    //    cout<<ss<<endl;


        if(KMPSearch(s, ss)>=3)
        {
            cout<<ss<<endl;
            return 0;
        }

        en = mps[en-1];

    }


    cout<<res<<endl;
    return 0;
}
