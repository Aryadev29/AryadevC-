// vector<int> vec;
// vector<int> vec = {1,2};
// dynamic / resize
// vector<int> vec(3,10); 3 size vector , with each value equal to 10
// vector<int> vec2(vec1); // intialize the values of vec2 with the elements of vec1
// vec.capacity() -> gets doubled in every step
// vec.size() -> no of elements in a vec
// vec.push_back(1) --> size = 1 , capacity = 1
// vec.push_back(2) --> size = 2 , capacity = 2
// vec.push_back(3) --> size = 3 , capacity = 4
// vec.emplace_back(6) ---> pushes elements at the last of the vector
// vec.pop_back() --> deletes the elements from the last index
// vec.at(2) ---> value at index 2
// vec.front() ----> gives value at first index
// vec.back() -----> gives value at last index
// vec.erase(vec.begin())--> erases the first element
// vec.erase(vec.begin()+2)---> erases 3rd element
// vec.erase(vec.begin()+1 , vec.begin()+3)---> removes all the element in the range , the last element is not included
// vec.insert(vec.begin()+2,100) --> on index 3 insert 100
// vec.clear();
// size changes , but capacity won't
//vec.empty() - 0 , if not empty , 1 , if empty
// VECTOR (ITERATORS) --> vec.begin() , vec.end()
// * ----> dereference operator
// *(vec.begin())--> 1
// *(vec.end())---> garbage value , index after the last element
// vector<int> :: iterator it;
// for(it = vec.begin() ; it!=vec.end() ; it++){
//      cout << *(it) << endl;         
//      } forward loop
// Backward loop
/*  vector<int> :: reverse_iterator it; , using auto , no need to use this
    for(auto it = vec.rbegin(); it!=vec.rend(); it++){
    cout << *(it) << endl; 
    }*/ // auto = helps the language decide , which iterator
// LIST
/*   list<int> l;
     l.emplace_back(1);
     l.push_back(2);
     l.push_front(3);
     l.push_front(5);
     l.pop_back(); 2 deleted
     l.pop_front(); 5 deleted
     for(int val : l){
     cout << val << endl;
     }*/
// vector is declared as a dynamic array , so no front operations 
// list is declared as a doubly linked list , so front operations used
// DEQUE : DOUBLE ENDED QUEUE
// same as list , deque<int> d = {1,2,3};
// d[2] --> allowed , l[2] --> not allowed
// PAIR
/*. pair<int , int> p = {3,5}. 
    cout << p.first << endl;
    cout << p.second << endl;
    pair<char , int> p = {'a',1};
    pair<int , pair<char , int> > = {1,{'a',2}};
    p.second.second = 2;
    vector <pair<int, int>> vec = {{1,2},{3,4},{4,5}};
    vec.push_back({4,5}) --> pair banake hi daalna parega , khud kuch nhi karegi buss insert karegi
    vec.emplace_back(4,5) ---> it will create in line object , ye samajh jati hai ki pair banake hi insert karna hai
    for(auto p : vec){
    cout << p.first << " " << p.second << endl;
    }*/
// QUEUE --> queue<int> q;
// q.push(1) , end se add hoti jayegi
// q.pop() , front se elements haatti jayegi
// q.front();