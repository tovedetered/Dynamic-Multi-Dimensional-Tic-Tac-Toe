//
// Created by tobed on 11/24/2023.
//

#ifndef INC_3_DTIC_TAC_TOE_ASCIIGAMEMANAGER_H
#define INC_3_DTIC_TAC_TOE_ASCIIGAMEMANAGER_H

#include "GameManager.h"
#include "ASCIIMenu.h"
#include "ASCII3DTicTacToeGame.h"

class ASCIIGameManager : public GameManager {
public:
    ASCIIGameManager();
    ~ASCIIGameManager();
    void initialize() override;
protected:
    void run3dTTT() override;
private:
};


#endif //INC_3_DTIC_TAC_TOE_ASCIIGAMEMANAGER_H
