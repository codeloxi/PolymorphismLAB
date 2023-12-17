//
//  holding.cpp
//  PolymorphismLab
//
//  Created by Jacob on 8/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#include "holding.h"

Holding::Holding() {
    title[0] = '\0';
    call_number = 0;
}

Holding::Holding(char title[], int number) {
    int x;
    for( x=0; x<strlen(title); x++)
        this->title[x] = title[x];
    this->title[x] = '\0';
    this->call_number = number;
}

int Holding::getCallNumber() {
    return call_number;
}

char* Holding::getTitle() {
    return title;
}
