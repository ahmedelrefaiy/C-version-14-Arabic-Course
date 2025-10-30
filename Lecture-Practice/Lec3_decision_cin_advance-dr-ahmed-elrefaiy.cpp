#include <iostream>

using namespace std;

int main()
{

    //revision
    //What is output if we input [hello world]
/*
    string s;
    cin >> s;
    cout << "You write:\t" << s;
*/

    //what if we need to display + or - based on user input
    //Like user state he need +, -, *, / or what operator?
    //Decision making: if - switch
    //relational operators > - < - >= - <=
    //equality operators == - !=

    //enhance this program
    //+-*/ string
    /*
    int x, y;
    char ch;

    cout<<"write two numbers: ";
    cin >> x >> y;

    cout << "write operator +*-/: ";
    cin >> ch;

    if(ch=='+')
        cout << "sum = " << x + y << endl;
    else if(ch=='-')
        cout << "subtract = " << x - y << endl;
    else if(ch=='*')
        cout << "mu = " << x * y << endl;
    else if(ch=='/')
        cout << "div = " << x / y << endl;
    else
        cout << "error";
    */
    //+-*/ '+'

/*
    int x, y;
    char ch;


    cout<<"write two numbers: ";
    cin >> x >> y;

    cout<<"write operator +*-/: ";
    cin >> ch;

    if(ch=='+')
        cout << "sum = " << x + y << endl;
    else if (ch=='-')
        cout << "subtract = " << x - y << endl;
    else if (ch=='*')
        cout << "mul= " << x * y << endl;
    else if (ch=='/')
        cout << "div = " << x / y << endl;
    else
        cout << "error, +*-/";
  */

    //enhanced version
    /*int x, y;
    char ch;

    cout<<"write two numbers: ";
    cin >> x >> y;

    cout << "Write operator *+-/: ";
    cin >> ch;

    if(ch=='+'){
        cout << "sum = " << x + y << endl;
    }
    else if(ch=='+'){
        cout << "subtract = " << x - y << endl;
    }
    else{
        cout << "Error, write a valid operator";
    }
    */

    //before if, we work with sequential structure
    //if called selection structure
    //selection structure is:
    //Single selection -----> if
    //Double selection -----> if else
    //Multi selection  -----> switch
    //another further topic called iteration structure: loops
    //All called Structure programming

    //Write C++ program that receive number and check it's positive, negative, or zero
    /*int x;
    cout << "write number and i will tell you it's pos, neg, or zero: ";
    cin >> x;
    //-10
    if(x>0)
        cout << "Positive";
    else if(x<0)
        cout << "Negative";
    else
        cout << "Zero";
*/
/*
    int x;
    cout << "write number and i will tell you it's pos, neg, or zero: ";
    cin >> x;
    if(x>0)
        cout << "Positive";
    if(x<0)
        cout << "Negative";
    if (x==0)
        cout << "Zero";
*/


/*
    int x = -5;
    if(x>0)
        cout << "Positive";
*/


    /*int x = -5;
    if(x>0);
        cout << "Positive";*/


    //what is the result of any condition? Yes or No [true or false]
    //any statement inside if -----> converted to true or false

    //More data types:
    //int - double - float - char - string - bool
    //bool --> true or false [1 or 0]


    /*bool b1 = true;
    bool b2 = false;
    cout << b1 << endl << b2;*/

    /*
    int x=20-10;//10
    bool b = x>10;//10>10//false
    cout << b;*/


    //Compiler handle any digit as true, except 0 only is false


    /*bool b1 = 1;
    bool b2 = 10;//1
    bool b3 = -9;//1
    bool b4 = 0;
    cout << b1 << endl;//1
    cout << b2 << endl;//1
    cout << b3 << endl;//1
    cout << b4 << endl;//0
*/

/*
    int x = 5;
    if(x==5)//this is processed as true
        cout << "Hello";
    if(x==1)//this is processed as false
        cout << "Hello";
    if(true)
        cout << "Hello";
    if(false)
        cout << "Hello";
    if(1)
        cout << "Hello";
    if(10)
        cout << "Hello";
    if(-10)
        cout << "Hello";
    if(0)
        cout << "Hello";
    if(x=10) //--> x = 0 if(0)
        cout << "Hello";
    */



    //logical operators: && , || , !
    //used for many statement inside condition part
    //condition&&condition
    //1        &&1 >> 1
    //1        &&0 >> 0
    //cond || cond
    //1    || 1  >>>1
    //1    || 0   >>1
    //0    ||1    >>1
    //0    ||0    >>0
/*
    int x;
    cout << "write number: ";
    cin >> x;
    if(x>10 || x%2==0)//x>10||x%2==0
        cout << "you win";

    if(!(x>10 || x%2==0))//x<=10 && x%2!=0
        cout << "you win";

    if(!x>10 || x%2==0)//x<=10 && x%2!=0
        cout << "you win";

    if(x<=10 && x%2==1)
        cout << "you win";

*/

    /*cout << !1 << endl;
    cout << !0 << endl;
    cout << !true << endl;
    cout << !false << endl;*/


    //Write condition that make x divisible by 5 and greater than 20
    //x % 5 == 0 && x > 20

    //Write condition that make x not (divisible by 5 and greater than 20)
    // !(x % 5 == 0 && x > 20)


    //write program that receive day number and print day name

    /*int number;
    cout << "Write day number from 1 to 7: ";
    cin >> number;
    //Multi selection: switch
    switch(number){
        case 1: cout << "Sat";
        case 2: cout << "Sun"; break;
        case 3: cout << "Mon"; break;
        case 4: cout << "Tue"; break;
        case 5: cout << "Wed"; break;
        case 6: cout << "thu"; break;
        case 7: cout << "Fri"; break;
        default: cout << "error, numbers must be from 1 to 7"; break;
    }*/

    /*if(number == 1){
        cout << "Saturday";
    }
    else if(number == 2){
        cout << "Sunday";
    }
    else if(number == 3){
        cout << "Monday";
    }
    else if(number == 4){
        cout << "Tuesday";
    }
    else if(number == 5){
        cout << "Wednesday";
    }
    else if(number == 6){
        cout << "Thursday";
    }
    else if(number == 7){
        cout << "Friday";
    }
    else{
        cout << "error, numbers must be from 1 to 7";
    }
*/




    //without break ----> you are in fall-through
    //fall-through --> mean each other case follow me will be executed
    //case value can be integers or characters









    return 0;
}
