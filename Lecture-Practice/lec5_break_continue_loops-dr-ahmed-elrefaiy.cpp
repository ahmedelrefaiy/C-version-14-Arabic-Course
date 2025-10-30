#include <iostream>

using namespace std;

int main()
{
    //============================ arithmatic Overflow =======================
    //cout<< INT_MAX<<endl;

    /*unsigned long long int multiple = 1;
    //int multiple = 1;
    for(int i = 1; i<=20; i++){
        multiple *= i;
    }
    cout<<"multiple = "<<multiple;
    */



    //============================ continue VS break ============================



    //Write C++ program to print num from 1 : 20
    //and ignore any number divisible by 5
    //continue
    /*for(int i = 1; i<=20; i++){
        if(i%2!=0)//odd values
            continue;
        if(i>0)//map even values
            break;
        cout << i << " ";
    }*/

    /*for(int i = 1; i<=20; i++){
        if(i%2!=0)
            continue;
        if(i>=0)
            break;
        cout << i << endl;
    }*/





    //write C++ program to print num from 1 : 20, if you reach to 10 break





    //============= When to use for, while, do-while
    /*int x=1;
    while(x>0){
        cout << "write num: ";
        cin >> x;
        if(x>0)
            cout << "win \n";
        else
            cout << "failed \n";
    }*/







    /*int x=11;//work around
    while(x>0){
        cout << "write number: ";
        cin >> x;
        if(x>0)
            cout << "win\n";
        else
            cout << "failed\n";
    }
    */



/*
    int x;
    int count=1;
    do{
        cout << "write number: ";
        cin >> x;
        if(x>0)
            cout << "win" << endl;
        else
            cout << "failed" << endl;
        count++;
    }while(x>0&&count>4);
*/
    /*int x = 1;//why begin x = 2?
    while (x>0){
        cout << "write positive number: ";
        cin >> x;
        if(x>0)
            cout << "win" << endl;
        else
            cout << "failed" << endl;
    }*/

    //Use while to receive positive number only =============
    /*int x;
    cout<<"write positive number: ";
    cin>>x;
    while(x>0){
        cout<<"write positive number: ";
        cin>>x;
    }
    cout<<"Bad! i will exit";
    */










    //Enhance previous code using one cout and cin (don't repeat)
    /*int x = 1;
    while(x>0){
        cout<<"write positive number: ";
        cin>>x;
    }
    cout<<"Bad! i will exit";
    */








    //============= Use while,break,continue to receive positive number only =============
    /*
    int x;
    while(true){
        cout<<"write positive number: ";
        cin>>x;
        //if(x>0)
        //    continue;
        //else
          if(x<=0)
             break;
    }
    cout<<"Bad! i will exit";
    */



    //4- ============ Calculator Example using while / do-while to see deference =======
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












    //========================= nested loops ==============================
    /*for(int r=1;r<=4;r++){
        for(int c=r;c<=4; c++){
            cout<<"*";
        }
        cout << endl;
    }
    */


    /*for(int r=1;r<=5;r++){
        for(int c=1; c<=r; c++){
            cout << "*";
        }
        cout << endl;
    }
    */
    /*for(int r=5;r>=1;r--){
        for(int c=r; c>=1; c--){
            cout << "*";
        }
        cout << endl;
    }*/






    return 0;
}
