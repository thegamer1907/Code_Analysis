#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0;i<n;i++) {
        cin >> ara[i];
    }

    int max = 0;
    int zeroCount, oneCount, totalCount;
    for(int i = 0;i<n;i++) {
        for(int j = i;j<n;j++) {
            zeroCount = 0;
            oneCount = 0;
            for(int k = i;k<=j;k++){
                if(ara[k] == 0)
                    zeroCount++;
            }
            for(int k = j + 1;k<n;k++)
                if(ara[k] == 1)
                    oneCount++;
            for(int k = 0;k<i;k++){
                if(ara[k] == 1)
                    oneCount++;
            }
            totalCount = zeroCount + oneCount;
            if(max < totalCount)
                max = totalCount;


            //cout << totalCount << " ";
        }
        //cout << endl;
    }
    cout << max << endl;
}





















