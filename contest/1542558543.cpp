#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float t1,t2;
    float arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    arr[2] /=5;
    arr[1] /=5;
    arr[1] += arr[2] /60;
    arr[0] += arr[1] /60;

    t1=arr[3];t2=arr[4];
       sort(arr,(arr+5));
      /* for(int i=0;i<5;i++)
        cout<<arr[i]<<' ';*/
        if((t1==arr[0] && t2==arr[4])||(t1==arr[4] && t2==arr[0]))
       {
           cout<<"YES";
           exit(0);
       }
        for(int i=0;i<5;i++)
        {
            if(t1==arr[i])
            {
                if(t2==arr[i+1] || t2==arr[i-1])
                    {cout<<"YES";exit(0);}

            }

        }
        cout<<"NO";

    return 0;

}
