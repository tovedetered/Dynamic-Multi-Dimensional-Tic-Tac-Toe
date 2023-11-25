//
// Created by tobed on 11/24/2023.
//

#ifndef INC_3_DTIC_TAC_TOE_MENU_H
#define INC_3_DTIC_TAC_TOE_MENU_H

#include "GameManager.h"

class Menu {
public:
    Menu();
    int menuLoop();
protected:
    int mainMenu();
    virtual void drawMainMenu() = 0;
    int gameSelect();
    virtual void drawGameSelect() = 0;
    void changeSettings();
    virtual void drawChangeSettings() = 0;
    void highScores();
    virtual void drawHighScores() = 0;
    void credits();
    virtual void drawCredits() = 0;
    virtual int getInput() = 0;
    virtual bool areYouSure() = 0;
    int totalGames = 1;
private:

};


#endif //INC_3_DTIC_TAC_TOE_MENU_H
