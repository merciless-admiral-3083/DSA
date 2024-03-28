//We have linked this file to Input.txt and Output.txt we will get its output only in them 
//to run this use Ctrl+Shift+B

#include<iostream> //this is basic syntax
using namespace std; //we use this so we dont have to put std::cin std::cout in every statement we put a common
//std at once

int main() { //this is part of syntax which icnludes integer
    int x; //integer
    cin >> x; //cin >> is used to ask for user input which we have mentioned in input.txt
    cout << "Hey " << x; //cout is used to print print statement, its output will be in output.txt
}