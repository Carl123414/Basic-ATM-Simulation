//This program simulates an ATM 
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //Declare and initialize the variables needed
    double amount, balance = 0;
    int choice;

    //Set to two decimal places
    cout << fixed << setprecision(2);

    //Loops the menu and switch case
    do{
        //Display Menu
        cout << "=====ATM MACHINE=====" << endl;
        cout << endl;
        cout << "1. Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Quit" << endl;
        cout << endl;
        cout << "Enter a Number" << endl;

        //Get choice
        cin >> choice;

        //Clear the terminal
        system("CLS");

        //Evaluate option
        switch(choice){

        //Case 1 Balance
        case 1:
            cout << "Your balance is: Php." << balance << endl;
            cout << endl;
            break;

        //Case 2 Deposit
        case 2:
            cout << "How much would you like to deposit? Php.";
            cin >> amount;
            cout << endl;
            balance += amount;
            system("CLS");
            cout << "You've succesfully deposited Php." << amount << endl;
            cout << endl;
            break;

        //Case 3 Withdraw
        case 3:
            cout << "How much would you like to withdraw? Php.";
            cin >> amount;
            cout << endl;
            if(balance - amount >= 0){
                balance -= amount;
                system("CLS");
                cout << "You've succesfully withdrew Php." << amount << endl;
            }
            else
                cout << "Insufficient balance" << endl;
                cout << endl;
            break;

        //Case 4 Exit
        case 4:
            cout << "Exiting..." << endl;
            break;

        //Default Invalid Selection
        default:
            cout << "Invalid selection. Please try again" << endl;

        }

    //Ends the loop if the condition is false
    }while(choice != 4);

return 0;
}
