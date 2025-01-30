// Largest Element in 2D Array !

#include <bits/stdc++.h>
using namespace std;

int main(){
    int row=3,col=3;
    int arr[row][col]={{11,22,33},
                {23,65,89},
                {55,66,99}};

    int max = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    cout<<"Largest Element is : "<<max;
}