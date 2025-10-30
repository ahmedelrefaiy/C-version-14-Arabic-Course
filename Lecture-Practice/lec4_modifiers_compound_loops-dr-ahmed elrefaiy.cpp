#include <iostream>

using namespace std;

int main()
{

    //double (8 bytes) VS float (4 bytes)
    /*float f  = 3.1254678779;
    double d = 3.12546798779;
    cout << f << endl;
    cout << d << endl;*/



    //Datatype Modifiers: signed - unsigned - short - long - long long
/*
    cout<< "size of int: " << sizeof(int) << " bytes" << endl;
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
    cout<< "size of variable x: " << sizeof(x) << " bytes" << endl;
*/





    //compound assignment operators
/*
    int x=5;
    //x = x + 3;
    x+=3;
    cout << x;//8
*/





    //postfix/prefix ++/--
/*    int x = 5;
    cout<<x << " - " << x++ << " - " << x << endl;
    //    5      -      5        -      6

    x = 5;
    cout<<x << " - " << ++x << " - " << x << endl;
    //    5      -      6        -      6
*/



    //loop (for / while / do-while)
    /*cout<< "loop from for:\n";
    for(int i=1; i<=5; i++){
        cout << i << " hello\n";
    }*/

    /*cout<< "\nloop from while:\n";
    int i = 1;
    while(i<=5){
        cout<< " hello\n";
        i++;
    }*/

    //print step number before hello
    /*cout<< "loop from for:\n";
    for(int i=1; i<=5; i++){
        cout<< " hello\n";
    }

    cout<< "\nloop from while:\n";
    int i = 1;
    while(i<=5){
        cout<< " hello\n";
        i++;
    }*/

    //loop - iterations
    //for - while - do while

    //cout<<"Hello\n";


    //can put incr/decr after body
    /*for(int i=1; i<=5;){
        cout<< i << " hello\n";
        i++;
    }*/

    //for must have 2 statements [init then condition] [one statement mean error]
    /*int i=1;
    for(i<=5;;){
        cout<< i << " hello\n";
        i++;
    }*/


    /*int i=1;
    for(; i<=5;){
        cout<< i << " hello\n";
        i++;
    }*/


    //inifinite [condition here excuted once, you write it in init part]
    /*int i=1;
    for(i<=5;;){
        cout<< i << " hello\n";
        i++;
    }*/

    /*int i=1;
    for(i<=5;i++;){
        cout<< i << " hello\n";
        i++;
    }*/

/*
    for(int i=1; i<=5; i++);
        cout<< " hello\n";
        */


    //variable scope
    /*int i;
    for(i=1; i<=5; i++){
        cout<< " hello\n";
    }
    cout << i;//i visible inside for only
*/


/*

    int i;
    for(i=1; i<=5; i++){
        cout<< " hello\n";
    }
    cout << i;
*/

/*
    int i;
    for(i<=5; i++){
        cout<< " hello\n";
    }
    cout << i;
*/
/*
    int i;
    for(i=1; i<=5; i++;){
        cout<< " hello\n";
    }
    cout << i;
*/


    //-------------------------------practice-------------------------

    //1-5
  /*  for(int i=1; i<=5; i++)
        cout<<i<<"\t";
*/
    //even 1-10-2-10
    /*for(int i=2; i<=10; i+=2)
        cout<<i<<"\t";*/
/*
    for(int i=1; i<=10; i++){
        if(i%2==0)
            cout<<i<<"\t";
    }
*/

    //odd 1-10 / 1-9
    /*for(int i=1; i<=9; i+=2)
        cout<<i<<"\t";*/
/*
    for(int i=1; i<=10; i++){
        if(i%2!=0)
            cout<<i<<"\t";
    }*/

    //1- =========print sum and factor (multiplication) from 1 to 20 ==============
/*
    int sum = 1;
    for(int i = 1; i<=5; i++){
        sum *= i;
    }
    cout<<sum;*/
/*
    sum = 0;
    int i = 1;
    while( i<=20){
        sum += i;
        i++;
    }
    cout<<sum;*/

    //2- =========print sum of even from 1 to 20 using if ==============
    //3- =========print sum of even from 1 to 20 without if ==============

    //4- =========print sum of odd from 1 to 20 using if ==============
    //5- =========print sum of odd from 1 to 20 without if ==============

    //6- =========print sum of even and odd from 1 to 20 using same loop ==============


    return 0;
}
