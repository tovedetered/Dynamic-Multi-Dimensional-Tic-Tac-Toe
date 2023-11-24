//
// Created by tobed on 11/24/2023.
//

#include "GameManager.h"

GameManager::GameManager() {
    menu = nullptr;
    TTT3d = nullptr;
}


void GameManager::mainGameLoop() {
    int choice = 0;
    while(true){
        choice = menu->menuLoop();
        if(choice == 0){
            return;
        }
        switch (choice) {
            case 1:
                run3dTTT();
            default:
                break;
        }
    }
}

