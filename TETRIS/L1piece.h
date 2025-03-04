#ifndef L1PIECE_H
#define L1PIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>

class L1piece : public Piece {
    public:
        L1piece();

        void update() override;
};


#endif