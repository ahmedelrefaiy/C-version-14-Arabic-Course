#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <limits>
//#include <array>

using namespace std;
int main()
{
    //1- Try to receive more inputs in the same line
    //Delimiter [Enter - Space - Tab]
    /*int x,y;
    cin>>x>>y;
    cout<<"You write the following: "<<x<<" : "<<y;
    */













    //2- More DataTypes:
    //int-double-float-char-string-bool
    //true - false
    //1    - 0
    /*bool x=1;
    //cout<< x << endl;


    int i=5;
    if(1)
        cout<< "passed";*/













    //Modifiers: signed - unsigned - short - long - long long
    /*cout<< "size of int: " << sizeof(int) << " bytes" << endl;
    cout<< "size of float: " << sizeof(float) << " bytes" << endl;
    cout<< "size of double: " << sizeof(double) << " bytes" << endl;
    cout<< "size of char: " << sizeof(char) << " bytes" << endl;
    cout<< "size of bool: " << sizeof(bool) << " bytes" << endl;
    cout<< "size of string: " << sizeof(string) << " bytes" << endl;
    cout<< "size of short: " << sizeof(short) << " bytes" << endl;
    cout<< "size of short int: " << sizeof(short int) << " bytes" << endl;
    cout<< "size of long: " << sizeof(long) << " bytes" << endl;
    cout<< "size of long int: " << sizeof(long int) << " bytes" << endl;
    cout<< "size of long long: " << sizeof(long long) << " bytes" << endl;
    cout<< "size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout<< "size of long double: " << sizeof(long double) << " bytes" << endl;
    cout<< "size of signed: " << sizeof(signed) << " bytes" << endl;
    cout<< "size of unsigned: " << sizeof(unsigned) << " bytes" << endl;
    cout<< "size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;

    unsigned long long int x = 50;
    cout<< "size of variable x: " << sizeof(x) << " bytes" << endl;*/



    //3- Datatype Conversion - Casting

    /*
        double c = 5;
    int i = 5;
    char ch = 'A';
    cout<< "division by 2 for double = " << c/2 << " - type is: " << typeid(c/2).name()<<endl;
    cout<< "division by 2 for int = " << i/2 << " - type is: " << typeid(i/2).name()<<endl;
    cout<< "division by 2 for char = " << ch/2 << " - type is: " << typeid(ch/2).name()<<endl;

    cout<< "char = " << ch << " - type is: " << typeid(ch).name()<<endl;
    cout<< "char converted to int = " << (int)ch << " - type is: " << typeid((int)ch).name()<<endl;
    */

    /*

    char ch = 'A';
    cout<<5+ch; //in math operations, implicit casting done to the bigger type

    short s = 1;
    int x = 2;
    cout<<sizeof(x+s)<<endl;
    cout<<sizeof(s);

    char ch = 65;
    cout<< ch;

    double d1 = 5/2;
    double d2 = (double)5/2;
    double d3 = 5/(double)2;
    cout<<d1 << " - " << d2 << " - " << d3;

    double d = 5.5;
    int x = d/2;
    cout<<x;
    */


    //4- setprecision
    //cout<<setprecision(2)<<fixed<<(double)22/7;

    //5- conditional operator
    //int x = 5>4? 10:5;
    //cout<<x;

    //6- ++/--

    /*int x = 5;
    cout<<x << " - " << x++ << " - " << x << endl;

    x = 5;
    cout<<x << " - " << ++x << " - " << x << endl;*/


    //7- compound assignment operators
  /*  int x=5;
    //x = x + 3;
    x+=3;
    cout << x;
*/


    //8- loop (for-while)
    /*cout<< "loop from for:\n";
    for(int i=1; i<=5;){
        cout<< i << " hello\n";
        i++;
    }

    cout<< "\nloop from while:\n";
    int i = 1;
    while(i<=5){
        cout<< i << " hello\n";
        i++;
    }*/

    //loop - iterations
    //for - while - do while

    //cout<<"Hello\n";

    //------------------lecture 6-------------------------------
    //1- =========print sum and factor (multiplication) from 1 to 20 ==============
    //
    /*int sumE = 0;
    int sumO = 0;
    for(int i = 1; i<=20; i++){
        if(i%2==0){
            sumE += i;
        }
        else{
            sumO += i;
        }
    }
    cout<<"sum of even = "<<sumE <<endl;
    cout<<"sum of odd = "<<sumO <<endl;*/

    /*sum = 0;
    int i = 1;
    while(i<=20){
        sum += i;
        i++;
    }
    cout<<"sum from while = "<<sum <<endl;*/


    //1.1- ============================ variables Scope ===========================


    /*int i=10;
    for(i=1; i<=5; i++){
        cout<<"hi\n";
    }
    cout<< i;


    {
        int x = 10;
    }
    cout<<x;*/


    //1.2- ============================ arithmatic Overflow =======================
    //cout<< INT_MAX<<endl;
    /*unsigned long long int multiple = 1;
    for(int i = 1; i<=20; i++){
        multiple *= i;
    }
    cout<<"multiple = "<<multiple;*/

    /*int x = INT_MAX;
    cout<<"Max value for int = " << x << endl;
    cout<<"Overlow occured = " << x+1 << endl;*/




    //2- ============================ break - continue ============================
    /*for(int i = 1; i<=5; i++){
        if(i==4)
            continue;
        cout<<i<<endl;
    }*/
    //1 2 3 5




    //3- ============= When to use while - receive positive number only =============

    /*int x;
    do{
        cout<<"write positive number: ";
        cin>>x;
    }while(x>0);*/

    /*int x = 1;
    while(x>0){
        cout<<"write positive number: ";
        cin>>x;
    }*/

    /*int x;
    cout<<"write positive number: ";
    cin>>x;
    while(x>0){
        cout<<"you win, write another positive number: ";
        cin>>x;
    }*/



    //4- ============ Calculator Example using for and while to see deference =======
    /*int x,y;
    char ch, again='y';
    while(again=='y'){
        cout<<"Write two enteger numbers and operator form these (+-*\/%)\n";
        cout<<"Split each input by space, after you finish press enter: ";
        cin>>x>>y>>ch;
        if(ch=='+'){
            cout<<"sum = "<<x+y;
        }
        else if(ch=='-'){
            cout<<"subtract = "<<x-y;
        }
        else if(ch=='*'){
            cout<<"multiply = "<<x*y;
        }
        else if(ch=='/'){
            cout<<"division = "<<x/y;
        }
        else if(ch=='%'){
            cout<<"remainder = "<<x%y;
        }
        else{
            cout<<"Wrong operator";
        }

        cout<<"\n\n----------------------------\n";

        cout<<"need another operation? press y or n: ";
        cin>>again;

        while(again!='y' && again!='n'){
            cout<<"uncorrect character, need another operation? press y or n: ";
            cin>>again;
        }
    }

    cout<<">>Great, we are finish now";
    */

    /*int x,y;
    char ch, again; //again hold y or n for yes and no

    do{
        cout<<"write two int num and operator(+-*\/%),\nsplitted by space, use enter at the last: ";
        cin>>x>>y>>ch;
        if(ch=='+'){
            cout <<"result= "<<x+y;
        }
        else if(ch=='-'){
            cout <<"result= "<<x-y;
        }
        else if(ch=='*'){
            cout <<"result= "<<x*y;
        }
        else if(ch=='/'){
            cout <<"result= "<<x/y;
        }
        else if(ch=='%'){
            cout <<"result= "<<x%y;
        }
        else {
            cout <<"wrong operator";
        }


        //ask user for again?
        cout<<"\nneed another operation? y or n: ";
        cin>> again;

        //validate again response
        while(again!='y' && again!='n'){
            cout<<"Error respond with y or n only: ";
            cin>> again;
        }

    }while(again=='y');*/


    //receive two integer number and operator(+-*/%) then calculate result
    //and ask user to repeat this process or not

    /*int x,y;
    char ch,again;

    do{
        cout<<"write two interger numbers and operator (+-*\/%),\nuse space after each input, and enter at the last: ";
        cin>>x>>y>>ch;

        if(ch=='+'){
            cout<<"result= "<<x+y;
        }
        else if(ch=='-'){
            cout <<"result= "<<x-y;
        }
        else if(ch=='*'){
            cout <<"result= "<<x*y;
        }
        else if(ch=='/'){
            cout <<"result= "<<x/y;
        }
        else if(ch=='%'){
            cout <<"result= "<<x%y;
        }
        else {
            cout <<"wrong operator";
        }

        cout<<"\nneed another operation? write y for yes and n for no: ";
        cin>>again;

        //validation
        while(again!='y' && again !='n'){
            cout<<"error, write only (y) for yes and (n) for no: ";
            cin>>again;
        }

    }while(again=='y');*/

    //recieve
    //calculate
    //ask? again? y or n

















    //receive
    //calculate
    //again? y or n

    //5- do - while


    //receive
    //calculate
    //again? y / n



    //6- read string
    /*string s;
    //cin>>s;
    getline(cin, s);
    cout<<"you write: " << s;*/


    //----------------Lecture 7---------------------

    //1- Input buffer
    /*int x,y;
    cout<<"first: ";
    cin >> x;
    cout<<"you write: "<<x<<endl;
    cout<<"second: ";
    cin>>y;
    cout<<"you write: "<<y<<endl;*/

    /*string s1,s2;
    cout<<"first: ";
    cin >> s1;
    cout<<s1<<endl;
    cin.sync();
    cout<<"second: ";
    getline(cin, s2);
    cout<<s2<<endl;*/

    /*string s1,s2;
    cout<<"first: ";
    cin >> s1;
    cout<<s1<<endl;
    cin.sync();
    cout<<"second: ";
    cin>> s2;
    cout<<s2<<endl;*/

    //2-Stream manipulators:
    //to format numbers--> endl, setw, setprecision, fixed
    //functions or objects that modify input/output stream behaviour
    //format input or output
    //require #include<iomanip>


    //2.1- ws --> remove leading whitespaces

    /*string s1,s2;
    cout<<"first: ";
    cin >> s1;
    cout<<s1<<endl;
    cout<<"second: ";
    cin>> ws;
    getline(cin, s2);
    cout<<s2<<endl;*/

    //2.2- setw(n) --> specifies min num of chars to display the next value
    //default--> align left - setw --> align right
    //2.3/2.4- left - right - setfill

    /*cout<<"Ahmed       "<<30<<endl;
    cout<<"Khaled      "<<25<<endl;
    cout<<"Ali         "<<20<<endl;

    cout<<"*********************"<<endl;

    cout<<left<<setw(12)<<"Ahmed"<<30<<endl;
    cout<<left<<setw(12)<<"Khaled"<<25<<endl;
    cout<<left<<setw(12)<<"Ali"<<20<<endl;*/




    /*for(int i=1;i<=1000000;i*=10)
        cout<<i<<"x"<<endl;
    for(int i=1;i<=1000000;i*=10)
        cout<<setfill('*')<<left<<setw(7)<<i<<"x"<<endl;

        cout<<setfill(' ')<<right;
        cout<<setw(12)<<"H";*/
    /*for(int i=1;i<=1000000;i*=10)
        cout<<left<<setw(7)<<i<<endl;
    for(int i=1;i<=1000000;i*=10)
        cout<<right<<setw(7)<<i<<endl;*/

    /*for(int i=10;i<=20;i++)
        cout<<"value="<<setw(7)<<i<<endl;*/
    //*
    //**
    //***
    //****
/*    for(int i=1;i<=5;i++)
        cout<<setfill('*')<<setw(i)<<"*"<<endl;

    cout<<"-------------------------\n";*/
    //cout<<string(5,'*');
    //using string
    /*for(int i=1;i<=5;i++)
        cout<<string(i, '*')<<endl;*/

    //   *
    //  **
    // ***
    //****

    /*cout<<setfill('*');
    cout<<setw(5)<<"Z"<<endl;
    cout<<setfill(' ');
    cout<<setw(5)<<"H"<<endl;*/








    /*cout<<setfill(' ');
    for(int i=1;i<=4;i++)
        cout<<setw(4)<<string(i,'*')<<endl;*/


    //2.5- setprecision(3) --> number of digits for displaying floating-point numbers
    //Without fixed --> total number of significant digits
    //With    fixed --> total number of fractional digits
  /*  double pi = 3.146592653589793;
    //3.147 >> fixed - (3)
    //3.15 >> (3)
    cout << "Default precision: " << pi << endl;
    cout << "setprecision(3): " << setprecision(3) << pi << endl;
    cout << "Fixed + setprecision(3): " << fixed << setprecision(3) << pi << endl;
*/

    //2.6- manipulator to make bool print 1 or true / 0 or false
    /*cout<<boolalpha<<true<<endl;
    cout<<false<<endl;
    cout<<noboolalpha;
    cout<<"try again: "<< true;*/


    //3-Logical operators--> && || !
    /*cout<<boolalpha;
    cout<<"true&&false= "<<(true&&false)<<endl;
    cout<<"true||false= "<<(true||false)<<endl;
    cout<<"!true= "<<(!true)<<endl;
    int x;
    cin>>x;
    //if(!(x>10 && x%2==0))
    if(x<=10 || x%2!=0)
        cout<<"you win";*/


    //4-conditional (ternary) operator--> ?:
    //int x = 10;
    //int y = x==10?6:-1;
    //cout<<y;

    /*int x = 10;
    int y;
    if(x==10)
        y=6;
    else
        y=-1;*/


    /*if(int x = 5)
        cout<<x;*/




    //4- left to right / right to left operators [ch.5 - page.60]




    //5- Datatype Conversion - Casting

    //implicit VS explicit
    /*bool b = 10;
    cout<<"bool value: "<<b<<endl;
    cout<<"size of 10: "<<sizeof(10)<<endl;
    cout<<"size of b : "<<sizeof(b)<<endl;*/


    /*double d = 6000000000;
    int x = (int)d;//c-type casting
    cout<<"int value   :"<<x<<endl;
    cout<<"size of 10.5: "<<sizeof(10.5)<<endl;
    cout<<"size of x   : "<<sizeof(x)<<endl;*/


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

    //cout<<(double)5/2;

    /*double d0 = 5;//small to big >> implicit
    double d1 = 5/2;//2
    double d2 = (double)5/2;//2.5
    double d3 = 5/(double)2;//2.5
    cout<<d1 << " - " << d2 << " - " << d3 << " - " << d0/2;//2.5*/

    /*string str = "123";
    int num = stoi(str);  // Convert string to integer
    cout << "Number: " << num+1 << endl;//124

    double pi = 3.14159;
    string piStr = to_string(pi);  // Convert double to string
    cout << "Pi as string: " << piStr << endl;*/



    /*char ch = 'A';
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

    /*int x,y;
    cin>>x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin>>y;
    cout<<x<<":"<<y;*/


    //------------------Tricky questions----------------
    //cout<<true || cout<<false;
    //cout<<true && cout<<false;


    //---------------------Lecture 8-----------------------
    //---------------------  Array  -----------------------
    //Fixed-size collections consisting of data items of the same type
    //contiguous group of memory locations that all have the same type
    //variable name + position = one place from array
    //position called index or subscript / start with 0
    //Syntax:
    //datatype variablename[size];
    //or
    //array<datatype,size> variablename;

    /*int arr[5];

    cout<<"INT size   "<<sizeof(int) << endl;//4
    cout<<"Array size "<<sizeof(arr) << endl;//20
    */


    //int x = 5;
    /*int x = {5};
    int arr[] = {1,2,3,4,5};

    cout<<x<<endl;
    cout<<arr<<endl;*/







    /*int x;
    cout<<"X value = "<<x<<endl;
    cout<<"Array values = "<<arr<<endl;*/







    //int arr[] = {1,2,3,4,5,6};//0 1 2 3 4
    //20
    //4
    /*int arrSize = sizeof(arr)/sizeof(int);
    for(int i=0;i<=arrSize-1; i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }

    for(int i=0;i<=arrSize-1; i++){
        cin>>arr[i];
    }

    for(int i=0;i<=arrSize-1; i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }*/









    /*for(int i=0;i<arrSize; i++){
        cin>>arr[i];
    }


    for(int i=0;i<arrSize; i++)
        cout<<i<<" : "<<arr[i]<<endl;
*/

    //int x={5};

    /*int x={5};
    cout<<"variable x = "<<x<<" - "<<&x<<endl;
*/

    //cout<<"variable arr2 = "<<arr2<<" - "<<&arr2 << " - " << &arr2[0]<< " - " << &arr2[1]<<endl;





    //address
    /*int arr2[3]={1,2,3};

    cout<<arr2<<endl<<endl;
    for(int i=0; i<3; i++)//0 1 2
        cout<<&arr2[i]<<endl;
*/

    /*int x = 10;
    cout<<x<<endl;
    cout<<&x<<endl;*/










    /*char chs[5];
    for(int i=0;i<5;i++)
        cin>>chs[i];
    for(int i=0;i<5;i++)
        cout<<chs[i];

    char ch;
    cin>>ch;
    cout<<ch;*/

    //sum, multiple

    /*int arr[5];
    cout<<std::size(arr);*/















    /*int arr3[4][3];
    for(int r=0; r<4; r++){
        for(int c=0; c<3; c++){
           //cout<<arr3[r][c]<<"\t";
           cin>>arr3[r][c];
        }
    }

    for(int r=0; r<4; r++){
        for(int c=0; c<3; c++){
           cout<<arr3[r][c]<<"\t";
           //cin>>arr3[r][c];
        }
        cout<<endl;
    }*/



    //receive student 4 subject's degrees, and print average

  /*  const int columns = 4;//constant
    const int rows = 3;
    int degrees[rows][columns];// [3][4]

    for(int r=0; r<rows; r++){
        cout<<"enter degrees of student "<<(r+1)<<" splitted by space: ";
        for(int c=0; c<columns; c++){
            //cout<<"enter degree of subject "<<(c+1)<<": ";
            cin>>degrees[r][c];
        }
    }

    for(int r=0; r<rows; r++){
        int sum = 0;
        for(int c=0; c<columns; c++){
            sum+=degrees[r][c];
        }
        cout<<"Average of student " << (r+1) << " = "<<(double)sum/columns <<endl;
    }
*/



















    //
    //int arr[3];//c style
    /*array<array<double, 4>, 5> arr;//class template

    cout<<arr.size();*/

    return 0;
}




    //   *
    //  ***
    // *****
    //*******
