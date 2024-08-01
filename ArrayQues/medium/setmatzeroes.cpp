#include <iostream>
using namespace std;
 
void print(vector<vector<int>> matrix){
    for (int i = 0 ; i<matrix.size(); i++){
        for (int j = 0 ; j< matrix[0].size() ; j++){
            cout<<matrix[i][j]<<"        ";   
        }
        cout<<endl;
    }
}

void  markzeroesbrute(vector<vector<int>> &matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<bool>rowz(rows,false);
    vector<bool>colz(cols,false);
    for (int i = 0 ; i<matrix.size(); i++){
        for (int j = 0 ; j< matrix[0].size() ; j++){
            if (matrix[i][j]==0){
                rowz[i]=true;
                colz[i]=true;
            }
        }
    } 
    for (int i =0 ; i< rows ; i++){
        if (rowz[i]==true){
            for (int k = 0 ; k< cols ; k++){
                matrix[i][k]=0;
            }
        }
    }
    for (int i =0 ; i< cols ; i++){
        if (colz[i]==true){
            for (int k = 0 ; k< rows ; k++){
                matrix[k][i]=0;
            }
        }
    }
    cout<<endl;
}

void  markzeroesoptimal(vector<vector<int>> &matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int col0 = 1;
    for (int i = 0 ; i< rows ; i++){
        for (int j =0  ;j < cols ; j++){
            if (matrix[i][j]==0){
                matrix[i][0]=0;
                if (j!=0) matrix[0][j]=0;
                else col0=0;
            }
        }
    }
    for (int i = 1; i< rows ; i++){
        for (int j = 1 ; j<cols ;  j++){
            if (matrix[i][j]!=0){
                if (matrix[0][j]==0 || matrix[i][0]==0){
                matrix[i][j]=0;
            }
            }
            
        }
    }
    if (col0==0){
        for (int i = 0 ; i< rows ; i++){
            matrix[i][0]=0;
        }
    }
    if (matrix[0][0]==0){
        for (int j = 0 ; j< cols ; j++){
            matrix[0][j]=0;
        }
    }
}

int main() {
 
    vector<vector<int>> matrix={{1,2,3,4},
                                {5,0,7,8},
                                {0,10,11,12},
                                {13,14,15,0}};
    print(matrix);
    markzeroesoptimal(matrix);
    cout<<endl;
    print(matrix);

    return 0;
}