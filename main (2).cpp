#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class account
{
   public:
   char name[100];
   int acc_num,acc_type;
   int balance;
   int amount;

   void getData()
   {
      cout<<"\nEnter the following details\nCustomer Name :";
      cin >> name;;
      cout<<"\nAccount number :";
      cin>>acc_num;
      cout<<"\nAccount type\n1. Current Account\n2.Saving Account\n";
      cin>>acc_type;
      cout<<"\nAccount balance:";
      cin>>balance;
   } 
   
   void display()
   {
      cout<<"\nYour Account Balance :"<< balance;
      
   }
};

//class current account
class cur_acct:public account
{
   public:
   void penalty()
   {
     if(balance<200 && acc_type==1)
     {
        balance=balance-20;
        display();
     }
   }
   
   void withdraw_curr()
   {
      cout<<"\nEnter the amount you want to withdraw :";
      cin>>amount;
      if(amount>balance)
      cout<<"\nInsuficient balance";
      else
      balance=balance-amount;
      display();
   }
};

//class saving account
class sav_acct:public account
{
   public:
   void penalty()
   {
     if(balance<200 && acc_type==2)
     {
        balance=balance-20;
        display();
     }
   }
   
   void interest()
   {
      cout << "Current rate is 3%";
      int t;
      cout<<"\nEnter total time interval:";
      cin>>t;
      balance=(balance*t*3);
      
      cout << "\nCurrent balance:";
      cout << balance;
   }
   
   void withdraw_sav()
   {
       cout<<"\nEnter the amount you want to withdraw :";
       cin>>amount;
       if(amount>balance)
       cout<<"\nInsuficient balance";
       else
       balance=balance-amount;
       display();
   }
};

//main() to test account
int main()
{
    account ac;
    cur_acct cc;
    sav_acct sc;
    ac.getData();

    if(ac.acc_type==1)
    {
       cc.penalty();
       cc.withdraw_curr();
    }
    else if(ac.acc_type==2)
    {
       sc.penalty();
       sc.interest();
       sc.withdraw_sav();
    }
    getch();
}

