#include<iostream>
using namespace std;

int main(){
    /*This program prompts the user to enter his or her amount and also his status and 
    calculates the total taxable income basing on his or her status depending on the given 
    amount he or she entered*/
    
    int amount , status , tax;

    cout << "please enter your amount "<<endl;
    cin>>amount;

    cout<<"here is you where you fill your status , if single , enter 0 , if married filling jointly or qualified widow(er)"<<endl;
    cout<<"if married filing separetely enter 2 , if the head of household enter 3"<<endl;
    cout<<"the above are the options so please enter that qualifies you"<<endl;
    cin>>status;

    if(status == 0){
        if(amount > 0 && amount <= 8350){
            tax = 0.1 * amount;
            cout<<tax<<endl;
        }
        if(amount  > 8351 && amount <= 33950){
              tax = 8350 * 0.1 + (amount - 8350) * 0.15;
              cout<<tax<<endl;
        }
    if(amount > 33951 && amount <= 82250){
            tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25;
            cout<<tax<<endl;
    }    
    if(amount > 82251 && amount <= 171550){
        tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25 + (amount - 8350-33950-82250)*0.28;
        cout<<tax;
    }
    if(amount > 171551 && amount <= 372950){
         tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25 + (amount - 8350-33950-82250)*0.28+(amount - 8350-33950-82250-171550)*0.33;
         cout<<tax;
    }
    if(amount > 372951 ){
        tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25 + (amount - 8350-33950-82250)*0.28+(amount - 8350-33950-82250-171550)*0.33 + (amount - 8350 -33950-82250-171550-372950)*0.35;
        cout<<tax;
    }

    }

    if(status == 1){
if(amount > 0 && amount <= 16700){
            tax = 0.1 * amount;
            cout<<tax<<endl;
        }
        if(amount  > 16701 && amount <= 67900){
              tax = 16700 * 0.1 + (amount - 16700) * 0.15;
              cout<<tax<<endl;
        }
    if(amount > 67901 && amount <= 137050){
            tax = 16700 * 0.1 + (amount - 16700) * 0.15+(amount - 16700 - 67900)*0.25;
            cout<<tax<<endl;
    }    
    if(amount > 137051 && amount <= 208850){
        tax = 16700 * 0.1 + (amount - 16700) * 0.15+(amount - 16700 - 67900)*0.25 + (amount - 16700-67900-137050)*0.28;
        cout<<tax;
    }
    if(amount > 208851 && amount <= 372950){
         tax = 16700 * 0.1 + (amount - 16700) * 0.15+(amount - 16700 - 67900)*0.25 + (amount - 16700-67900-137050)*0.28+(amount - 16700-67900-137050-208850)*0.33;
         cout<<tax;
    }
    if(amount > 372951 ){
        tax = 16700* 0.1 + (amount - 16700) * 0.15+(amount - 16700 - 67900)*0.25 + (amount - 16700-67900-137050)*0.28+(amount - 16700-67900-137050-208850)*0.33 + (amount - 16700 -67900-137050-208850-372950)*0.35;
        cout<<tax;
    }

    }

    if(status == 2){
        if(amount > 0 && amount <= 8350){
            tax = 0.1 * amount;
            cout<<tax<<endl;
        }
        if(amount  > 8351 && amount <= 33950){
              tax = 8350 * 0.1 + (amount - 8350) * 0.15;
              cout<<tax<<endl;
        }
    if(amount > 33951 && amount <= 68525){
            tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25;
            cout<<tax<<endl;
    }    
    if(amount > 68526 && amount <= 104425){
        tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25 + (amount - 8350-33950-68525)*0.28;
        cout<<tax;
    }
    if(amount > 104426 && amount <= 186475){
         tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25 + (amount - 8350-33950-68525)*0.28+(amount - 8350-33950-68525-104425)*0.33;
         cout<<tax;
    }
    if(amount > 186476 ){
        tax = 8350 * 0.1 + (amount - 8350) * 0.15+(amount - 8350 - 33950)*0.25 + (amount - 8350-33950-68525)*0.28+(amount - 8350-33950-68525-104425)*0.33 + (amount - 8350 -33950-68525-104425-186475)*0.35;
        cout<<tax;
    }
    }

    if(status == 3){
        if(amount > 0 && amount <= 11950){
            tax = 0.1 * amount;
            cout<<tax<<endl;
        }
        if(amount  > 11951 && amount <= 45500){
              tax = 11950 * 0.1 + (amount - 11950) * 0.15;
              cout<<tax<<endl;
        }
    if(amount > 45501 && amount <= 117450){
            tax = 11950 * 0.1 + (amount - 11950) * 0.15+(amount - 11950 - 45500)*0.25;
            cout<<tax<<endl;
    }    
    if(amount > 117451 && amount <= 190200){
        tax = 11950 * 0.1 + (amount - 11950) * 0.15+(amount - 11950 - 45500)*0.25 + (amount - 11950-45500-117450)*0.28;
        cout<<tax;
    }
    if(amount > 190201 && amount <= 372950){
    tax = 11950 * 0.1 + (amount - 11950) * 0.15+(amount - 11950  - 45500)*0.25 + (amount - 11950-45500-117450)*0.28+(amount - 11950-45500-117450-190200)*0.33;
         cout<<tax;
    }
    if(amount > 372951 ){
        tax = 11950 * 0.1 + (amount - 11950) * 0.15+(amount - 11950 - 45500)*0.25 + (amount - 11950-45500-117450)*0.28+(amount - 11950-45500-117450-190200)*0.33 + (amount - 11900 -45500-117450-190200-372950)*0.35;
        cout<<tax;
    }

    }
}