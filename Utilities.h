//
// Created by tobed on 11/24/2023.
//

#ifndef INC_3_DTIC_TAC_TOE_UTILITIES_H
#define INC_3_DTIC_TAC_TOE_UTILITIES_H

#include <iostream>
#include <limits>

using namespace std;

template<typename type>
type getCinInput() {
    type choice;
    cin >> choice;
    while(true){
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<type>::max(), '\n');
            cout << "ERROR Invalid Input Detected" << endl
                 << "Please try again: ";
            cin >> choice;
        }
        if(!cin.fail()){
            break;
        }
    }
    return choice;
}


#endif //INC_3_DTIC_TAC_TOE_UTILITIES_H
