#ifndef IPIECE_H
#define IPIECE_H

#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"


class Ipiece : public Piece {
    public:
        Ipiece();

        void update() override;
};


#endif