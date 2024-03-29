#include<bits/stdc++.h> //we didnt use iostream because this bits.. is used to include all libraries at once here
using namespace std;

//READ THIS CLASS AFTER LINE 121
void jalapeno(){ //void is used to not giveany output until it is used to get one
        cout<<"HELLO WORLD" <<endl;
    }

void Guatemala(string name){
    cout <<"Hey "<< name <<endl;
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
    jalapeno(); //here i used it to get output
    string name;
    cin.ignore();
    getline(cin,name);
    Guatemala(name);
    
    string name2;
    getline(cin,name2);
    Guatemala(name2); //we can give as many names as possible
    cout<<"******************************************************************14" << endl;
    //int *Anything*= sum(*Num 1*, *Num2*);
    //cout<< *Anything*;
    //it is used to do math
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0; //it is present at the end of code and it ensures that the whole code has been fully executed
}

