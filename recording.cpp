//
//  recording.cpp
//  PolymorphismLab
//
//  Created by Jacob on 8/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//
#include "recording.h"

char* Recording::getPerformer() {
    return this->performer;
}

char* Recording::getFormat() {
    char * value;
    switch(format) {
        case 'M': value = "(MP3)";break;
        case 'W': value = "(WAV)";break;
        case 'A': value = "(AIFF)";break;
    }
    return value;
}

void Recording::print(ofstream &csis) {
    csis<<"RECORDING: \""<<getTitle()<<"\" "<<getPerformer()<<" "<<getFormat()<<" "<<getCallNumber()<<endl;
    cout<<"RECORDING: \""<<getTitle()<<"\" "<<getPerformer()<<" "<<getFormat()<<" "<<getCallNumber()<<endl;
}
