// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e73ea


#include <bits/stdc++.h>
using namespace std;

bool helper(long long int n)
{

  long long int temp = n;


  long long int sum = 0,pro=1;
  while (n) {
    int digit = n % 10;
    sum += digit;
    pro*=digit;
    n /= 10;
  }

  n = temp;

if(pro%sum==0)
  return true;
  else
  return false;
}

int main()
{   int T,j=1;
    cin>>T;
    while(T!=0)
    {
  long long int n ,m,ctr=0;
  cin>>n>>m;
    for(long long int i=n;i<=m;i++)
    {
        if(helper(i))
            ctr++;
    }
    cout<<"Case #"<<j++<<": "<<ctr<<endl;
    T--;
        
    }
  return 0;
}
