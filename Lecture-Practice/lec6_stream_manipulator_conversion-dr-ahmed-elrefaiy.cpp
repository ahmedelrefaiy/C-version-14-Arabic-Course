#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    //1- read string with spaces [cin VS getline]
    /*string s;
    //cin >> s;
    getline(cin, s);
    cout<<"you write: " << s;*/






    //2- Input buffer
    //What is output if you write 10 20
    /*int x, y;
    cout << "First: ";
    cin >> x;
    cin.sync();
    cout << "Second: ";
    cin >> y;
    cout << "You write: " << x << " and " << y << endl;*/



    //what is output if you input hi hello world
    /*string s1, s2;
    cout << "First: ";
    cin >> s1;
    cout << "Second: ";
    cin >> s2;
    cout << "You write: " << s1 << " and " << s2 << endl;*/



    //what is output if you input hi hello world
    /*string s1, s2;
    cout << "First: ";
    cin >> s1;
    //cin.sync(); //this is to clear input buffer from unwanted values
    cout << "Second: ";
    getline(cin, s2);
    cout << "You write: " << s1 << " and " << s2 << endl;*/



    //3-Stream manipulators:
    //to format numbers--> endl, setw, setprecision, fixed
    //functions or objects that modify input/output stream behaviour
    //format input or output
    //require #include<iomanip>

    //3.1- ws --> remove leading whitespaces
/*
    string s1,s2;
    cout<<"first: ";
    cin >> s1;
    cout<<"second: ";
    //cin>> ws;
    getline(cin, s2);
    cout << "you write: " << s1 << "-and-" << s2 << endl;*/


    //3.2- setw(n) --> specifies min num of chars to display the next value
    //setw --> align right by default
    //cin by default is align left
    //3.3/3.4- left - right - setfill

    /*cout<<left<<setw(8)<<"Ahmed"<<30<<endl;
    cout<<setw(8)<<"Khaled"<<25<<endl;
    cout<<setw(8)<<"Ali"<<20<<endl;
*/
    /*cout<<"Ahmed   "<<30<<endl;
    cout<<"Khaled  "<<25<<endl;
    cout<<"Ali     "<<20<<endl;*/


    /*cout<<left<<setw(8)<<"Ahmed"<<30<<endl;
    cout<<left<<setw(8)<<"Khaled"<<25<<endl;
    cout<<left<<setw(8)<<"Ali"<<20<<endl;*/

    //what is output of the following?
  /*  for(int i=1;i<=1000000;i*=10)
        cout<<i<<endl;
*/
/*    for(int i=1;i<=1000000;i*=10)
        cout<<setw(7)<<i<<"x"<<endl;
*/


    /*for(int i=1;i<=1000000;i*=10)
        cout<<setfill('*')<<left<<setw(7)<<i<<"x"<<endl;
*/



    //set fill [replace spaces with another character]
    /*for(int i=1;i<=1000000;i*=10)
        cout<<setfill('*')<<left<<setw(7)<<i<<"x"<<endl;*/

    //note: setfill and left or right affect on all cout until you change it
    //note: setw affect on line written inside only

    /*cout<<setfill(' ')<<right;
    cout<<setw(12)<<"H";*/


    //Tricky examples with setw and loops to print shapes

/*
    for(int i=1;i<=5;i++)
        cout<<setfill('*')<<setw(i)<<"*"<<endl;
*/

/*
    for(int i=1;i<=5;i++)
        cout<<setw(i)<<"*"<<endl;
*/
/*
    for(int i=1;i<=5;i++)
        cout<<setfill('*')<<setw(i)<<"*"<<endl;
*/



    //4- string helpers
    //string(num, char); // repeat char num times
    //cout << string(5, '*') << endl;
/*
    for(int i=1;i<=5;i++)
        cout<<setw(5)<<string(i, '*')<<endl;
*/


    //   *
    //  **
    // ***
    //****
/*
    for(int i=1;i<=5;i++)
        cout<<setw(5)<<string(i, '*')<<endl;
*/





    //5- setprecision(3) --> number of digits for displaying floating-point numbers
    //Without fixed --> total number of significant digits
    //With    fixed --> total number of fractional digits

    /*double pi = 3.146592653589793;
    //3.147 >> fixed - (3)
    //3.15 >> (3)
    cout << "Default precision: " << pi << endl;
    cout << "setprecision(3): " << setprecision(3) << pi << endl;
    cout << "Fixed + setprecision(3): " << fixed << setprecision(3) << pi << endl;
    */




    //6- manipulator to make bool print 1 or true / 0 or false
    /*cout<<boolalpha;
    cout<<true<<endl;
    cout<<false<<endl;
    cout<<noboolalpha;
    cout<<"try again: "<< true;
    */



    //7-conditional (ternary) operator--> ?:
    /*int x = 10;
    int y = x==10?6:-1;
    cout<<y;*/

    /*int x = 10;
    int y;
    if(x==10)
        y=6;
    else
        y=-1;*/



    //Tricky question - what is output
    /*if(int x = 5)
        cout<<x;*/



    //8- Datatype Conversion - Casting

    //implicit VS explicit
    /*bool b = 10;
    cout<<"bool value: "<<b<<endl;
    cout<<"size of 10: "<<sizeof(10)<<endl;
    cout<<"size of b : "<<sizeof(b)<<endl;*/

    //types of convertion: c-type & function-type

    /*double d = 6000000000;
    int x = (int)d;//c-type casting
    int x1 = int(d);//function-type casting
    cout<<"int value (x)   :"<<x<<endl;
    cout<<"int value (x1)  :"<<x1<<endl;
    cout<<"size of 10.5    : "<<sizeof(10.5)<<endl;
    cout<<"size of x       : "<<sizeof(x)<<endl;
    */

    //What is output?
    /*double x = 10;
    cout<<"double value:"<<x<<endl;
    cout<<"size of 10: "<<sizeof(10)<<endl;
    cout<<"size of x   : "<<sizeof(x)<<endl;
*/


    /*
    double d=10.5;
    cout<<"d+5        :"<<d+5<<endl;
    cout<<"size of d+5: "<<sizeof(d+5)<<endl;
    */

    /*
    cout<<5/2<<endl; //output here int [bigger datatype]
    cout<<5.0/2<<endl; //output here double [bigger datatype]
    cout<<(double)5/2<<endl; //output here double [bigger datatype]
*/

    /*double d0 = 5;//small to big >> implicit
    double d1 = 5/2;//
    double d2 = (double)5/2;//
    double d3 = 5/(double)2;//
    cout<<d1 << " - " << d2 << " - " << d3 << " - " << d0/2;//
    */

    /*string str = "123";
    int num = stoi(str);  // Convert string to integer
    cout << "Number: " << num+1 << endl;//124

    double pi = 3.14159;
    string piStr = to_string(pi);  // Convert double to string
    cout << "Pi as string: " << piStr << endl;
    */


  /*
    char ch = 'A';
    //cout<< (int)ch <<endl;
    cout<<5+ch<<endl; //in math operations, implicit casting done to the bigger type
*/


        //6- ASCII (American Standard Code for Information Interchange)
    //a character encoding standard used for representing text
    //Assigns a unique numerical value to each character (128) - (256)

  /*  char ch = 'A';
    cout << "Character: " << ch << ", ASCII value: " << (int)ch << endl;

    int asciiCode = 66;
    cout << "ASCII code: " << asciiCode << ", Character: " << char(asciiCode) << endl;
*/


    return 0;
}
