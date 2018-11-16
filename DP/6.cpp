#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, arr[5000], brr[5000], m, n, cnt = 0;
    memset(arr,0,sizeof(arr));
    memset(brr,0,sizeof(brr));
    cin >> n;
    for (int i = 0; i <n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    sort(arr, arr+n);
    sort(brr, brr+m);
    //for (int i = 0; i <n; i++) cout << arr[i] << " ";
    //cout << endl;
    //for (int i = 0; i <n; i++) cout << brr[i] << " ";
    //cout << endl;
     int a =m+n;
    for (int i = 0, j = 0, k= 0; i<a; i++) {

            if(arr[j] == brr[k]){
               // cout << " 1 " << arr[j] << " " << brr[k] << endl;
            cnt++;
            j++;
            k++;
            i++;
            } else if(abs(arr[j] - brr[k]) < 2) {
           //     cout << " 2 " << arr[j] << " " << brr[k] << endl;
                cnt++;
                j++;
                k++;
                i++;
            } else {
         //           cout << " 3 " << arr[j] << " " << brr[k] << endl;

                    if(arr[j] > brr[k]) {
                        k++;
                    } else{
                        j++;
                    }


            }



    }

    cout << cnt << endl;


    return 0;
}
