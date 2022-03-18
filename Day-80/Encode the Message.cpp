//https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118626/offering/1377976


//Solution:

string encode(string &message)
{	
    
    int n=message.length();
    string res;
    for(int i=0;i<n;i++)
    {	int ctr(1);
        while(i<n-1 && message[i]==message[i+1])
        {
            ctr++;
        	i++;
        }        
    
    res+=message[i];
    res+=to_string(ctr);
    }
    return res;
}
