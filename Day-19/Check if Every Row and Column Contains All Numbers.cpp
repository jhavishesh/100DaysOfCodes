/* https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/ */

//Naive Sol:(548ms)

bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();    //size of matrix
        
        for(int i=0;i<n;i++)
        {   
            set<int> s;  //set to store row 
            for(int j=0;j<n;j++)
            {

            s.insert(matrix[i][j]);//insert row in set
            }
        if(s.size()<n) //if size is less than row 
            return false;
        }
        
       for(int j=0;j<n;j++)
        {   
            set<int> s;    //set to store col
            for(int i=0;i<n;i++)
            {

            s.insert(matrix[i][j]); //insert colmn in set
            
        }
        if(s.size()<n)  //if size is less than col
            return false;
    }
    return true;
    }


//Optimal Solution:(100ms)

 bool checkValid(vector<vector<int>>& matrix) {
    
    int n = matrix.size();
    for (int i = 0; i <n; i++) {
        bitset<101> row, col;  //bitset to store elements of rows & column
        for (int j = 0; j < n; j++)
            row[matrix[i][j]] = col[matrix[j][i]] = true;  //check value of row & columns 
        if (min(row.count(), col.count()) < n)  //check size is less than matrix's size
            return false;
    }
    return true;   
    }
