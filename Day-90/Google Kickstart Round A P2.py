# https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7997


for j in range(int(input())):
    x=int(input())
    
    def helper(n):
     
        if (x == 0):
            return 0
        if (x % 9 == 0):
            return 9
        else:
           return (x % 9)
    
    y=9-helper(x)
    s=str(x)
    ans=s+str(y)
    for i in range( 0 , len(s)):
        temp=s[0:i]+str(y)+s[i:len(s)]
        if(temp[0] == '0'):
            continue
        res=min(temp,res)
 
    print("Case #",j+1,": ",res, sep="")

