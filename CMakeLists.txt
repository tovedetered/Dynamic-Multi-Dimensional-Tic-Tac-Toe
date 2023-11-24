cmake_minimum_required(VERSION 3.26)
project(3_DTic_Tac_Toe)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(3_DTic_Tac_Toe main.cpp
        TicTacToe3D.cpp
        TicTacToe3D.h
        ASCII3DTicTacToeGame.cpp
        ASCII3DTicTacToeGame.h
        GameManager.cpp
        GameManager.h
        Menu.cpp
        Menu.h
        ASCIIMenu.cpp
        ASCIIMenu.h
        ASCIIGameManager.cpp
        ASCIIGameManager.h
        Utilities.h)
