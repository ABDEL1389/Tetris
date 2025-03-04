#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <vector>
#include "Square.h"

class Gameboard{
    private:
        std::vector<Square> row1;
        std::vector<Square> row2;
        std::vector<Square> row3;
        std::vector<Square> row4;
        std::vector<Square> row5;
        std::vector<Square> row6;
        std::vector<Square> row7;
        std::vector<Square> row8;
        std::vector<Square> row9;
        std::vector<Square> row10;
        std::vector<Square> row11;
        std::vector<Square> row12;
        std::vector<Square> row13;
        std::vector<Square> row14;
        std::vector<Square> row15;
        std::vector<Square> row16;
        std::vector<Square> row17;
        std::vector<Square> row18;
        std::vector<Square> row19;
        std::vector<Square> row20;

        std::vector<Square> column1;
        std::vector<Square> column2;
        std::vector<Square> column3;
        std::vector<Square> column4;
        std::vector<Square> column5;
        std::vector<Square> column6;
        std::vector<Square> column7;
        std::vector<Square> column8;
        std::vector<Square> column9;
        std::vector<Square> column10;
    
        std::vector<std::vector<Square>> board_rowview;
        std::vector<std::vector<Square>> board_columnview;

    public:
        Gameboard();

        Square search(int x, int y);
};

//extern Gameboard gameboard();

static int s = 20;

#endif
