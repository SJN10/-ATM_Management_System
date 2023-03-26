#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class CreateAccount
{
private:
    string name;
    int adhar;
    string address;
    int pin;
    string DOB;
    int decide1;

public:
    void bankName()
    {
        cout << "Where you want to create an account :: " << endl
             << endl;
        cout << "1. SBI" << endl;
        cout << "2. AXIS Bank" << endl;
        cout << "3. Allahabad" << endl;
        cout << "4. HDFC" << endl;
        cout << "5. Bandhan Bank" << endl;
        cout << ">> ";
        cin >> decide1;
        if (decide1 == 1 or decide1 == 2 or decide1 == 3 or decide1 == 4 or decide1 == 5)
        {
            create();
        }
    }
    string printBankName()
    {
        switch (decide1)
        {
        case 1:
            return "SBI";
            break;
        case 2:
            return "AXIS Bank";
            break;
        case 3:
            return "Allahabad";
            break;
        case 4:
            return "HDFC";
            break;
        case 5:
            return "Bandhan Bank";
            break;
        }
    }
    void create()
    {
        cout << "Enter your name :: ";
        cin >> name;
        cout << "Enter Your Address :: ";
        cin >> address;
        cout << "Enter the PIN code :: ";
        cin >> pin;
        cout << "Enter Your Date of Birth :: ";
        cin >> DOB;
        cout << "Enter Your Adhar Number :: ";
        cin >> adhar;
        cout << endl
             << endl;
        string bank = printBankName();
        cout << "^^^^^^^^^^^^^^^^^^Welcome to  " << bank << " Service^^^^^^^^^^^^^^^^" << endl;
        cout << "\tYour account has been created Successfully" << endl
             << endl;
    }
};
class ATM_CARD
{
private:
    string branch;
    int accNum;
    string name2;
    string address;
    string DOB;

public:
    void want_ATM()
    {
        cout << "1. Apply for an ATM" << endl;
        cout << "2. Already have an ATM CARD" << endl;
        int decide2;
        cout << ">> ";
        cin >> decide2;
        switch (decide2)
        {
        case 1:
            ATMApply();
            break;
        case 2:
            cout << "Show Debit Card Details (Y/N)" << endl;
            string choose1;
            cout << ">> ";
            cin >> choose1;
            if (choose1 == "Y")
            {
                ATM_Card_Details();
            }
            if (choose1 == "N")
            {
                return;
            }
            break;
        }
    }
    void ATMApply()
    {
        cout << endl;
        cout << "!!!!!!!!!!!!!!!!!    Application for Debit Card     !!!!!!!!!!!!!!!!!!!!!!!" << endl
             << endl;
        cout << "Enter The Branch :: ";
        cin >> branch;
        cout << "Enter The Account Number :: ";
        cin >> accNum;
        cout << "Enter Your Name :: ";
        cin >> name2;
        cout << "Your Address :: ";
        cin >> address;
        cout << "Date Of Birth :: ";
        cin >> DOB;
        cout << endl;
        cout << "Type of Account" << endl
             << endl;
        cout << "1. Savins" << endl;
        cout << "2. Current" << endl;
        int choose;
        cout << ">> ";
        cin >> choose;
        cout << endl;
        cout << " SUBMIT  (Y/N)" << endl
             << endl;
        string choose5;
        cout << ">> ";
        cin >> choose5;
        cout << endl;
        cout << "YOUR DEBIT CARD HAS BEEN CREATED !!!!!!!!" << endl
             << endl;
        cout << "Show Debit Card Details ?? (Y/N)" << endl;
        string choose2;
        cout << ">> ";
        cin >> choose2;
        if (choose2 == "Y")
        {
            ATM_Card_Details();
        }
        if (choose2 == "N")
        {
            return;
        }
    }
    void ATM_Card_Details()
    {
        cout << endl;
        cout << "Card Holder Nmae :: SOURAV" << endl;
        cout << "Your Card Number is :: 458483838483883" << endl;
        cout << "Expiary Date :: 26/9" << endl;
        cout << "CVV :: 111" << endl
             << endl;
    }
};
class BANK : CreateAccount, ATM_CARD
{
public:
    void account()
    {
        cout << "**********************************" << endl;
        cout << "          W E L C O M E          " << endl;
        string decide;
        cout << "1. DO you have a BANK ACCOUNT ? (Y/N)" << endl;
        cout << ">> ";
        cin >> decide;
        if (decide == "N")
        {
            cout << "you Don't have an account . Create a new one" << endl
                 << endl;
            bankName();
        }
        if (decide == "Y")
        {
            cout << endl;
            accountDetails();
        }
    }
    void accountDetails()
    {
        string name1;
        cout << "Show us your Full Signature :: " << endl;
        cin >> name1;
        cout << endl;
        cout << "YOUR ACCOUNT DETAILS" << endl;
        cout << "Name  :: SOURAV" << endl;
        cout << "Account Created on 05-03-2022" << endl;
        cout << "Your Account Number :: 1234567890" << endl;
        cout << "Your Bank Balance :: 2000" << endl
             << endl;
    }
};

