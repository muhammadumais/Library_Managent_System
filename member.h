#include<iostream>
#include<vector>
#include<string>

#include "library.h"


#ifndef MEMBER_H
#define MEMBER_H

#ifndef LIBRARY_H
#define LIBRARY_H
#endif
#ifndef BOOK_h
#define BOOK_h
#endif




using namespace std;

class Member{
  string name;
  string cell_no;
  vector <Book*> bag;

  public:
    Member(string namee, string cell){
      name = namee;
      cell_no = cell;
    }

    int find(string name){
      for(auto book : bag){
        if(book->get_name() == name){
          return book->get_id();
        }
      }
      return -1;
    }

  void turn(string name){
    if(find(name) + 1){
      bag.erase(bag.begin() + find(name));
    }
    else{
      cout << "Book is Not Found For Returning";
    }
  }
    
};
#endif
