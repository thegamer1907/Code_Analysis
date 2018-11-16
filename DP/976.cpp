#include <iostream>
#include<string>
using namespace std;

int main()
{
    unsigned int n , cnt_one=0 , cnt_zero=0, total_one=0, total_zero=0;//, large_one, large_zero;
    cin>>n;
    unsigned int arr[n][n], input[n], max_one=0;

    for(int i=0;i<n;i++){
        cin>>input[i];
        input[i]==1 ? ++total_one : ++total_zero;
    }
    //cout<<total_one<<endl<<total_zero<<endl;

    /*if((total_one+1)>=(total_zero-1))
        large_one=total_one+1;
    else
        large_one=total_zero-1;

    if((total_one-1)>=(total_zero+1))
        large_zero=total_one-1;
    else
        large_zero=total_zero+1;*/

    for(int i=0;i<n;i++){
        if(input[i]==1)
            arr[i][i] = total_one-1;
        else
            arr[i][i] = total_one+1;
    }

    for(int i = 0;i<n;i++){
            cnt_one = cnt_zero = 0;
            input[i]==1 ? ++cnt_one: ++cnt_zero;
            if(arr[i][i]>max_one)
                max_one=arr[i][i];
        for(int j=i+1;j<n;j++){
                input[j]==1 ? ++cnt_one: ++cnt_zero;
                arr[i][j]=total_one+cnt_zero-cnt_one;

                if(arr[i][j]>max_one)
                    max_one=arr[i][j];
        }
    }
    cout<<max_one;
    return 0;
}
