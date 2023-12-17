//
//  library.cpp
//  PolymorphismLab
//
//  Created by Jacob on 8/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//  Jacob Bennett ID: 010729222

#include "library.h"

int main() {
    csis.open("csis.txt");
    
    char type;
    char format;
    char title[50];
    char author[50];
    char performer[50];
    int callNumber;
    
    cout << "Enter holdings to be stored in a list:\n" << endl;
    csis << "Enter holdings to be stored in a list:\n" << endl;
    int i = 0;
    Holding *holdings[5];
    while(i<5)
    {
        
        cout << "Enter B for book, R for recording: ";
        csis << "Enter B for book, R for recording: ";
        cin >> type;
        cout << endl;
        csis << endl;
        if(type == 'B')
        {
            cout << "Enter book title: ";
            csis << "Enter book title: ";
            cin.ignore();
            cin.getline(title, 50);
            cout << endl;
            csis << endl;
            cout << "Enter book author: ";
            csis << "Enter book author: ";
            cin.getline(author, 50);
            cout << endl;
            csis << endl;
            cout << "Enter call number: ";
            csis << "Enter call number: ";
            cin >> callNumber;
            cout << endl;
            csis << endl;
            holdings[i] = new Book(title, callNumber, author);
        }
        else
        {
            cout << "Enter recording title: ";
            csis << "Enter recording title: ";
            cin.ignore();
            cin.getline(title, 50);
            cout << endl;
            csis << endl;
            cout << "Enter performer: ";
            csis << "Enter performer: ";
            cin.getline(performer, 50);
            cout << endl;
            csis << endl;
            cout << "Enter format: M(P3), W(AV), (A)IFF: ";
            csis << "Enter format: M(P3), W(AV), (A)IFF: ";
            cin >> format;
            cout << endl;
            csis << endl;
            cout << "Enter call number: ";
            csis << "Enter call number: ";
            cin >> callNumber;
            cout << endl;
            csis << endl;
            holdings[i] = new Recording(title, callNumber, performer, format);;
        }
        i++;
        
    }
    cout << "\nHere are the holdings: \n\n";
    csis << "\nHere are the holdings: \n\n";
    
    for(int j=0; j<5; j++)
        holdings[j]->print(csis);
    
    csis.close();
}
