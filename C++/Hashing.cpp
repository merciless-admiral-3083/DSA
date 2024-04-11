//Hashing means pre storing and fetching data when required
//for example we stored some array as [1 2 1 3 4]
//then if we fetch data like tell me count of 1 then it will print 2, it will look at 0th position then 1st and so on till it reaches last position
/*let say we have a count as  [1 2 1 3 2]
then hash counthas by default an array which stores many digits, let say upto 12 
0,1,2...12
all values of that array are 0 by default, now the array i gave up 1 2 1... will start getting gilled in that
hash count, starting from 1st position and not 0th
number 1 will be stored at first place as it comes first in array
when we start counting from left to right and we reach first position then we tell the hash count that there
is currently only one 1, then we move to second element of array, its 2 i.e. != 1 so it will be filled in 2nd position
count of this 2 will be one as till now while counting we have discovered only one 2
//then we move to 1 at third position, we discovered that there is one more 1 in the array
so this count of newly discovered 1 will be added to first position's 1 so count of 1 will now be 2 as there are 2 1s
and similarly 3 will be placed to new position i.e. 3rd position and its count will also be done

Remaning values of that size 12 array will be set to 0 which were by default there

the final count is

0  2  2  1  0  0  0  0  0  0  0   0   0  ➡️ It shows count 
0  1  2  3  4  5  6  7  8  9  10  11  12 ➡️ It shows the number which we counted
*/

/*
The input file os this hashing will contain the following input for 1 particular code
5              //It is used to define the size of the array WE are making
1 3 2 1 3    //These are the elements of thhe array
5              //It is the number of numbers we have to check are present in this array or not
1              //we have to check how many times 1 is present here
4              //same
2
3
12

*/




#include<bits/stdc++.h> //we didnt use iostream because this bits.. is used to include all libraries at once here
using namespace std;

int main() {

  int n;  //we defined integer n
  cin >> n; //we asked for input

  int arr[n]; //size of input
  for (int i = 0; i < n; i++) { // we make a condition
    cin >> arr[i]; //array we gave
  }

  // precompute
  int hash[13] = {0}; //we made the size of hash as 13 to be sure we can include the biggest numbered to be checked

  for (int i = 0; i < n; i++) {
    hash[arr[i]] += 1;  //start from 0 keep adding 1 value to it till we reach the last  of the hash array
  }

  int q; //1 are the numbers whose presnce  is to be checked
  cin >> q;

  while (q--) { //*i am not sure about its use* but i think q-- will be done when we found the same number count and then it will go to that place in array to update thhe count
    int number;
    cin >> number;
    // fetch

    cout << hash[number] << endl;
  }

  return 0;
}
