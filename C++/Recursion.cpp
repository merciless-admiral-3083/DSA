/*					



Stack is something which holds linear, ordered sequence of elements

let say we have
•	void f(){

•	print(1){

•	f()
}
}

int  main(){

•	f();
}

we now that we will get output as 1 BUT we also called f() again in line 8 i.e.
we will get a loop of output 1 1 1 1... because f() is being called many times
after a certain time we will stop getting output 1 and that point is called stack overflow
Stack overflow is the buffer overflow that occurs when program tries to use more memory than allocated to in. Segmentation error happens here.

•	Base Condition- It is the condition where we define the loop when to stop else it will go on till stack overflow.
It is given as
•    Int a=0
•    f()
{
•    Print(a)
•    a++;
•    f();
}
•    main()
{
•    F()
}

To deal with this we have
a=0
f(){
    if(a==4)
    return;
    else print(a)
    a++
    f()
}

main(){
    f();
}

Q1. Print input name n times using recusrion
Ans The question says that we have to print the user's given input name N times



void f(i,n)
if(i>n)
return;
print("Ranveer");
f(i+1,n);
}
main(){
    int n;
    cin>>n;
    f(1,n;)
}

the code starts from line 67, we give input like 3 then next line
the limit set is 1 to 3
then to line 60
we have set the limit as if(1>3)
print raj else keep on printing

if you see clearly in line 59 then 
first the pc checks that if i=1 and n=3 then i have to print value i.e. it prints (1,3)
then (2,3)
then (3,3)

There is a concept called recursion tree which simplifies tthe way we see the functin happening

                    f(1,3)➡️ Ranveer
                    ⬆️⬇️
                    f(2,3)➡️ Ranveer
                    ⬆️⬇️
                    f(3,3)➡️ Ranveer
                    ⬆️⬇️
                    f(4,3)
first down arrow works, here it says that  f 1,3 is executed move to next one 
till it reaches (4,3), (4,3) has return fuction so arrow will move back till f(1,3)
it is called recursion tree







*/