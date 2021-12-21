//Find the maximum and minimum element in an array

//

#include<bits/stdc++.h>
using namespace std;

int great(int arr[],int n)
{
    
    int lar=arr[0];
    
    for(int i=0;i<n;i++)
    {
          if(arr[i]>lar)
          {
              lar=arr[i];
          }
          
    }
  
  return lar;
}

int  main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  
  cout<<great(arr,n);

  return 0;

}
