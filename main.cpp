#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank {
    public:
        long int cardno;
        int pin;
        long int accno;
        string nm, acctype;
        float bal;

        bank(long int card_no, int pin_no, long int acc_no, string name, string acc_type, float balance) {
            cardno = card_no;
            pin = pin_no;
            accno = acc_no;
            nm = name;
            acctype = acc_type;
            bal = balance;
        }

        void seeBalance() {
            cout << "----------------------" << endl;
            cout << "Accout No. : " << accno << endl;
            cout << "Name : "<< nm << endl;
            cout << "Account Type : " << acctype << endl;
            cout << "Balance : " << bal << endl;  
        }

        void deposit() {
            int damt1;
            cout << "Enter Deposit Amount : " << endl;
            cin >> damt1;
            cout << "Previous Balance : " << bal << endl;  
            bal += damt1;
            cout << "New Balance : " << bal << endl;  
        }

        void withdraw() {
            int wamt1;
            cout << "Enter Withdraw Amount : " << endl;
            cin >> wamt1;
            if (wamt1 > bal){
                cout << "Insufficient Fund" << endl;
            }
            else {
                cout << "Previous Balance : " << bal << endl;  
                bal -= wamt1;
                cout << "New Balance : " << bal << endl;
            }
        }
};


int main() {
    int cardno, pinno, selaccount, choice;
    bank testbank1(1234, 2023, 4321, "Tester1", "Saving", 500);
    
    while (true) {
        cout << "\nInsert Card" << endl;
        cin >> cardno;
        if (cardno == testbank1.cardno) {
            cout << "Insert PIN" << endl;
            cin>> pinno;
            if (pinno == testbank1.pin) {
                cout << "Select Account" << endl;
                cout << "1. " << testbank1.accno << endl;
                cin >> selaccount;
                if (selaccount == 1){
                    cout << "Select Your Option: " << endl;
                    cout << "1. See Balance" << endl;
                    cout << "2. Deposit" << endl;
                    cout << "3. Withdraw" << endl;
                    cin >> choice;
                    switch (choice) {
                    case 1:
                        testbank1.seeBalance();
                        break;
                    case 2:
                        testbank1.deposit();
                        break;
                    case 3:
                        testbank1.withdraw();
                        break;
                    default:
                        cout << "Invalid Choice. Aborting." << endl;
                    }
                }
                else {
                    cout << "Invalid Option. Aborting." << endl;
                }
            }
            else {
                cout << "Invalid PIN. Aborting." << endl;
            }
        }
        else {
            cout << "Invalid Card. Aborting." << endl;
        }        
    }

    return 0;
}