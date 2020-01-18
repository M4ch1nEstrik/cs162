#ifndef HEADER1_H
#define HEADER1_H

#include <iostream>
#include <string>

using namespace std;

struct user{
   string name;
   int id;
   string password;
};

struct transaction{
   float amount;
   string date;
   string category;
   string description;
};

struct budget{
   int id;
   float balance;
   int num_transactions;
   struct transaction *t;
};

bool compare_user(user *user1, user *user2, int num);
bool check_login(user *newuser);
budget* create_budgets(int);
void get_budget_data(budget*, int, ifstream &);
transaction* create_transactions(int);
void get_transaction_data(transaction*, int, ifstream &);
void delete_info(user**, int, budget**, int);

#endif
