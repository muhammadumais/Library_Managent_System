#include<iostream>
#include<vector>
#include<string>
#include "book.h"
#include "member.h"
#include "library.h"
using namespace std;

int main(){
  Library l1;
  l1.add_book();
  l1.add_member();
  cout << l1.members[0].get_name() << endl;
  cout << l1.books[0].get_name() << endl;
}