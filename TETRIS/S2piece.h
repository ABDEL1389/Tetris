#ifndef S2PIECE_H
#define S2PIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>

class S2piece : public Piece {
    public:
        S2piece();

        void update() override;
};


#endif