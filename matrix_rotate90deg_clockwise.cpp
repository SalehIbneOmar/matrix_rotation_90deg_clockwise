#include <iostream>
using namespace std;

int main(){

    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int newMatrix[3][3];
    int rotate90[3][3];

    cout<<"Initial Matrix:"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout <<matrix[i][j]<<" ";
        }
        cout <<endl;
    }

    //New matrix (reverse) loop
    for(int i=0; i<3; i++){
        int k = 0;
        for(int j=2; j>=0; j--){
            newMatrix[i][k] = matrix[i][j];
            k++;
        }
    }

    //90deg Rotation loop
    cout <<endl;
    cout<<"Rotated 90 deg:"<<endl;
    for(int i=2; i>=0; i--){
        for(int j=2; j>=0; j--){
            rotate90[i][j] = newMatrix[j][i];
            cout <<rotate90[i][j]<<" ";
        }
        cout <<endl;

    }

return 0;

}
