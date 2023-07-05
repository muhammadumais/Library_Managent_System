#include<iostream>
#include<vector>
#include<string>



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

    void set_cell_no(string cell_noo){
      cell_no = cell_noo;
    }

    void set_name(string namee){
      name = namee;
    }

    string get_name(){
      return name;
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


void fill_member_data(Member* member){
  string temp;
  cout << "----------Enter Member Data-----------" << endl << endl;
  cout << "Enter Name : ";
  getline(cin, temp);
  member->set_name(temp);
  cout << "Enter Cell No : ";
  getline(cin, temp);
  member->set_cell_noo(temp);
}

#endif
