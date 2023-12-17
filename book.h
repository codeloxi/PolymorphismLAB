//
//  book.h
//  PolymorphismLab
//
//  Created by Jacob on 8/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef book_h
#define book_h

#include "holding.h"
using namespace std;

class Book: public Holding {
private:
    char author[50];
public:
    Book(): Holding() {
        author[0] = '\0';
    }
    
    Book(char title[], int number, char author[]): Holding(title, number) {
        int x;
        for( x=0; x<strlen(author); x++)
            this->author[x] = author[x];
        this->author[x] = '\0';
    }
    char* getAuthor();
    void print(ofstream &csis);
};

#endif /* book_h */
