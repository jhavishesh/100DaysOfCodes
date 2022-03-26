# https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7021


for x in range(int(input())):
    print("Case #", end="")
    print(x+1, end="")
    print(": ", end="")
    s1 = input()
    s2 = input()
 # This code is developed by Vishesh JHa 
 
 
 
   
    m = len(s1)   
    n = len(s2)
    i = 0
    j = 0
    cnt = 0
    while(j < n and i < m):
        if(s1[i] == s2[j]):
            i+=1
        else:
            cnt+=1;
        j+=1
    if(i == m):
        print(cnt + n-j)
    else:
        print("IMPOSSIBLE")
        
