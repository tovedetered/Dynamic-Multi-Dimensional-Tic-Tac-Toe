//
// Created by tobed on 11/24/2023.
//

#ifndef INC_3_DTIC_TAC_TOE_ASCIIMENU_H
#define INC_3_DTIC_TAC_TOE_ASCIIMENU_H

#include "Menu.h"
#include "ASCIIGameManager.h"

class ASCIIMenu : public Menu {
public:
    ASCIIMenu();
private:
    virtual void drawMainMenu();
    virtual void drawGameSelect();
    virtual void drawChangeSettings();
    virtual void drawHighScores();
    virtual int getInput();
    virtual bool areYouSure();
};


#endif //INC_3_DTIC_TAC_TOE_ASCIIMENU_H