class Transaction_History : CreateAccount
{
private:
    string name3;
    int acc;
    int money;
    unordered_map<string, string> oneDay = {{"Last_Day ::", "90_Rs_to_FPS"}};
    unordered_map<string, string> oneMonth = {{"Last_Day ::", "90_Rs_to_FPS"}, {"10 Days ago ::", " 150_Rs_to_T-point_Shop"}, {"25 Days ago :: ", "500 send to Sourav"}};
    unordered_map<string, string> threeMonth = {{"Last_Day ::", "90_Rs_to_FPS"}, {"10 Days ago ::", " 150_Rs_to_T-point_Shop"}, {"25 Days ago :: ", "500 send to Sourav"}, {"1 month ago::", " 100 RS to CITY DHABA"}, {"2 months ago ::", "8000 for hostel fees"}, {"2.5 months ago::", " 10 rupees in cafe"}};
    unordered_map<string, string> sixMonth = {{"Last_Day ::", "90_Rs_to_FPS"}, {"10 Days ago ::", " 150_Rs_to_T-point_Shop"}, {"25 Days ago :: ", "500 send to Sourav"}, {"1 month ago::", " 100 RS to CITY DHABA"}, {"2 months ago ::", "8000 for hostel fees"}, {"2.5 months ago::", " 10 rupees in cafe"}, {"3 months ago ::", " 150_Rs_to_T-point_Shop"}, {"5 months ago::", " Goldighi Mall"}};

public:
    void makeTransaction()
    {
        cout << endl;
        int balance = 2000;
        cout << "Receipent Name :: ";
        cin >> name3;
        cout << "Receipent Account Number :: ";
        cin >> acc;
        cout << "Amount :: ";
        cin >> money;
        if (money <= 2000)
        {
            cout << endl;
            cout << "Money Has Been Sent" << endl
                 << endl;
            balance = balance - money;
            oneDay.insert({name3, "just now"});
            oneMonth.insert({name3, "just now"});
            threeMonth.insert({name3, "just now"});
            sixMonth.insert({name3, "just now"});
        }
        if (money > 2000)
        {
            cout << "Transiction failed !!!!! You Don't have enough money in Your Account" << endl;
        }
    }
    void transaction()
    {
        cout << endl;
        cout << "1. Show transictions of previous Day" << endl;
        cout << "2. Show transictions of last month" << endl;
        cout << "3. Show transictions of last Three month" << endl;
        cout << "4. Show transictions of last six Month" << endl;
        int choose3;
        cout << ">> ";
        cin >> choose3;
        cout << endl;
        switch (choose3)
        {
        case 1:
            for (auto x : oneDay)
                cout << x.first << " " << x.second << endl
                     << endl;
            break;
        case 2:
            for (auto y : oneMonth)
                cout << y.first << " " << y.second << endl
                     << endl;
            break;
        case 3:
            for (auto z : threeMonth)
                cout << z.first << " " << z.second << endl
                     << endl;
            break;
        case 4:
            for (auto p : sixMonth)
                cout << p.first << " " << p.second << endl
                     << endl;
            break;
        }
    }
};
class Withdraw_Deposit : Transaction_History
{
private:
    int anotherTransaction;
    int balance = 2000;
    int amountToWithDraw;
    int amountToDeposit;

public:
    void choose()
    {
        int choice;
        cout << "\nEnter any option to be served!\n"
             << endl;
        cout << "1. Widthdraw Money" << endl;
        cout << "2. Deposit Money" << endl;
        cout << ">> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            withdraw();
            break;
        case 2:
            deposit();
            break;
        }
    }
    void Mybalance()
    {
        cout << "Your bank amount balance is: " << balance << endl;
        cout << "Do you want another transaction?\nPress 1 to proceed and 2 to exit \n"
             << endl;
        cout << ">> ";
        cin >> anotherTransaction;
        if (anotherTransaction == 1)
            choose();
        else
        {
            return;
        }
    }
    void withdraw()
    {
        cout << "\nPlease enter amount to withdraw: ";
        cin >> amountToWithDraw;
        if (amountToWithDraw > balance)
        {
            cout << "There is no insufficient funds in your account" << endl;
            cout << "Do you want another transaction?\nPress 1 to proceed and 2 to exit" << endl;
            cout << ">> ";
            cin >> anotherTransaction;
            if (anotherTransaction == 1)
                choose();
        }
        else
        {
            balance -= amountToWithDraw;
            cout << "You have withdrawn $" << amountToWithDraw << ".00 and you balance is $" << balance << ".00" << endl;
            cout << "Do you want another transaction?\nPress 1 to proceed and 2 to exit \n"
                 << endl;
            cout << ">> ";
            cin >> anotherTransaction;
            if (anotherTransaction == 1)
                choose();
        }
    }

    void deposit()
    {
        cout << "\nPlease enter amount to deposit: ";
        cin >> amountToDeposit;
        balance += amountToDeposit;
        cout << "Thank you for depositing, new balance is $" << balance << ".00" << endl;
        cout << "Do you want another transaction?\nPress 1 to proceed and 2 to exit\n"
             << endl;
        cout << ">> ";
        cin >> anotherTransaction;
        if (anotherTransaction == 1)
            choose();
    }
};
class ATM_CARD_LOST : ATM_CARD, Withdraw_Deposit
{
public:
    void block()
    {
        cout << endl;
        cout << "1. Block Your Debit Card (Y/N)" << endl;
        string close;
        cout << ">> ";
        cin >> close;
        if (close == "Y")
        {
            cout << "Your Card has been blocked" << endl
                 << endl;
            cout << "1. Want to create a new Debit Card with different Details ??" << endl;
            cout << "2. Want to create a new Debit Card with same Details ??" << endl;
            int choose4;
            cout << ">> ";
            cin >> choose4;
            cout << endl;
            switch (choose4)
            {
            case 1:
                cout << endl;
                new_Details();
                cout << "Debit Card Issued" << endl
                     << endl;
                break;
            case 2:
                cout << "Debit Card Issued with the same detais as Before." << endl
                     << endl;
                break;
            }
        }
    }
    void new_Details()
    {
        ATMApply();
    }
};
int main()
{
    cout << endl
         << endl;
    BANK a;
    a.account();
    CreateAccount b;
    ATM_CARD c;
    c.want_ATM();
    Transaction_History d;
    Withdraw_Deposit e;
    ATM_CARD_LOST f;
    int TRY = 0;
    while (TRY != -1)
    {
        cout << "1. Make Transaction" << endl;
        cout << "2. Transaction History" << endl;
        cout << "3. Withdraw/Deposit" << endl;
        cout << "4. My Balance" << endl;
        cout << "5. Card Lost" << endl;
        cout << "6. To Exit" << endl
             << endl;
        int next;
        cout << ">> ";
        cin >> next;
        switch (next)
        {
        case 1:
            d.makeTransaction();
            break;
        case 2:
            d.transaction();
            break;
        case 3:
            e.choose();
            break;
        case 4:
            e.Mybalance();
            break;
        case 5:
            f.block();
            break;
        case 6:
            TRY = -1;
            break;
        }
    }
    return 0;
}