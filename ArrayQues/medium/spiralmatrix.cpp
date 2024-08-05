#include <iostream>
using namespace std;
void print(vector<vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j] << " ";
        }
        cout<< endl;
    }
}

void printvec(vector<int> ans){
    for (int i = 0 ; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

vector<int> spiral(vector<vector<int>> matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int left = 0, top = 0, right = cols - 1, bottom = rows - 1;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    print(matrix);
    vector<int> ans = spiral(matrix);
    printvec(ans);

    return 0;
}
