#include<bits/stdc++.h> //we didnt use iostream because this bits.. is used to include all libraries at once here
using namespace std; // Use the std namespace


//READ THIS CLASS AFTER LINE 121
void jalapeno(){ //void is used to not giveany output until it is used to get one
        cout<<"HELLO WORLD" <<endl;
    }

void Guatemala(string name){
    cout <<"Hey "<< name <<endl;
}
//////////////////////////////////////////////////////////////////////
//To make a loop the rule is
//For the outer loop, count the number of lines
//For the inner loop focus on the columns & connect them somehow to rows
//Print the "*" (or anything) inside the inner 'for' loop

void print1(){
    int i;
    int j;
    for(i=0; i<4; i++) //outer loop
    {
        for(j=0; j<4; j++) //inner
        {
            cout<<"* ";
        }
        cout<< endl;
    }
}
//output for this code is 
//   * * * * 
//   * * * * 
//   * * * *
//   * * * *

//print statement for this code is on line #145

//we can also change the number of rows(horizontal) & columns(vertical) by  the following
void print2(int n){
    int k;
    int l;
    for(int k=0; k<n;k++){ //n= number of rows/columns
        for(int l=0; l<n;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int m) {  
  for(int a = 1; a<=m;a++) {

    for(int b=0;b<a;b++) {  
      cout << "* "; 
    }
    cout << endl;
  }
}

void print4(int q){
    for(int w=1;w<=q;w++){
        for(int e=1;e<=w;e++){
            cout<<e<<" ";
        }
        cout<<endl;
    }
}
//PRINT STATEMENTS FOR THEW BELOW THINGS ARE NOT BEING EXECUTED BECAUSE IT IS OF NO USE TO EXECUTE THEM

void pairs(){// pais ar3e somehow similar to sets in maths
   pair<int, int> g={1,3}; //easy to understand

    cout << g.first << " " << g.second; //easy

    pair<int, pair<int, int>> h={1,{3,4}}; //subset in set

    cout << h.first /* it has number 1*/ << " " << h.second.second /*It has number 4*/ << " " << h.second.first; //it has  number 3 

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}}; //we made an array

    cout << arr[1].second; 
}

void Vector(){ //I havent put any print statement for this class
    vector<int> v; //this makes  an empty set

    v.push_back(1); ///this will add 1 to the set {1}
    v.emplace_back(2); //it also has the same function as push_back BUT THIS IS FASTER, new set is {1,2}

    vector<int> v1(5, 100); //this will give 5 100s in the set i.e. {100,100,100,100,100} value starts from 0th value

    vector<int> v2(5); //it will make blank set of 5 values {0,0,0,0,0}

    vector<int>::iterator jas =v.begin(); //let say we have a set {1,2,3,4,5} then iterator just helps us show that we have a set present
    jas++;  //it will move the pointer or selector of iterator one position right i.e. if it points to 1 then now it will point to 2
    cout<< *(jas)<< " "; // * is used to implement the abve formula followed by the present style
    jas=jas+2; //same as above
    cout<< *(jas)<<" ";
    jas=v.end(); //end reflects the number present BEYOND the last digit, and if you want to get the last digit use below one
    jas=jas--;
    cout<<*(jas)<<" "; 
    //to print a vector we can use the following

    for(auto buzz : v){
        cout<<buzz<<" ";
    }

    //now we also need to erasse the vector as per our need
    //{1,2,3,4,5,6}
    v.erase(v.begin()+1); //it will remove 2nd element from starting
    //if we need to remove a particular block of elemnts then
    v.erase(v.begin()+2, v.begin()+4); 
    //READ CAREFULLY, the above works in the way [Start, end) i.e. above the +2
    //element will be included in the erase BUT not the +4 element
    //below ones are self explanatory
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}
    vector<int>copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end());//{50,50,300,10,10,100,100}
    cout<<v.size(); // 2
    v.pop_back(); //removes last element of vector
    v1.swap(v2); //swap v1 to v2 and v2 to v1
    v.clear(); //removes the entire vector and shows it as blank
    cout<<v.empty(); //it wil show true if there are no element in vector and vice versa
}

