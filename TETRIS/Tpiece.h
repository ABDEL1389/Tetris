#ifndef TPIECE_H
#define TPIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>

class Tpiece : public Piece {
    public:
        Tpiece();

        void update() override;
};


#endif