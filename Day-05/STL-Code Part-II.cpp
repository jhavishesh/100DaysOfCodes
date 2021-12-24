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



