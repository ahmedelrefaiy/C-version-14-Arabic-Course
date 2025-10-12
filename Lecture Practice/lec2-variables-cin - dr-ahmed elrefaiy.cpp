#include <iostream>

using namespace std;

int main()
{
    //[Revision] How many (gaps) & (lines) will be printed?
    /*
    cout << "Hello world" << endl;
    cout << "\nHello world";
    */


    //Variable practice
    /*
    int r = 5;
    cout << 5 << endl;
    cout << r << endl;
    cout << "r" << endl;
    cout << 'r' << endl;
    */

    //define + assignment

    /*
    int r; // define variable
    cout << r << endl;//may be zero (default number) or random value from RAM
    r = 5; //assignment
    cout << r << endl;
    */

    //int take integer part only [ignore decimal part]
    /*
    int r = 5.5;
    cout << r << endl;
    */

    //example on decimal
    /*
    double r = 5.5;
    cout << r << endl;
    */

    //example on char VS string
    /*
    char ch = 'h';
    char ch2 = 'hello';
    string str = "hello";
    cout << ch << endl;
    cout << ch2 << endl;
    cout << str << endl;
    */

    //example: What is the output?
    /*
    int x = 5;
    cout << x << endl;
    x = 10;
    //int z = 7;
    cout << x << endl;
    */

    //assignment operator VS List initializer
    /*
    int x = 10;//assignment operator
    int r {10};//list initializer
    */

    //*********************************************************************

    //input integer from user

    /*
    int r;
    cin >> r;
    //cout << "hello\n";
    cout << r;
    */




    //Enhance the code !!
    /*
    int r;
    cout << "Write Integer Number, and i will add 20 to it: ";
    cin >> r;
    cout << "your (r) value + 20 = " << r + 20;
    */

    //Input two numbers and print sum, subtract  [input character operator]
    /*
    int x;
    cout<<"write number: ";
    cin >> x;

    int y;
    cout<<"write number: ";
    cin >> y;

    cout << "sum = " << x + y << endl;
    cout << "subtract = " << x - y << endl;
    */

    //more enhancement
    /*
    //int x;
    //int y;
    int x, y;

    cout<<"write two numbers: ";
    cin >> x >> y;

    cout << "sum = " << x + y << endl;
    cout << "subtract = " << x - y << endl;
    */
    return 0;
}
