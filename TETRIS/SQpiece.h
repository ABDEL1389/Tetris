#ifndef SQPIECE_H
#define SQPIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>

class SQpiece : public Piece {
    public:
        SQpiece();

        void update() override;
};


#endif