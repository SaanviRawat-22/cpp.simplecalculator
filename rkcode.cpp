# include <iostream>
# include <cmath>
using namespace std;
int main() {
    cout<<"******!WELCOME TO CALCULATOR!******\n";
    while(true){
    cout<<"CHOOSE THE FUNCTION YOU WANT TO PERFORM:\n     ";
    cout<<"1.ADDITION\n     ";
    cout<<"2.SUBTRACTION\n     ";
    cout<<"3.MULTIPLICATION\n     ";
    cout<<"4.DIVISION\n     ";
    cout<<"5.SQUARE\n     ";
    cout<<"6.ANY POWER OF ANY NUMBER\n     "; 
    cout<<"0.EXIT\n     ";
    int choice;
    cout<<"enter your choice: ";
    cin>>choice;
    if (choice==1){
        int a,b;
        cout<<"enter first number:\n    ";
        cin>>a;
        cout<<"enter second number:\n    ";
        cin>>b;
        cout<<"THE SUM OF THE TWO GIVEN NUMBER IS :\n    "<<(a+b)<<endl;
        
    }else if (choice==2){
        int a,b;
        cout<<"enter first number:\n    ";
        cin>>a;
        cout<<"enter second number:\n    ";
        cin>>b;
        cout<<"THE DIFFERENCE OF THE TWO GIVEN NUMBER IS :\n    "<<(a-b)<<endl;
        


    }else if (choice==3){
         int a,b;
        cout<<"enter first number:\n    ";
        cin>>a;
        cout<<"enter second number:\n    ";
        cin>>b;
        cout<<"THE PRODUCT OF THE TWO GIVEN NUMBER IS :\n    "<<(a*b)<<endl;
        

    }else if (choice==4){
         int a,b;
        cout<<"enter first number:\n    ";
        cin>>a;
        cout<<"enter second number:\n    ";
        cin>>b;
        if (b==0){
            cout<<"DIVISION WITH ZERO IS NOT DEFINED";
        }else {
        cout<<"THE INTEGER DIVISION OR QUOTIENT ON DIVISION OF THE TWO GIVEN NUMBER IS :\n    "<<(a/b)   ;
        cout<<"\nTHE REMAINDER ON DIVISION OF THE TWO GIVEN NUMBER IS :\n    "<<(a%b)   ;
        cout<<"\nTHE DECIMAL DIVISION OF THE TWO GIVEN NUMBER IS :\n    "<<(a/double(b))<<endl;}
        

    }else if (choice==5){
         int a;
        cout<<"enter the number:\n    ";
        cin>>a;
        cout<<"THE SQUARE OF THE GIVEN NUMBER IS :\n    "<<pow(a,2)<<endl;
        
    }else if (choice==6){
        int a,b;
        cout<<"enter the  number:\n    ";
        cin>>a;
        cout<<"enter the power:\n    ";
        cin>>b;
        cout<<"THE VALUE OF THE RAISED POWER IS :\n    "<<pow(a,b)<<endl;

        
    }else if (choice==0){
        cout<<"THANK YOU!!\nPLEASE VISIT AGAIN";
        break;
    }else{
        cout<<"INVALID CHOICE. PLEASE TRY AGAIN.";}
    }
