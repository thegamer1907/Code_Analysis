#include <bits/stdc++.h>

using namespace std;

int main()
{
    int books,freetime,sum,output=0;
    cin>>books>>freetime;
    int i=0,j=0;
    vector<int> books_arr(books);

    for(int i=0;i<books;i++)
        cin>>books_arr[i];
    sum=books_arr[0];
    while(j!=books)
    {
        if(sum<=freetime)
        {
          output=max(output,j-i+1);
          j++;
          sum+=books_arr[j];
        }
        else
        {
            sum-=books_arr[i];
            i++;
            if(i==j)
            {
            j++;
            sum+=books_arr[j];
            }

        }
    }
    cout<<output;
    return 0;
}