void List(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front();
    //Rest all functions are same as vector
}

void Deque(){
    deque<int> dq; // Create a deque of integers

    dq.push_back(1); // Insert 1 at the back of the deque (dq = [1])
    dq.emplace_back(2); // Insert 2 at the back of the deque (dq = [1, 2])
    dq.push_front(4); // Insert 4 at the front of the deque (dq = [4, 1, 2])
    dq.emplace_front(3); // Insert 3 at the front of the deque (dq = [3, 4, 1, 2])

    dq.pop_back(); // Remove the element from the back of the deque (dq = [3, 4, 1])
    dq.pop_front(); // Remove the element from the front of the deque (dq = [4, 1])

    cout<<dq.back()<<endl; // Print the value of the back element (which is 1)
    cout<<dq.front()<<endl; // Print the value of the front element (which is 4)
}

void stacks(){ //It follows LIFO(Last In First Out) it is like a stack of books, the top book numbered 5 and last numbered 1
// 5
// 4
// 3
// 2
// 1
stack<int> st;
st.push(1); // (1)
st.push(2); // (2, 1)
st.push(3); // (3, 2, 1)
st.push(3); // (3, 3, 2, 1)
st.emplace(5); // (5, 3, 3, 2, 1)
cout << st.top(); // prints 5
st.pop(); // st looks like (3, 3, 2, 1)
cout << st.top(); //3
cout << st.size(); //4
cout << st.empty();
stack<int> st1, st2; //used for swapping
st1.swap(st2);

     
}

void Queue(){
    queue<int> q;
q.push(1); // (1)
q.push(2); // (1, 2)

q.emplace(4); // (1,2,4)

q.back() + 5;

cout << q.back(); // prints 9

//q is (1, 2, 9) now
cout << q.front(); // prints 1

q.pop(); //(2, 9) removes first element

cout << q.front(); // prints 2

// size swap empty same as stack

}

void Priority(){
priority_queue<int> pq;

pq.push(5); // (5)
pq.push(2); // (5, 2) //smaller number than 5 so it comes after 5
//it is just descending order
pq.push(8); // (8, 5, 2) bigger no so before 5
pq.emplace(10); // (10, 8, 5, 2)

cout << pq.top(); // prints 10

pq.pop(); //(8, 5, 2)

cout << pq.top(); // prints B 

// size swap empty function same as others

// Minimum Heap
priority_queue<int, vector<int>, greater<int>> pq_min; //this will reversethe pattern  to ascending order
pq_min.push(5); // (5)

pq_min.push(2); // (2,5)
pq_min.push(8); // (2, 5, 8)

pq_min.emplace(10); // [2, 5, 8, 10)

cout << pq_min.top(); // prints 2

}

void sets(){ //this functions exactly as a set in maths
//they dont store duplicate values like {1,1} only {1} will be counted
set<int> st;
st.insert(1); // (1)

st.emplace(2); // (1, 2)
st.insert(2); // (1, 2)
st.insert(4); // (1, 2, 4)
st.insert(3); // {1, 2, 3, 4]

// Functionality of insert in vector
// can be used also, that only increases

// efficiency

//begin(), end(), thegin(), rend(), size(),
//empty() and swap() are same as those of above

// 1, 2, 3, 4, 5
auto it_find3=st.find(3); //it = iterator, it will help find 3

// (1, 2, 3, 4, 5)
auto it_not_found =st.find(6); //6 is not there so iterator will show st.end(); i.e. it is not present

// (1, 4, 5)
st.erase(5); // erases 5 // takes logarithmic time

int cnt = st.count(1); //if it exist theen it will show 1 else 0

auto it_find3_again =st.find(3);
st.erase(it_find3_again); //it will find and erase 3

auto it1=st.find(2);
auto it2=st.find(3);
st.erase(it1,it2); //it wwill remove the whole block of elements following thee previous rule of [...)

auto lower_bound_2 =st.lower_bound(2); //let say we have number 2 then this value can be obtained by approximating
// 1.5<=2<2.5 here thee lowest value which can approx up to 2 is 1.5 so lower bound is 1.5
//same for upper bound which is 3
auto lower_bound_3 =st.upper_bound(3);





}

