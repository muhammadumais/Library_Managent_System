#include<iostream>
#include<vector>
#include<string>

using namespace std;


#ifndef BOOK_H
#define BOOK_H

#ifndef MEMBER_H
#define MEMBER_H
#endif

#ifndef LIBRARY_H
#define LIBRARY_H
#endif


class Book{
  int id;
  static int temp;
  string name;
  string author;

  public: 
    Book(){
      id = temp + 1;
      name = "";
      author = "";
      temp++;
    }

    Book(string namee, string authorr){
      id = temp + 1;
      name = namee;
      author = authorr;
      temp++;
    }

    int get_id(){
      return id;
    }

    string get_name(){
      return name;
    }

    string get_author(){
      return author;
    }

    void set_name(string namee){
       name = namee;
    }

    void set_author(string authorr){
       author = authorr;
    }

};

int Book :: temp = 0;

void fill_book_data(Book* book){
  string temp;
  cout << "----------Enter Book Data-----------" << endl << endl;
  cout << "Enter Name : ";
  getline(cin, temp);
  book->set_name(temp);
  cout << "Enter Author : ";
  getline(cin, temp);
  book->set_author(temp);
}
#endif
