# ATM Controller

## Introduction

A simple ATM controller.

To clone this project, type the following into your terminal:

git clone https://github.com/hyoungmin94/BearRobotics.git

## Explanation

The main.cpp code consists of two parts: The bank class, and int main().

 - Bank Class
    - The bank constructor takes 6 inputs: card number, pin number, account number, name of the owner, account type, and balance.
    - It has three functions: seeBalance, deposit, and withdraw.
    - seeBalance function allows the user to see account number, name of the owner, account type, and balance.
    - deposit function allows the user to deposit money into the account, and will show the balance before and after depositing.
    - withdraw function allows the user to withdraw money from the account, and will show the balance before and after withdrawing.
    - If the user tries to withdraw more than the amount in balance, the code will give out an error.
 - Main
    - Takes the following input in order: card number, pin number.
    - Then it will show the user the account tied to the card and make the user select the account.
    - After the account has been selected, the user will have the option to see balance, deposit, or withdraw.
    - If an error occurs in any of the stage, such as inputing the wrong card number or pin number, selecting an invalid/non-existing option, the code will give out an error and restart from inputting the card number.

## How to run the code

Open a code compiler such as VSCode, and click on the run button.
