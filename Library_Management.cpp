#include<iostream>
#include<vector>
#include<string>
#include "library.h"
#include "book.h"
#include "member.h"
using namespace std;

int main(){
 Library l1;
 l1.add_book();
 l1.add_book();
 l1.add_book();
  l1.add_member();
  l1.add_member();
  l1.add_member();
  l1.remove_member(1);
  l1.remove_book(1);

  for(int i = 0; i < 3; i++){
    if(i != 2){
      cout << l1.members[i].get_name() << endl;
      cout << l1.books[i].get_name() << endl;
    }
  }
}