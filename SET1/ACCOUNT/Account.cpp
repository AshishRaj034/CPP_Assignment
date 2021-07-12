#include<iostream>
#include "account.h"


Account:: Account()
{
  my_accNumber="12345678";
  my_accName="Raj";
  my_balance=0.0;

}
Account:: Account(std::string a,std::string b,double c) 
{
  my_accno=a;
  my_accnm=b;
  my_balance=c;

}
Account:: Account(std::string a,std::string b)
{
   my_accno=a;
   my_accnm=b;
   my_balance=0.0;

}
Account:: Account(const Account& ref)
{
     my_accno=ref.m_accnor;
     my_accnm=ref.m_accnm;
     my_balance=ref.m_balance;

}
void Account::debit(double x)
{
  my_balance-=x;
  
}
void Account:: credit(double y)
{
  my_balance+=y;

}
double Account::getBalance() const{return my_balance;}
void  Account::dispay() const{std::cout<<my_accno<<" "<<my_accnm<<" "<<my_balance<<std::endl;}


