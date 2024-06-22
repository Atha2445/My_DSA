#include<bits/stdc++.h>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;

    Book(int id, string title, string author)
        : id(id), title(title), author(author), isIssued(false) {}
};

class Library {
private:
    vector<Book> books;

    // Utility function to find a book index by ID
    int findBookIndexById(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].id == id) {
                return i;
            }
        }
        return -1;
    }

public:
    // Add a new book to the library
    void addBook(int id, string title, string author) {
        if (findBookIndexById(id) == -1) {
            books.push_back(Book(id, title, author));
            cout << "Book added successfully!" << endl;
        } else {
            cout << "Book ID already exists. Try a different ID." << endl;
        }
    }

    // Search for a book by its title or ID
    void searchBook(string title) {
        for (const auto& book : books) {
            if (book.title == title) {
                cout << "Book found: " << book.id << " | " << book.title << " | " << book.author << " | "
                     << (book.isIssued ? "Issued" : "Available") << endl;
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void searchBook(int id) {
        int index = findBookIndexById(id);
        if (index != -1) {
            const auto& book = books[index];
            cout << "Book found: " << book.id << " | " << book.title << " | " << book.author << " | "
                 << (book.isIssued ? "Issued" : "Available") << endl;
        } else {
            cout << "Book not found." << endl;
        }
    }

    // Issue a book to a student
    void issueBook(int id) {
        int index = findBookIndexById(id);
        if (index != -1 && !books[index].isIssued) {
            books[index].isIssued = true;
            cout << "Book issued successfully!" << endl;
        } else if (index == -1) {
            cout << "Book not found." << endl;
        } else {
            cout << "Book is already issued." << endl;
        }
    }

    // Return a book
    void returnBook(int id) {
        int index = findBookIndexById(id);
        if (index != -1 && books[index].isIssued) {
            books[index].isIssued = false;
            cout << "Book returned successfully!" << endl;
        } else if (index == -1) {
            cout << "Book not found." << endl;
        } else {
            cout << "Book is not issued." << endl;
        }
    }

    // List all books
    void listBooks() {
        if (books.empty()) {
            cout << "No books in the library." << endl;
            return;
        }

        sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
            return a.id < b.id;
        });

        for (const auto& book : books) {
            cout << book.id << " | " << book.title << " | " << book.author << " | "
                 << (book.isIssued ? "Issued" : "Available") << endl;
        }
    }

    // Delete a book
    void deleteBook(int id) {
        int index = findBookIndexById(id);
        if (index != -1) {
            books.erase(books.begin() + index);
            cout << "Book deleted successfully!" << endl;
        } else {
            cout << "Book not found." << endl;
        }
    }
};

int main() {
    Library library;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add New Book\n";
        cout << "2. Search Book by Title\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. List All Books\n";
        cout << "7. Delete Book\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book ID: ";
                cin >> id;
                cin.ignore(); // Ignore newline character
                cout << "Enter book title: ";
                getline(cin, title);
                cout << "Enter book author: ";
                getline(cin, author);
                library.addBook(id, title, author);
                break;

            case 2:
                cin.ignore(); // Ignore newline character
                cout << "Enter book title: ";
                getline(cin, title);
                library.searchBook(title);
                break;

            case 3:
                cout << "Enter book ID: ";
                cin >> id;
                library.searchBook(id);
                break;

            case 4:
                cout << "Enter book ID to issue: ";
                cin >> id;
                library.issueBook(id);
                break;

            case 5:
                cout << "Enter book ID to return: ";
                cin >> id;
                library.returnBook(id);
                break;

            case 6:
                library.listBooks();
                break;

            case 7:
                cout << "Enter book ID to delete: ";
                cin >> id;
                library.deleteBook(id);
                break;

            case 8:
                cout << "Exiting... Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
