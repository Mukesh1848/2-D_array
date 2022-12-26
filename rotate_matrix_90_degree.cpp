// solution first 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
       int n = matrix.size();
     
    //  reverse matrix 
      reverse(matrix.begin(),matrix.end());

     // transpose of a matrix --- swap element espect diagonals  

     for(int i=0;i<n;i++){
         for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);
         }
     }
    }
};


// 2nd solution 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
       int n = matrix.size();

     // transpose of a matrix --- swap element espect diagonals  

     for(int i=0;i<n;i++){
         for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);
         }
     }
      
       // ( swap ending column to starting column)
      
       for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
};
