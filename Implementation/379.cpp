/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: safaa
 *
 * Created on November 7, 2018, 5:52 PM
 */

#include <iostream>
#include <algorithm>
#include<vector>
#include <set>
using namespace std;

/*
 * 
 */
int main() {
    int n,k;
    cin>>n>>k;
    int arr[55];
    int c=0;
    for (int i=1;i<=n;i++)
    
    { cin>>arr[i];}
    for (int i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k] and arr[i]>0)
            c++;
    
    }
        
        cout<<c;          
        
    
    
    
    return 0;
}

