#include <iostream>
using namespace std;
 
void print(vector<vector<int>> matrix){
    for (int i = 0 ; i<matrix.size(); i++){
        for (int j = 0 ; j< matrix[0].size() ; j++){
            cout<<matrix[i][j]<<" ";   
        }
        cout<<endl;
    }
}

void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();
    for (int i = 0; i<=n-2 ; i++){
        for (int j = i+1 ; j<=n-1 ; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for (int row = 0 ; row< n ; row++){
        for (int col = 0 ; col<n/2 ; col++){
            swap(matrix[row][col],matrix[row][n-col-1]);
        }
    }
}


int main() {


 
    vector<vector<int>> matrix={{1,2,3},
                                {4,5,6},
                                {7,8,9}};
                                

    print(matrix);
    rotate(matrix);
    cout<<endl;
    print(matrix);


    return 0;
}