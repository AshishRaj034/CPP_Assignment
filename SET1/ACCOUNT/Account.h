#include<string>

class Account {
  int my_accno; // ideally to be of string type
  std::string my_nm;
  double balance;

public:
  Account();
  Account(int, std::string, double);
  Account(const Account &);
  void credit(double);
  void debit(double);
  int getmy_accno();
  std::string getmy_nm();
  double getBalance() const;
  void display();
};