void multiSet(){
multiset<int> ms;
ms.insert(1); // (1)
ms.insert(1); // (1, 1)
ms.insert(1); // (1, 1, 1)

ms.erase(1); // all I's erased

int cnt = ms.count(1);

// only a single one erased
ms.erase(ms.find(1));

ms.erase(ms.find(1),  next(ms.find(1))); //removes first and next element

// rest all function same as set

}

void Map(){ //stores unique keys in sorted order
   map<int, int> mpp_int;

map<int, pair<int, int>> mpp_pair_int;

map< pair<int, int>, int> mpp_int_pair;

mpp_int[1] = 2;

mpp_pair_int.emplace(3,  make_pair(1, 1)); // Corrected emplace syntax
mpp_int_pair.insert( make_pair( make_pair(2, 4), 4)); // Inserting a pair as key


for(auto it: mpp_int) {      
     cout << it.first << " " << it.second <<  endl;

}

 cout << mpp_int[1] <<  endl; // Output: 2
 cout << mpp_int[5] <<  endl; // Output: 0 (default value because key not found)


auto find_5 = mpp_int.find(5);

auto lower_bound_5=mpp_int.lower_bound(2);
auto lower_bound_7=mpp_int.upper_bound(3);

}

void Extras(){ //See yt "Complete C++ STL in 1 video" by Take U Forward from 50 min+
    
//     bool comp(pair<int, int> a, pair<int, int> b) {
//     if (a.second == b.second)
//         return a.first > b.first;
//     return a.second < b.second;
//     }

//     int a[]={1,2,3,4,5};

//     sort(a, a + n);
//     vector<int> v={1,2,3,4,5};
//     sort(v.begin(), v.end());

// sort(a+2, a+4);

// sort(a, a+n, greater<int>());

// pair<int, int> a[] = {{1,2}, {2, 1}, {4, 1}};

// //sort it according to second element
// // if second element is same, then sort

// // it according to first element but in descending

// sort(a, a+n, comp);

// // (4,1), (2, 1), (1, 2));

// int num = 7;
// int cnt = __builtin_popcount();

// long Long num = 165786578687;
// int cnt= __builtin_popcountll();

// string s = "123";
// do{

//     cout << s << endl;
// }while (next_permutation(s.begin(), s.end()));

 }

void f(int i, int arrays[], int n){ //it is used to reverse an array ex. [1 2 3 4 5] to [5 4 3 2 1]
    if(i>=n/2) return; //n/2 means that we have reached the centre of the array, now its time to return back
    swap(arrays[i], arrays[n-i-1]); //then swap the values of i to n-i-1 just like  1 2 3 4 5 to 5 4 3 2 1
    f(i+1,arrays,n);
} //see line  560 for it

void recursiveFunction(int n) { //it is used by the  function to call itself
    //code on line 582
    // Base case: stop recursion when n is less than or equal to 0
    if (n <= 0) {
        return;
    }

    // Print the outer recursive call
    cout << "Outer Recursive Call: " << n << endl;

    // Make two recursive calls
    recursiveFunction(n - 1); // First recursive call
    recursiveFunction(n - 2); // Second recursive call

    //Learn more about this concept from 
    // https://www.prodevelopertutorial.com/introduction-to-recursion-with-stack-frame-and-recursion-tree/#:~:text=A%20recursion%20tree%20is%20nothing,printing%20n%5Eth%20Fibonacci%20number.&text=Right%20now%20the%20compiler%20is,other%20are%20in%20paused%20state.&text=Now%20fib%20(%201%20)%2C%20it,it%20is%20popped%20from%20stack
    //do learn how it works, in a brief, it works by calling  itself for working, if first satisfies first call then second call
}

