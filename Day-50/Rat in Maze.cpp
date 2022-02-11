/* https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1 */

//This solution is tested and run only on code editor it will get accepted on gfg version

//Solution:

#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[10][10],int bt[10][10],int i,int j,int m ,int n)
{ 
  
  if(i==m && j==n) //check whether we reach to destinatination
  { 
    bt[i][j]=1;   //set value 1 to the path followed
    //print the path
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        cout<<bt[i][j]<<" ";
        cout<<endl;
    }
      cout<<endl;
    return true;
    ctr++;
  
  
  }
  
  //rat should be inside the grid

  if(i>m || j>n)
  {
    return false;
  }
  
  if(maze[i][j]=='X')
  {
    return false;
  }
    //assume the solution exist through current cell
      
      bt[i][j]=1;

      bool rightSuccess =ratInMaze(maze,bt,i,j+1,m,n);
      bool downSuccess =ratInMaze(maze,bt,i+1,j,m,n);


      //the path followed to reach destinatination when we come back we set the cell's value to 0 i.e. Backtracking 
      bt[i][j]=0;

      if(rightSuccess||downSuccess)
      {
        return true;
      }
      return false;
    

}

int main()
{
    char maze[10][10]= { "0000",
                          "00X0",
                          "000X",
                          "0X00",
    };

  int bt[10][10]={0};
  int m=4,n=4;

  bool ans = ratInMaze(maze,bt,0,0,m-1,n-1);

  

  if(ans==false)
    cout<<"There is no Path"<<endl;



  return 0;
}
