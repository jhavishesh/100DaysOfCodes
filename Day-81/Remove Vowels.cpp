//https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118626/offering/1377977

//Solution:

string removeVowels(string inputString) {
    
    string s;
    for(int i=0;i<inputString.length();i++)
    {
          if(inputString[i]!='a' && inputString[i]!='u' && inputString[i]!='e' && inputString[i]!='i' && inputString[i]!='o' && inputString[i]!='A' && inputString[i]!='E' && inputString[i]!='I' && inputString[i]!='O' && inputString[i]!='U')
            s+=inputString[i];
    }
    return s;
}
