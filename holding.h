//
//  holding.h
//  PolymorphismLab
//
//  Created by Jacob on 8/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef holding_h
#define holding_h

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

class Holding {
private:
    char title[50];
    int call_number;
public:
    Holding();
    Holding(char title[], int number);
    virtual void print(ofstream &csis) = 0;
    int getCallNumber();
    char* getTitle();
};


#endif /* holding_h */
