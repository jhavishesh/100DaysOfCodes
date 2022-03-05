// https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1/#

//Solution:


class Solution 
{
    public:
   bool isSafe(int grid[N][N],int num,int row,int col) 
    {   
        int rn=sqrt(N);//find the sub-grid length
        
        for(int x=0;x<N;x++)
        if(grid[row][x]==num || grid[x][col]==num) //given num is present in mat if yes then return false
        return false;

        int sx = (row/rn)*3; //starting row-index of sub-grid
        int sy = (col/rn)*3; //ending col-index of sub-grid
        
        for(int x=sx;x<sx+rn;x++) 
        {
            for(int y=sy;y<sy+rn;y++)
            if(grid[x][y]==num)  // if num is present in sub-grid then return false
            return false;
        }
        
        return true;  //if num is not present return true
    }
    
    bool helper(int grid[N][N],int row,int col ) 
    { 
        if(row==N)  //Base Case-01
        return true;  //just printing the matrix
        
        if(col==N)   //Base Case Row End move to next row
        return helper(grid,row+1,0);

        if(grid[row][col]!=0)   //if cell has number move to next cell
        return helper(grid,row,col+1);
        
        
        for(int num=1;num<=N;num++) 
        {
            if(isSafe(grid,num,row,col))
            {   
                //Assume 
                grid[row][col] = num;
                if(helper(grid,row,col+1)) //check whether num solved the sudoku or not
                return true;
            }
        }
        grid[row][col] = 0;  //Backtracking for the next num if prev num has not solved the sudoku
        return false;
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        return helper(grid,0,0);  //return the helper function
    }
    
    void printGrid (int grid[N][N]) //Printing the grid
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            cout<<grid[i][j]<<" ";
        }
    }
};
