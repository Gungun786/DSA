class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       unordered_set<int> rowSet;
       unordered_set<int> colSet; 
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                rowSet.insert(i);
                colSet.insert(j);
            }
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rowSet.count(i)){
                matrix[i][j]=0;
            }
            if(colSet.count(j)){
                matrix[i][j]=0;
            }
        }
       }
       
        
    }
};