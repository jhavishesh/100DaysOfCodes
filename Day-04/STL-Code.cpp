## Simple Container Pair

Syntax : pair (data_type1, data_type2) Pair_name;

int main()
{
    pair <int, char> p1;
   pair <string,double> p2 ("100DaysOfCode", 1.23);

    PAIR1.first = 100;
    PAIR1.second = 'G' ;

    cout << p1.first << " " ;
    cout << p1.second << endl ;
  
    cout << p2.first << " " ;
    cout << p2.second <<" " endl ;

    return 0;
}

/*Output:
100 G
100DaysOfCode  1.23 */

// Comparison between the Pair

int main()
{
    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);


    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;

    return 0;
}

/*Output:
0
1
0
1 */

  
## Vector 

/*Declaring vectors without size:
vector<data_type> vector_name;



Declaring vectors with size:
vector<data_type> vector_name(N);

Declaring vectors with size and initial value
vector<data_type> vector_name(N, val);


*/
int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
   //Method 1 : Traversal
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
//Method 2: Traversal
        for(int x:v)
        cout<<x<<" ";
        
        
    return 0;
}


## forward_list 


int main()
{

    // Declaring a forward list
    forward_list<int> l;

    // Assigning values to the list
    l.assign({ 10, 20, 30, 10 });

    // Removing elements from list
    l.remove(10);

    //Method 1: Displaying the forward_list
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";
      // Method 2: Displaying the forward_list
    for (int x : l)
        cout << x << " ";  
    return 0;
}
/* Output:
15 10 2 3 5 40 30 15 10 2 3 5 40 30   */

## list

/*  list<data_type> list_name;

Here, data_type denotes the type of data which we
want to store in our List or doubly linked list.  */

int main()
{
    // Create a List
    list<int> l;
    
    // Push two elements at back
    l.push_back(10);
    l.push_back(20); 
    l.push_back(10);
    l.push_back(40); 
    l.push_back(40);
    l.push_back(40); 
    
   
  
    
    // Push an element to front
    l.push_front(5);

     // Iterator pointing to first element
    auto itr = l.begin();
     // Erase element pointed by itr
    itr = l.erase(itr);
    

    // Remove all occurrences of 40
    l.remove(40);
    
    // Traverse and print elements
    for(auto x: l)
    {
        cout<<x<<" ";
    }
    
    return 0;
}

/* Output:
 10 20  */