//Time complexity of 'push' and 'pop' happpens in log n and time complexity of top in o(1)

void merge(vector<int> &arrayyy, int low, int mid, int high) { //this will merge the vectors
  vector<int> temponential;//used to create a vector

  int left = low; 
  int right = mid + 1;

    while (left <= mid && right <= high) { //used to merge elements from left and right sub-arrays
        if (arrayyy[left] <= arrayyy[right]) { // used to push elements accordng to their size
        temponential.push_back(arrayyy[left]);
        left++;
        } else {
        temponential.push_back(arrayyy[right]);
        right++;
        }
    }

  while (left <= mid) {  // Add remaining elements from the left sub-array
    temponential.push_back(arrayyy[left]);
    left++;
  }

  while (right <= high) { // Add remaining elements from the right sub-array
    temponential.push_back(arrayyy[right]);
    right++;
  }

  for (int interim = low; interim <= high; interim++) { // Copy sorted elements back to the original array
    arrayyy[interim] = temponential[interim - low];
  }
    }
    void mS(vector<int> &arrayyy, int low, int high) {
    if (low >= high) return; //if this condition is true then return

    int mid = (low + high) / 2; //used to split the array in half
    mS(arrayyy, low, mid); //this is the first array which includes left to mid
    mS(arrayyy, mid + 1, high); //2nd array including mid+1 to high
    merge(arrayyy, low, mid, high); //IT IS OF 'MERGE' CLASS it merges the two sorted halves of the array
    }

    int partition(vector<int>& array_, int low_, int high_) { //we defined things to be present in the array
    int pivot_= array_[high_]; // Choosing the last element as the pivot
    int i_= low_- 1; // Initializing left pointer 

    for (int j_= low_; j_< high_; j_++) {  //till the time j_ is less than high__ keep on running
        if (array_[j_] < pivot_) { //we compare j_ to pivot and if it is low then scan for next
            i_++;
            swap(array_[i_], array_[j_]); //swap the smaller thing and bring it to left
        }
    }

    // Place pivot in the correct position
    swap(array_[i_+ 1], array_[high_]); 
    return i_+ 1; // Return the pivot index
}

// Recursive QuickSort function
void quickSortRecursive(vector<int>& array_, int low_, int high_) { 
    if (low_< high_) {
        int pIndex = partition(array_, low_, high_); 
        quickSortRecursive(array_, low_, pIndex - 1); //we defined the 2 arrays
        quickSortRecursive(array_, pIndex + 1, high_);
    }
}

// QuickSort function
vector<int> quickSort(vector<int>& array_) {
    quickSortRecursive(array_, 0, array_.size() - 1); // Start the recursion
    return array_; // Return the sorted array
}


int findSecondLargest(int aorr[], int nigeria) {//we defined things
   

    int first = aorr[0]; //first element if first
    int second = aorr[1];

    // Ensure first > second after initialization
    if (first < second) { //we sort the array
        swap(first, second);
    }

    for (int international = 1; international < nigeria; international++) {  //for i<n i++
        if (aorr[international] > first) { //if i is more than first then make the second eleement as first i.e. the true sorting
            second = first; 
            first = aorr[international]; //we put the first element in the array
        } else if (aorr[international] > second && aorr[international] != first) { //else if arr[i]>second & arr[i]!= first then make it second element
            second = aorr[international];
        }
    }
    return second; //this statement is necessary idk why
}

int removeDuplicates(vector<int> &aqua) {
    
    int ivory = 0;  // Index for writing unique elements

    for (int noise = 1; noise < aqua.size(); noise++) {
        if (aqua[ivory] != aqua[noise]) {
            // Move unique element to the next position in the array
            ivory++;
            aqua[ivory] = aqua[noise];//The element at index noise in the array aqua is assigned to the position ivory in the same array.
                //This effectively moves the unique element found at noise to the next position in the array, as indicated by ivory.
        }
    }

    // The new size of the array without duplicates
    return ivory + 1;
}

