#include <iostream>
using namespace std;

int main(){
    int row=3,col=3;
    int arr[row][col]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;
    }
  
// cout<<"After Solve : "<<endl;

    int indexRow;
    cout<<"Enter Row Index : ";
    cin>>indexRow;

    if(indexRow>=0 && indexRow<row){
        int rowcount = 0;

        for(int j=0; j<col; j++){
            rowcount += arr[indexRow][j];
        }

        cout<<"Row Count : "<<rowcount<<endl;
    }
    else{
        cout<<"Invalid Row!"<<endl;
    }

    int indexCol;
    cout<<"Enter Col index : ";
    cin>>indexCol;

    if(indexCol>=0 && indexCol<col){
        int colcount = 0;

        for(int i=0; i<col; i++){
            colcount += arr[i][indexCol];
        }

        cout<<"Count Col : "<<colcount<<endl;
    }
    else{
        cout<<"Invalid Col!"<<endl;
    }
}