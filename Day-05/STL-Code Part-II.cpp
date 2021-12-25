## Dequeue

/* Syntax
deque<Type of Elements> deque_name;  */
                                     

int main()
{
    // Creates an empty Deque
    deque<int> dq;

    // Push element at back
    dq.push_back(10);

    // Push element at front
    dq.push_front(20);

    // The Deque is: 20 10

    // Access front and back elements
    // of the Deque
    cout << "dq.front() : " << dq.front();
    cout << "\ndq.back() : " << dq.back();

    return 0;
}

/*Output:
dq.front() : 20
dq.back() : 10    
  
  
 Traversing the Deque using
   foreach loop  */
    for (auto x : dq)
        cout << x << " ";



## Set

/* Syntax:
set<Type of Data> set_name; */



int main() 
{ 

    set<int> s; 

    // Function to insert elements 
    // in the set container 
    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(6); 

    cout << "The set elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 

    // when 2 is present 
    auto it = s.lower_bound(2); 
    cout << "\nThe lower bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 3 is not present 
    // points to next greater after 3 
    it = s.lower_bound(3); 
    cout << "The lower bound of key 3 is "; 
    cout << (*it) << endl; 

    // when 8 exceeds the max element in set 
    it = s.lower_bound(8); 
    cout << "The lower bound of key 8 is "; 
    cout << (*it) << endl; 

    return 0; 
} 


/*  Output:
The set elements are: 1 2 4 5 6 
The lower bound of key 2 is 2
The lower bound of key 3 is 4
The lower bound of key 8 is 5   */
  
  
  
  ## Multiset
  
  int main() 
{ 

    multiset<int> s; 

    // Function to insert elements 
    // in the multiset container 
    s.insert(1); 
    s.insert(3); 
    s.insert(3); 
    s.insert(5); 
    s.insert(4); 

    cout << "The multiset elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 

    // when 3 is present 
    auto it = s.upper_bound(3); 
    cout << "\nThe upper bound of key 3 is "; 
    cout << (*it) << endl; 

    // when 2 is not present 
    // points to next greater after 2 
    it = s.upper_bound(2); 
    cout << "The upper bound of key 2 is "; 
    cout << (*it) << endl; 

    // when 10 exceeds the max element in multiset 
    it = s.upper_bound(10); 
    cout << "The upper bound of key 10 is "; 
    cout << (*it) << endl; 

    return 0; 
} 

 /* Output:
The multiset elements are: 1 3 3 4 5 
The upper bound of key 3 is 4
The upper bound of key 2 is 3
The upper bound of key 10 is 5    */


## Dequeue 

 /*Syntax:
deque<Type of Elements> deque_name;  */

int main()
{
    // Creates an empty Deque
    deque<int> dq;

    // Push element at back
    dq.push_back(10);

    // Push element at front
    dq.push_front(20);

    // The Deque is: 20 10

    // Access front and back elements
    // of the Deque
    cout << "dq.front() : " << dq.front();
    cout << "\ndq.back() : " << dq.back();

    return 0;
}


// Traversing the Deque using
    // foreach loop
    cout << "Deque : ";
    for (auto x : dq)
        cout << x << " ";


## Set

/* Syntax:
set<Type of Data> set_name;  */

int main() 
{ 

    set<int> s; 

    // Function to insert elements 
    // in the set container 
    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(6); 

    cout << "The set elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 

    return 0; 
} 

## Multiset

int main() 
{ 

    multiset<int> s; 

    // Function to insert elements 
    // in the multiset container 
    s.insert(1); 
    s.insert(3); 
    s.insert(3); 
    s.insert(5); 
    s.insert(4); 

    cout << "The multiset elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 


    return 0; 
} 


## Map

/*  
Creating a map: A map in C++ can be created using below syntax.
map<Type key, Type value> map_name;

Here, the key type and value type can be any valid 
combination of data types available.
It can be:
int, int
string, string
int, string
string, int
or, anything else.
                          */


int main()
{
    // empty map container
    map<int, int> m;

    // Insert elements using insert() function
    m.insert({ 10, 100 });
    m.insert({ 30, 300 });

    // Inserting using "[]" operator
    m[20] = 200;

    // Donot provide any value with key 40
    // The operator access the key and since
    // it doesnot exists, it will insert defaut
    // value of int
    m[40];

    // Traverseing map
    cout << "The map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl; 
  
  
    return 0;
}


## Multimap


int main()
{
    multimap<int, int> mp;
    
    mp.insert({10,20});
    mp.insert({5, 50});
    mp.insert({10,25});
    
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
        
    return 0;
}


## unordered_set

int main()
{
    unordered_set<int> s;
    
    // Inserting elements using 
    // insert() function
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
  
   // Displaying the set
    for (
        auto it = s.begin();
        it != s.end(); it++) {
        cout << *it << " ";
      
      return 0;
      
    }
 
  ## unordered_map
  
  int main()
{
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of double type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;

}



