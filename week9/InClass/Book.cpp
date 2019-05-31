#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
	void setBook(){
		cout << "�п�J�ѦW: ";
		cin >> title;
		cout << "�п�J�@��: ";
		cin >> author;
		cout << "�п�J�Ѹ�: ";
		cin >> number;
		cout << "�п�J����: ";
		cin >> price;
	}
	void showBook(){
		cout << "�ѦW: " << title << endl;
		cout << "�@��: " << author << endl;
		cout << "�Ѹ�: " << number << endl;
		cout << "����: " << price << endl;
	}
private:
	string title;
	string author;
	string number;
	double price;
};

class Bookshelf{
public:
	void AddBook(){
		Book book;
		book.setBook();
		books.push_back(book);
	}
	void AddBook(Book book){
		books.push_back(book);
	}
	void ShowAllBooks(){
		for (int i = 0 ; i < books.size() ; i++){
			books[i].showBook();
		}
	}
private:
	vector<Book> books;
};

int main(){
	Book books[10];
	books[0].setBook();
	books[0].showBook();
	Bookshelf shelf;
	shelf.AddBook(books[0]);
	shelf.AddBook();
	shelf.ShowAllBooks();
	
	return 0;
}
