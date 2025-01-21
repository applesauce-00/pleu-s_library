#include <iostream>
using namespace std;

void displayBooks(const string genre, const string books[], const string ratings[], const string authors[], int size) {
    cout << "********* " << genre << " BOOKS *********" << endl;
    for (int i = 0; i < size; i++) {
        cout << "[" << i + 1 << "] " << books[i] << endl;
    }
    cout << "Enter the corresponding number of your desired book for more information: ";
    int choice;
    cin >> choice;

    if (choice >= 1 && choice <= size) {
        int index = choice - 1;
        cout << "\nBOOK " << genre[0] << "0" << choice << endl;
        cout << books[index] << endl;
        cout << "Ratings: " << ratings[index] << endl;
        cout << "Author: " << authors[index] << endl;
    } else {
        cout << "Invalid choice. Returning to genre selection.\n";
    }
}

int main() {
    const string comedyBooks[] = {"The Ultimate Hitchhiker’s Guide to the Galaxy", "Catch-22", "Good Omens", "The Princess Bride"};
    const string comedyRatings[] = {"4.38/5", "3.99/5", "4.26/5", "4.27/5"};
    const string comedyAuthors[] = {"Douglas Adams", "Joseph Heller", "Terry Pratchett", "William Goldman"};

    const string romanceBooks[] = {"Pride and Prejudice", "Fifty Shades of Grey", "Beautiful Disaster", "Twilight"};
    const string romanceRatings[] = {"4.29/5", "3.66/5", "4.01/5", "3.66/5"};
    const string romanceAuthors[] = {"Jane Austen", "E.L. James", "Jamie McGuire", "Stephenie Meyer"};

    const string fictionBooks[] = {"A Game of Thrones", "The Name of the Wind", "The Way of Kings", "The Chronicles of Narnia"};
    const string fictionRatings[] = {"4.44/5", "4.52/5", "4.66/5", "4.28/5"};
    const string fictionAuthors[] = {"George R.R. Martin", "Patrick Rothfuss", "Brandon Sanderson", "C.S. Lewis"};

    const string horrorBooks[] = {"The Shining", "It", "’Salem’s Lot", "Dracula"};
    const string horrorRatings[] = {"4.27/5", "4.24/5", "4.10/5", "4.02/5"};
    const string horrorAuthors[] = {"Stephen King", "Stephen King", "Stephen King", "Bram Stoker"};

    int genre;
    char continueChoice;

    do {
        system("CLS");
        cout << "PLEU'S LIBRARY\nSearch your favorite book here\n";
        cout << "Please choose your genre:\n";
        cout << "[1] Comedy\n[2] Romance\n[3] Fiction\n[4] Horror\n";
        cout << "Enter the corresponding number of your chosen genre: ";
        cin >> genre;

        system("CLS");
        switch (genre) {
            case 1:
                displayBooks("COMEDY", comedyBooks, comedyRatings, comedyAuthors, 4);
                break;
            case 2:
                displayBooks("ROMANCE", romanceBooks, romanceRatings, romanceAuthors, 4);
                break;
            case 3:
                displayBooks("FICTION", fictionBooks, fictionRatings, fictionAuthors, 4);
                break;
            case 4:
                displayBooks("HORROR", horrorBooks, horrorRatings, horrorAuthors, 4);
                break;
            default:
                cout << "Invalid genre. Please try again.\n";
        }

        cout << "\nDo you want to choose another genre? (Y/N): ";
        cin >> continueChoice;
    } while (tolower(continueChoice) == 'y');

    cout << "Thank you for using PLEU'S LIBRARY!\n";
    return 0;
}
