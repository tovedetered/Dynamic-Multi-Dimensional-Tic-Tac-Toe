//
// Created by tobed on 11/24/2023.
//

#ifndef INC_3_DTIC_TAC_TOE_ASCIIMENU_H
#define INC_3_DTIC_TAC_TOE_ASCIIMENU_H

#include "Menu.h"
#include "ASCIIGameManager.h"
#include "Utilities.h"
#include <limits>

class ASCIIMenu : public Menu {
public:
    ASCIIMenu();
private:
    void drawMainMenu() override;
    void drawGameSelect() override;
    void drawChangeSettings() override;
    void drawHighScores() override;
    int getInput() override;
    bool areYouSure() override;
};


#endif //INC_3_DTIC_TAC_TOE_ASCIIMENU_H