void rotateLeftByOne(vector<int>& arr) {
   
    int firstElement = arr[0]; //first element is 0
    for (size_t i = 1; i < arr.size(); ++i) {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = firstElement;
}

int main() {
    int x,y; //it is used to define 2 variables
    cin >> x >> y; //used to ask input of 2 variables
    cin.ignore(); //this is used to clear the space used for taking input
    cout << "Value of x: " << x  << " and y: " << y << endl; ///just a print statement
    cout << "******************************************************************1" << endl;
    //there are types of numerical inputs like we have integer, long, longlong etc
    //int a=10; //integer have a limit of numerical
    //long a=103; //this has a larger limit of numericals i.e. range
    //long long a=500; //longer longer limit
    //cin >> a;  //it will print the first value i.e. 10 here
    cout << "******************************************************************2" << endl;
    float b= 5.6;
    double c= 6.7;
    cout << "Value of b: " << b << " Value of c: " << c << endl;
    cout << "******************************************************************3" << endl;
    string s1; //s1 will store only 1 word, here its Jaspreet
    string s2; //similarly here
    cin >>s1>>s2; //it will ask user input for s1 and s2
    cout<<s1<< " " <<s2 << endl; // print
    cout << "*************** ***************************************************4" << endl;
    //BUT we can also use a statement where we need not use s1 s2... if we have a paragraph to write, so we use
    cin.ignore();
    string str; //naming
    //There is no need of mentioning cin>> individually
    getline(cin, str); //getline provides the output for text in that WHOLE LINE!
    cout << str<<endl;
    cout << "******************************************************************5" << endl;
    char ch= 'g'; //used to define a character, presented in '
    cout<<ch<<endl;
    cout << "******************************************************************6" << endl;
    int age;
    cin >> age;
    if(age >= 18) {
        cout<<"You are 18+" <<endl;
    }
    //the else if statement is not mandatory, you may skip it, as a consequence
    //the else if condition (if true) will not be executed
    else if(age<18) {
        cout<<"You are 18-" <<endl;
    }
    cout << "******************************************************************7" << endl;
    int marking;
    cin>>marking;
    if(marking >=25 && marking <=50){
        cout<<"Marks between 25 and 50" <<endl;
    }
    else if(marking <=25 && marking >=50){
        cout<<"Marks not between 25 and 50"<<endl;
    }
    cout << "******************************************************************8" << endl;
    int day;
    cin>>day;
    switch(day){ //used for giving output as per input
        case 1:
            cout<<"Monday" <<endl;
            break; //if code executed then it must break
        case 2:
            cout<<"Tuesday" <<endl;
            break;
        case 3:
            cout <<"Wednesday" <<endl;
            break;
        case 4:
            cout <<"Thursday" <<endl;
            break;
        case 5:
            cout <<"Friday" <<endl;
            break;
        case 6:
            cout <<"Saturday" <<endl;
            break;
        case 7:
            cout <<"Sunday" <<endl;
            break;
        default: //no valid entry then default answer will be printed
            cout <<"Invalid day" <<endl;
            break;
    }
    //fact by me: if weput 1, or we put 01, or 001, we get the answer linked to 1 
    cout << "******************************************************************9" << endl;
    int arr[5]; //used to define length of array
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]; //used to take input for array
    arr[3] += 10; //mathematical operations on array
    cout<<arr[3] <<endl; //used to print math's output
    arr[4]  =15; //we can change value of 4th position
    //we can print the whole aray as follows
    for(int iguana;iguana<5;iguana++){
        cout<<arr[iguana]<<endl;
    }
    //we can store decimals by replacing int arr[5] to double arr[5]
    cout << "******************************************************************10" << endl;
    int ar[3][5]; //used for 2D array aka matrix
    ar[3][5]=68; //value at 3x5
    cout<<ar[3][5] <<endl;
    cout << "******************************************************************11" << endl;
    string s ="Jaspreet";
    int len =s.size(); //used to obtain size
    cout<<s[len - 1] <<endl;// -1 is mandatory and it will then print the last alphabet of the word
    cout << "******************************************************************12" << endl;
    int i;
    for(i=1;i<=5;i=i+1){
        cout<<"Jaspreet"<<endl;
    }
    cout<<i<<endl;
    int j=0;
    while(j<=5){
        cout<<"Nahal" <<j<< endl;
        j=j+1; 
    }
    cout << "******************************************************************13" << endl;
    jalapeno(); //i used it to get output
    string name;
    cin.ignore();
    getline(cin,name);
    Guatemala(name);
    
    string name2;
    getline(cin,name2);
    Guatemala(name2); //we can give as many names as possible
    cout<<"******************************************************************14" << endl;
    //PATTERNS ARE NOT AT ALL NECESSARY TO BE PREPARED FOR INTERVIEW BUT NECESSSARY FOR EXAMS
    //int *Anything*= sum(*Num 1*, *Num2*);
    //cout<< *Anything*;
    //it is used to do math
    // print1();//Part of line 13
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^15" << endl;
    int n;
    cin>>n;
    print2(n); //part of line 39

    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^16" << endl;

    //There are differemt ways of typing a code in online editors and in interviews online editors are only used to write code
    //like here we give only 1 input and it gives desired output, but in online editors
    //it test our code by giving many input cases at once and the code we wrote wont work in that
    int t;
    cin>>t;
    for(int k; k<t;k++){
    int n;
    cin>>n;
    print2(n);
    //This is input you put in an IDE
    }
    //The above code is used when we use online IDEs
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^17" << endl;
    //Pattern #2, labelled as print 3 above
    // *
    // * *
    // * * *
    // * * * * and so on...
    int u;
     cin >> u;

     for(int a = 0; a<u;a++) {  
    int m;

    cin >> m;
    print3(m);
    }
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^18" << endl;
    //Pattern #3, labellled as print 4
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    int r;
    cin>>r;
    for(int w=0;w<r;w++){
        int q;
        cin>>q;
        print4(q);
    }
    //too make pattern 
    //1
    //22
    //333
    //4444
    //you just need to replace e with w on line 63
    //PATTERNS ARE NOT AT ALL NECESSARY TO BE PREPARED FOR INTERVIEW BUT NECESSSARY FOR EXAMS
    cout<<"******************************************************************19" << endl;
    // pairs(); //commented because theey were used just to explain above
    // Vector();
    // List();
    // Deque();
    // stacks();
    // Queue();
    // Priority();
    // sets();
    // multiSet();
    //Map();
    cout<<"******************************************************************20" << endl;
    int number;//there is a number
    cin>>number; //we put the number given by user
    int arrays[number]; //we put 'number' in the form of an array
    for(int i=0; i<number;i++) cin>> arrays[i]; 
    f(0,arrays,number);
    for(int i=0;i<number;i++) cout<<arrays[i]<<" ";
    cout<<endl;
    cout<<"******************************************************************21" << endl;
    int numerical = 4;
    recursiveFunction(numerical);
    cout<<"******************************************************************22" << endl;
    cout<<"***Run the below codes in individual file to get the correct output***"<<endl;
    //now we will see how to count number of characters in alphabets
   
    //     string string; //we defined a string
    //     cin >> string;
    //     int hash[256] = {0}; //hash[] is the size of the array if can be anything big, {0} tells that it initially starts with 0 as counting

    //     for(int eye=0;eye<string.size();eye++){ //we defined the size of string to increase till we count the characters in thee word
    //         hash[string[eye]]++; //++ means keeps increasing
    //     }
    //     int queen; //it is the number of characters
    //     cin >> queen;

    //     while(queen--) { //-- shows tha when you find that word enter it in the required place
    //         char character;
    //         cin >> character;
    //     cout << hash[character] << endl;
    // }
    //SOME THINGS CAN'T BE FULLY UNDERSTOOD INSTEAD TRY TO UNDERSTAND THEIR WAY
        cout<<"******************************************************************23" << endl;
        
    //HASHING- It is pre-storing and fetching
    /*If we are given an array with numbers like 1 2 3 2 1 in it and we have to ocunt the number of 
    1s or 2s etc in this then we can do it start counting, let say we are given to cont 1 in the array
    then th intal value will be zero and when we reach the first number we can say that 1 has appreared
    so the count will be updated to 1, when we go to the 2nd digit i.e. 2 then nothing will be updated and so on
    the loop will continue */
       int norwaym;                         
    cin >> norwaym;
    int ammay[norwaym]; //whatever be the numbers entered, make an array of them

    for(int i=0;i<norwaym;i++) { //yk it
        cin >> ammay[i]; //here position is given to each input value
    }

                                                       
    // precompute
    int hash[1001] = {0}; //we define the size of the array as 13, that it has 13 blocks

    for(int i=0;i<norwaym;i++) {  
        hash[ammay[i]] += 1; //we start counting that when you read the value at the first place then do += 1 and move to read the next value
    }

    int quarter;
    cin >> quarter;

    while(quarter--) {  //quarter is the number of number we want the counting of
        int number;
        cin >> number; //we enter the number whose input we want
                            
        // fetch
        cout << hash[number] << endl; //it will print it
    }
    /*input in input.txt is
    5
    1 2 3 2 1
    3
    1
    2
    4
    */
    //This might seem tough but give it some practice and youre good to go
    cout<<"******************************************************************24" << endl;

    cout<<"***Run the below codes in individual file to get the correct output***"<<endl;
    // //Similarly we see the same for alphabets
    // string society;  // we defined string because we need to compute in alphabets
    // cin >> society; //we put abcdefgabc

    // //pre compute
    // int hasher[256] = {0};  // we used 256 as it includes both small letters and capital letters

    // for (int i = 0; i < society.size(); i++) { //there is unique size of each alphabet
    // hasher[society[i]]++; //in an array we put value of each thing
    // }

    // int quantum; 

    // cin >> quantum; //it includes the number 5 i.e. the number ofinputs whose count we have to count
    // while (quantum--) {

    // char char_;  
    // cin >> char_; //we enter those alphabets whose count we want

    // // fetch
    // cout << hasher[char_] << endl;

    // }
    cout<<"******************************************************************25" << endl;

    //we can hash using arrays only till 10^7
    //in such cases we just need to change the pre-compute statement
    int nezo;
    cin >> nezo; //we asked for how many numbers are there who are in the array
    int aaron[nezo];
    for(int intra=0;intra<nezo;intra++){
        cin >> aaron[intra]; //we put the numbers
    }
    map<int,int> mpp; //we define the starting and end of the array which is bigger than 10^7
    for(int intra=0;intra<nezo;intra++){
        mpp[aaron[intra]]++;
    }
    int quizzer;
    cin>>quizzer; //we put the number o numbers there are whose count we have to count
    while(quizzer--){
        int nazzero;
        cin>>nazzero; //we give the numbers
    cout<<mpp[nazzero]<<endl;
    }
    /*Input in input.txt is
    5
    1 2 2 3 4
    3
    2
    3
    5
    */
    //There are two types of maps ordered and unordered
    //map is used to store elements as key,value pairs in order sorted by key is ordered map, they have time complexity O(log n)
    //unordered map is used to store elements as key,value pairs in non-sorted order, they have time complexity of o(1)
    cout<<"******************************************************************26" << endl;
    //I have skipped non-important sortng methods and i will do only MergeSort and Quick Sort
    // Merge Sort
    //Merge sort works on the concept of Z.png present in the folder
    /*
    mergesort(arr,low,high){
        if(low==high)
            return;
            mid=(low+high)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            mergesort(arr,low,mid,high)
        }
        what hapens here is that we have an array 5 7 2 9 4 where 5 is te low value and 4 is the high value, we need to mergesort the array
        see from line 704 now, we need to split the array in half, so we used mid statement, then we formed 2 new arrays of low and mid and one of mid+1 and high
        we continued the same process to split the array in half till low==high i.e. the low number=high number



    */
    vector<int> arrayyy = {38, 27, 34, 5, 8, 82, 10};

    cout << "Original array: ";
    for (int interim = 0; interim < arrayyy.size(); interim++) {//we mentioned all of this and not <<arrayyy because it is in vector form array
    //this can be only printed using the above code
        cout << arrayyy[interim] << " ";
    }
    cout << endl;

    mS(arrayyy, 0, arrayyy.size() - 1); //calls ms to sort the array

    cout << "Sorted array: ";
    for (int interim = 0; interim < arrayyy.size(); interim++) {
        cout << arrayyy[interim] << " ";
    }
    cout << endl;
    cout<<"******************************************************************27" << endl;
    //Quick sort
    /* Refer to image named Y in the folder, also Quick sort refers to taking the pivot i..e any random element in the array 
    like first , last element, middle element etc and place it in the correct sorted manner in the array 
    5 9 4 6 3 2 1 7 8, let say i took 5 as pivot and placed it to its correct place, 9 4 6 3 5 2 1 7 8
    then split into 2 arrays left and right to pivot (dont include pivot number in any of the 2 array)
    then do the same for splitted array until we reach 1 element each array then sort the arraya and move up the same table
    */

     int n_;

    cin >> n_;

    vector<int> array_(n_);
    
    for (int i_= 0; i_< n_; i_++) {
        cin >> array_[i_];
    }

    quickSort(array_);

    cout << "Sorted array: ";
    for (int num_: array_) {
        cout << num_<< " ";
    }
    cout << endl;
    //if we say the size of array as 6 then it has elements numbered 0 1 2 3 4 5
    //initially the value fo array is garbage but if we enter any value inside the array the remaning values become 0
    //inside int main, max size of array is 10^6 and outside i.e. globally its 10^7
    cout<<"******************************************************************28" << endl;
    cout<<"Input where 6 *next line 7 9 5 4 3 is written, input is synced to the code" << endl;
    cout<<"******************************************************************27" << endl;
    //printing largest element of an array
   vector<int> numan = {1, 2, 3, 4, 5};//we made an array
    
    // Initialize largest with the first element
    int largest = numan[0]; //we defined largest is first element of the array
    
    // Iterate through the vector
    for (int jammer = 1; jammer < numan.size(); jammer++) { //it will start reading the values till the end of array
        // Update largest if the current element is larger
        if (numan[jammer] > largest) {  //we keep on reading jammer
        //1 then 2 then 3 then 4 then 5, since largest has 0 as value and we compare numan[jammer] then we see that if something is greater then 0 then
            largest = numan[jammer]; //assign the value of largest as that number
        }
    }
    
    // Output the largest element
    cout << "Largest element is " << largest << endl;
    cout<<"******************************************************************28" << endl;
    //2nd largest array
    int aorr[] = {10, 5, 20, 8, 12}; //we defined array
    int nigeria = sizeof(aorr) / sizeof(aorr[0]); 

    int secondLargest = findSecondLargest(aorr, nigeria);

    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    cout<<"******************************************************************29" << endl;
    //to remove duplicate element in sorted array
    vector<int> aqua = {1, 1, 2, 2, 2, 3, 4, 4, 5};

    cout << "Original array:\n";
    for (int noise : aqua) { //in this noise takes on current value of aqua
        cout << noise << " ";
    }
    cout << "\n";

    int newSize = removeDuplicates(aqua);

    cout << "Array after removing duplicates:\n";
    for (int ivory = 0; ivory < newSize; ivory++) {
        cout << aqua[ivory] << " ";
    }
    cout << "\n";
    cout<<"******************************************************************30" << endl;
    //rotate array left by 1 place 
    //i.e. [1 2 3 4] to [2 3 4 1]








   










    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0; //it is present at the end of code and it ensures that the whole code has been fully executed
}

