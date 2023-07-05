#include<iostream>
#include<vector>
#include<string>



using namespace std;


#ifndef LIBRARY_H
#define LIBRARY_H

#ifndef BOOK_h
#define BOOK_h
#endif
#ifndef MEMBER_H
#define MEMBER_H
#endif

class Library{

  string name;
  string location;
  int capacity;
  vector <Book*> books;
  vector <Member*> members;
  public: 
    Library(){
      name = "";
      location = "";
      capacity = 10;
      books.push_back(new Book("Library_Intro", "N/A"));
    }

    string get_name(){
        return name;
    }
    
    string get_location(){
        return location;
    }

    int get_capacity(){
      return capacity;
    }

    int get_filled(){
      return books.size();
    }


    void add_book(){
      Book* temp;
      fill_book_data(temp);
      books.push_back(temp);
    }

    void remove_book(int i){
      books.erase(books.begin() + i);
    }
    void add_member(){
      Member* temp;
      fill_member_data(temp);
      members.push_back(temp);
    }

    void remove_member(int i){
      members.erase(books.begin() + i);
    }

};


#endif