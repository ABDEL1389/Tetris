#ifndef SQUARE_H
#define SQUARE_H

//#include "Gameboard.h"
#include <vector>

class Square{
    private:
        int x;
        int y;
        bool is_occupied;
    
    public:
        Square();

        Square(int x, int y);

        int x_co() const;

        int y_co() const;

        std::vector<int> find() const;

        bool occupied() const; 

        void occupy();

        void unoccupy();

        #include "Gameboard.h"
        Square up();

        Square down();
        Square down(int n);

        Square left();

        Square right();
};

#endif