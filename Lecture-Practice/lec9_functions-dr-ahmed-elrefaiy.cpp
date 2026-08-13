#include <iostream>
using namespace std;


//-------------Functions----------

//1-definition + return types

/*void sayHello(){
    cout<<"Hello"<<endl;
}
int main()
{
    sayHello();
    return 0;
}*/


/*void sayHello(string s){
    cout<<s<<endl;
}
int main()
{
    sayHello("Hello");
    sayHello("World");
    sayHello("Hi");
    return 0;
}*/


/*string sayHello(string s){
    return s;
}
int main()
{
    string s1 = sayHello("Hi");
    cout<<s1;
    return 0;
}*/


/*int sayHello(){
    cout<<"Hello"<<endl;//Hello>>
    return 1;
}
int main()
{
    //int x = sayHello();//1
    //cout<<x;//1
    cout<<sayHello();
    return 0;
}*/


/*int square(int x){
    return x*x;//7*7=49
}
int main()
{
    int x = square(7);
    cout<<x;
    return 0;
}*/

//2-function that sum 2 numbers
/*int sum(int x, int y){
    return x+y;
}
int main()
{
    cout<<sum(5,6);
    return 0;
}*/

//3-prototypes

/*int sum(int, int);
int main()
{
    cout<<sum(5,6);
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}*/



//void test(int)

//4-function overloading
/*int sum(int x, int y){
    return x+y;
}
int sum(double x, int y){
    return (int)x+y;
}
int sum(int x, double y){
    return (int)x+y;
}
double sum(double x, double y){
    return x+y;
}
int sum(int x, int y, int z){
    return x+y+z;
}
int main()
{
    cout<<sum(5,6)<<endl;
    cout<<sum(5.2,6.2)<<endl;
    cout<<sum(5,6,4)<<endl;
    return 0;
}*/

//5-local variables


/*int local(){
    int x = 5;
    int y = 7;
    cout<<x<<endl;//5
}
int main()
{
    int x = 6;
    cout<<x<<endl;//6
    local();//
    cout<<y<<endl;//
    return 0;
}*/



//6-global variables
/*int y = 7;//8
int local(){
    int x = 5;
    y+=1;//8
    cout<<x<<endl;//5
}
int main()
{
    int x = 6;
    cout<<x<<endl;//6
    local();//5
    y+=1;
    cout<<y<<endl;//8
    return 0;
}*/


//7-scope resolution operator
/*int y = 7;
int local(){
    int x = 5;
    y+=1;//8
    cout<<x<<endl;//5
}
int main()
{
    int x = 6;
    cout<<x<<endl;//6
    local();//5
    cout<<y<<endl;//8

    int y=1;
    cout<<y<<endl;//1
    cout<<::y<<endl;//8

    return 0;
}*/


//exam question
/*int y = 7;
int local(){
    int x = 5;
    y+=1;//8
    cout<<x<<endl;//5
    int y=1;//y[block local]=1;
}
int main()
{
    int x = 6;
    cout<<x<<endl;//6
    local();//5
    cout<<y<<endl;//8
    return 0;
}*/

/*int y = 7;
int local(){
    int x = 5;
    int y=1;
    y+=1;//2
    cout<<x<<endl;//5
}
int main()
{
    int x = 6;
    cout<<x<<endl;//6
    local();//5
    cout<<y<<endl;//7
    return 0;
}*/

//8-static variables

/*int test(){
    static int x = 5;
    cout<<x<<endl;
    x++;//8
}
int main()
{
    test();//5
    test();//6
    test();//7
    //cout<<x+1;
    return 0;
}*/
/*
int local(){
    static int x = 5;
    cout<<x<<endl;
    x++;
}
int main()
{
    int x = 1;
    cout<<x<<endl;
    local();
    cout<<x<<endl;


    local();
    cout<<x<<endl;

    return 0;
}
*/

//8-pass by value VS pass by reference
int passByValue(int x){
    cout<<"addres of x from passByValue = " << &x<<endl;
    x+=5;
    return x;
}
void passByReference(int &y){
    cout<<"addres of x from passByReference = " << &x<<endl;
    y+=5;
}
int main()
{
    int x=5;
    int y=10;
    cout<<"addres of x from main = " << &x<<endl;
    passByReference(x);
    cout<<x<<endl;

    x = passByValue(x);
    cout<<x<<endl;
    return 0;
}

//local and global questions
/*int y=10;
if(x==5){
   int z;
   cout<<y;
}*/

