#include<bits/stdc++.h> //we didnt use iostream because this bits.. is used to include all libraries at once here
using namespace std;

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

    vector<pair<int, int>> vec;//we can make an existing pair a vector

    vec.push_back({1, 2}); //we can push or put a whole pair in a vector
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); //this will give 5 100s in the set i.e. {100,100,100,100,100} value starts from 0th value

    vector<int> v2(5); //it will make blank set of 5 values {0,0,0,0,0}

    vector<int> v1(5, 20); //same as above
    vector<int> v2(v1);  //it will replicate the same vector v1 for some other use

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
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}
    vector<int>copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end());//{50,50,300,10,10,100,100}
    cout<<v.size(); // 2
}

int main() {
    int x,y; //it is used to define 2 variables
    cin >> x >> y; //used to ask input of 2 variables
    cin.ignore(); //this is used to clear the space used for taking input
    cout << "Value of x: " << x  << " and y: " << y << endl; ///just a print statement
    cout << "******************************************************************1" << endl;
    //there are typs of numerical inputs like we have integer, long, longlong etc
    //int a=10; //integer have a limit of numerical
   // long a=103; //this has a larger limit of numericals i.e. range
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
    cout << "******************************************************************4" << endl;
    //BUT we can also use a statement where we need not use s1 s2... if we have a paragraph to write, so we use
    cin.ignore();
    string str; //naming
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
    cout << "******************************************************************9" << endl;
    int arr[5]; //used to define length of array
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]; //used to print array
    arr[3] += 10; //mathematical operations on array
    cout<<arr[3] <<endl; //used to print math's output
    arr[4]  =15; //we can change value of 4th position
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
    int j;
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
    pairs();





    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0; //it is present at the end of code and it ensures that the whole code has been fully executed
}

