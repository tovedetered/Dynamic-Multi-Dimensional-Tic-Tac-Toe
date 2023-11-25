//
// Created by tobed on 11/24/2023.
//

#include "Menu.h"

Menu::Menu() = default;

int Menu::menuLoop() {
    int choice;
    int selectedGame;
    while(true){
        choice = mainMenu();
        switch(choice){
            case 1:
                selectedGame = gameSelect();
                if(selectedGame == 0) {
                    break;
                }
                goto stop;
            case 2:
                changeSettings();
                break;
            case 3:
                highScores();
                break;
            default:
                return 0;
        }
    }
    stop:
    return selectedGame;
}

int Menu::mainMenu() {
    int choice = 0;
    bool doneRun = false;
    drawMainMenu();
    while (!doneRun) {
        choice = getInput();
        if (choice > 3 || choice < 1) {
            doneRun = areYouSure();
            if(!doneRun){
                drawMainMenu();
            }
        }
        else{
            break;
        }
    }
    return choice;
}

int Menu::gameSelect() {
    int choice;
    drawGameSelect();
    while(true){
        choice = getInput();
        if (choice <= totalGames && choice >0){
            break;
        }
        else{
            return 0;
        }
    }
    return choice;
}

void Menu::changeSettings() {
    drawChangeSettings();
}

void Menu::highScores() {
    drawHighScores();
}

