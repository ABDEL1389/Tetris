#ifndef S1PIECE_H
#define S1PIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>

class S1piece : public Piece {
    public:
        S1piece();

        void update() override;
};


#endif