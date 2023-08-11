//! Set Matrix Zero
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    //! STEP 1: Find the zero from the matrix

    int col0 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0)
                    matrix[0][j] = 0;
                else    
                    col0 = 0;
            }

        }
    }

    //! STEP 2: set the row and col to 0 if non zero is found
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(matrix[i][j] != 0){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //! STEP 3: 
    //! 1) check if matrix[0][0] = 0 then set the whole 0th row to 0
    //! 2) Check if col0 = 0 then set the whole 0th col to 0
    if(matrix[0][0] == 0){
        for(int j=0; j<m; j++){
            matrix[0][j] = 0;
        }
    }

    if(col0 == 0){
        for(int i=0; i<n; i++){
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main(){
    int n = 3;
    int m = 3;
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}

//! TC: O(2*(N*M))  SC: O(1)