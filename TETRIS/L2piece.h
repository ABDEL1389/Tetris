#ifndef L2PIECE_H
#define L2PIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>

class L2piece : public Piece {
    public:
        L2piece();

        void update() override;
};


#endif