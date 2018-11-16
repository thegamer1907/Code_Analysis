#include <iostream>
using namespace std;

bool isValid(int arr[100][3] , int n , int indx){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=arr[i][indx];
    }
    if(sum == 0)
        return 1;
    else
        return 0;
}

int main()
{
    bool valid0 , valid1 , valid2;
    int n , vec[100][3];
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin >> vec[i][j];

    valid0 = isValid(vec , n , 0);
    valid1 = isValid(vec , n , 1);
    valid2 = isValid(vec , n , 2);

    if(valid0&&valid1&&valid2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
