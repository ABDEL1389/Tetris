#ifndef PIECE_H
#define PIECE_H

#include "Square.h"
#include "Gameboard.h"
#include <vector>
#include <algorithm>

class Piece{
    protected:
        int state;
        bool is_active;
        Square centre_position;

        Square square1;
        Square square2;
        Square square3;

        std::vector<Square> squares;

    public:
        Piece();

        //getters
        bool active() const;

        int get_state() const;

        Square find_centre() const;

        void rotate();

        void move_left();

        void move_right();

        void move_down();

        std::vector<int> find_centre_co() const;

        void place();

        virtual void update() = 0;

        void unplace();

        std::vector<Square> project();
};

#endif