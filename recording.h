//
//  recording.h
//  PolymorphismLab
//
//  Created by Jacob on 8/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef recording_h
#define recording_h

#include "holding.h"
using namespace std;

class Recording: public Holding {
private:
    char performer[50];
    char format;
public:
    Recording() : Holding(){
        performer[0] = '\0';
        format = 'M';
    };
    Recording(char title[], int number, char performer[], char form): Holding(title, number){
        int x;
        for(x=0; x<strlen(performer); x++)
            this->performer[x] = performer[x];
        this->performer[x] = '\0';
        this->format = form;
    };
    char* getPerformer();
    char* getFormat();
    void print(ofstream &csis);
};


#endif /* recording_h */
