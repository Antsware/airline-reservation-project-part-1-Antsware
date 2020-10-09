/*
    Descritption:  Allows the user to deposit into one
    of his/her accounts

    Class: COP3014CE_502_2208
    Date Due: 10/11/2020

    Author: Anthony Williams
                                                            */
//Libraries
#include <iostream>  //users interaction
#include <fstream> //read and write to file
#include <string>  //to store names and passwords
#include <cmath>   //to do calculations
using namespace std;

//update
int update(int checkAccount, int saveAccount, int amount, char accountType, string customer)
{
    switch (accountType)
    {
        case 's':
        saveAccount -= amount;
            cout << "\n" << customer << "\t Checkings: " << checkAccount;
            cout << "\n\t\tSavings: " << saveAccount << endl;
            cout << "\nYou have quit your session" << endl;
    return saveAccount;
            break;
        case 'c':
    checkAccount -= amount;
            cout << "\n" << customer << "\t Checkings: " << checkAccount;
            cout << "\n\t\tSavings: " << saveAccount << endl;
            cout << "\nYou have quit your session" << endl;
            return checkAccount;
            break;
            
        default:
            cout << "Incorrect input";
            break;
    }
    return checkAccount;
    return saveAccount;
}
            


int main()
{

    //variables
    string Fname, Lname, password, userName, customer;
    int saveAccount, checkAccount, amount;
    char accountType;
   // ifstream infile;
   // ofstream outfile;
   // ifstream infile(filename.c_str());
    
    // Welcome
    cout << "Welcome to out banking system!" << endl;
    
    //ask for username
     cout << "\n\t\tHello, please enter your userName: ";
     cin >> userName;
     
     // ask password
     cout << "\n\nPlease enter your password: ";
     cin >> password;
    
    //desicion on who it is
    if(userName == "rbrown" && password == "blue123")
    {
        customer = "Robert, Brown";
        saveAccount = 2500.00;
        checkAccount = 35.00;
        
        cout << customer << "\t Checkings: " << checkAccount << "\t\tSavings: " << saveAccount << endl;
        do
        {
            
        //whisch account
        cout << "\nChoose which account you would like to withdraw" << endl;
        cout << "('c' for Checkings and 's' for Savings or 'q' to Quit): " << endl;
        cin >> accountType;
            
            if(accountType == 'q')
             {
                 cout << customer << "\t Checkings: " << checkAccount;
                 cout << "\n\t\tSavings: " << saveAccount << endl;
                 cout << "\nYou have quit your session" << endl;
                 return 0;
             }
            
        //input amount
        cout << "\n\tEnter Withdraw amount: ";
        cin >> amount;
            
            //if negative amount
            if(amount > checkAccount && accountType == 'c')
            {
                cout << "INSUFFICIENT FUNDS";
                cout << "\n" << customer << "\t Checkings: " << checkAccount;
                cout << "\n\t\tSavings: " << saveAccount << endl;
                cout << "\nYou have quit your session" << endl;
                return 0;
                
            }
            
            else if(amount > saveAccount && accountType == 's')
            {
                cout << "INSUFFICIENT FUNDS";
                cout << "\n" << customer << "\t Checkings: " << checkAccount;
                cout << "\n\t\tSavings: " << saveAccount << endl;
                cout << "\nYou have quit your session" << endl;
                return 0;
            }
            
            else
            {
            //update checking and savings
            update(checkAccount,  saveAccount,  amount, accountType, customer);
            checkAccount =  update(checkAccount,  saveAccount,  amount, accountType, customer);
            saveAccount = update(checkAccount,  saveAccount,  amount, accountType, customer);
            }
            
        }
        while(accountType != 'q');
        
        
        
        
        
    }
    //if faliure
    else
    {
        cout << "Passwor/Username is incorrect" << endl;
        
        
       
    }
    
        
    


  return 0;
}


