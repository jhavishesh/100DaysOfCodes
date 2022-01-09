/* https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/ */

//Naive Sol:

bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {   
            set<int> s;
            for(int j=0;j<n;j++)
            {

            s.insert(matrix[i][j]);
            }
        if(s.size()<n)
            return false;
        }
        
       for(int j=0;j<n;j++)
        {   
            set<int> s;
            for(int i=0;i<n;i++)
            {

            s.insert(matrix[i][j]);
            
        }
        if(s.size()<n)
            return false;
    }
    return true;
    }


//Optimal Solution:

 bool checkValid(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i <n; i++) {
        bitset<101> row, col;
        for (int j = 0; j < n; j++)
            row[matrix[i][j]] = col[matrix[j][i]] = true;
        if (min(row.count(), col.count()) < n)
            return false;
    }
    return true;   
    }
