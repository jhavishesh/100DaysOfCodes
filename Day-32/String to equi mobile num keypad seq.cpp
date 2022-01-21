/* https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1#  */


//Naive SOlution:

string printSequence(string S)
{
     vector <string> res;
    for(int i=0;i<S.length();i++){
        
        if(S[i]=='A')
            res.push_back("2");
        if(S[i]=='B')
            res.push_back("22");
        if(S[i]=='C')
            res.push_back("222");
        
        if(S[i]=='D')
            res.push_back("3");
        if(S[i]=='E')
            res.push_back("33");
        if(S[i]=='F')
            res.push_back("333");
            
        if(S[i]=='G')
            res.push_back("4");
        if(S[i]=='H')
            res.push_back("44");
        if(S[i]=='I')
            res.push_back("444");
        
        if(S[i]=='J')
            res.push_back("5");
        if(S[i]=='K')
            res.push_back("55");
        if(S[i]=='L')
            res.push_back("555");
            
        if(S[i]=='M')
            res.push_back("6");
        if(S[i]=='N')
            res.push_back("66");
        if(S[i]=='O')
            res.push_back("666");
        
        if(S[i]=='P')
            res.push_back("7");
        if(S[i]=='Q')
            res.push_back("77");
        if(S[i]=='R')
            res.push_back("777");
        if(S[i]=='S')
            res.push_back("7777");
        
        if(S[i]=='T')
            res.push_back("8");
        if(S[i]=='U')
            res.push_back("88");
        if(S[i]=='V')
            res.push_back("888");
        
        if(S[i]=='W')
            res.push_back("9");
        if(S[i]=='X')
            res.push_back("99");
        if(S[i]=='Y')
            res.push_back("999");
        if(S[i]=='Z')
            res.push_back("9999");
        
        if(isspace(S[i]))
          res.push_back("0");
    
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i];

}


//Optimal Sol:

string printSequence(string S)
{
   string res;
   int n = S.size();

   unordered_map<char, string> mp;
   mp['A'] =  "2";
   mp['B'] =  "22";
   mp['C'] =  "222";
   mp['D'] =  "3";
   mp['E'] =  "33";
   mp['F'] =  "333";
   mp['G'] =  "4";
   mp['H'] =  "44";
   mp['I'] =  "444";
   mp['J'] =  "5";
   mp['K'] =  "55";
   mp['L'] =  "555";
   mp['M'] =  "6";
   mp['N'] =  "66";
   mp['O'] =  "666";
   mp['P'] =  "7";
   mp['Q'] =  "77";
   mp['R'] =  "777";
   mp['S'] =  "7777";
   mp['T'] =  "8";
   mp['U'] =  "88";
   mp['V'] =  "888";
   mp['W'] =  "9";
   mp['X'] =  "99";
   mp['Y'] =  "999";
   mp['Z'] =  "9999";
   mp[' '] = "0";
      
   for(int i = 0; i < n; i++){
       res += mp[S[i]];
   }
   
   return res;
}



