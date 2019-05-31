#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
	void setBook(){
		cout << "請輸入書名: ";
		cin >> title;
		cout << "請輸入作者: ";
		cin >> author;
		cout << "請輸入書號: ";
		cin >> number;
		cout << "請輸入價格: ";
		cin >> price;
	}
	void showBook(){
		cout << "書名: " << title << endl;
		cout << "作者: " << author << endl;
		cout << "書號: " << number << endl;
		cout << "價格: " << price << endl;
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
