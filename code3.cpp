//  Transpose of 2D Array


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row=3,col=3;
    int arr[row][col]={{10,20,30},{99,88,77},{40,50,60}};

        cout<<"Before Exchange Row & Col : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i] != arr[j]){
                swap(arr[i][j],arr[j][i]);
            }
            else{
                break;
            }
        }
    }
    cout<<"After Row & Col : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }

}