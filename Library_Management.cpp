#include<iostream>
#include<vector>
#include<string>

using namespace std;

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

};



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