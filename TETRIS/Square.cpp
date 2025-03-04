#include "Square.h"
//#include "Gameboard.h"
#include <vector>

Square::Square() {
    x = 0;
    y = 0;
}

Square::Square(int x, int y) : x(x), y(x) {}

//getters
int Square::x_co() const{
    return x;
}

int Square::y_co() const{
    return y;
}

std::vector<int> Square::find() const{
    std::vector<int> xy = {x, y};
    return xy;
}

bool Square::occupied() const{
    return is_occupied;
}

//setters
void Square::occupy(){
    is_occupied=true;
}

void Square::unoccupy(){
    is_occupied=false;
}

#include "Gameboard.h"

Square Square::up(){
    if (y<20){
        return gameboard.search(x,y+1);
    } else {
        return gameboard.search(x,y);
    }
}

Square Square::down(){
    if (y>1){
        return gameboard.search(x,y-1);
    } else {
        return gameboard.search(x,y);
    }
}

Square Square::down(int n){
    if (y>n){
        return gameboard.search(x,y-n);
    } else {
        return gameboard.search(x,y);
    }
}

Square Square::left(){
    if (x>1){
        return gameboard.search(x-1,y);
    } else {
        return gameboard.search(x,y);
    }
}

Square Square::right(){
    if (x<20){
        return gameboard.search(x+1,y);
    } else {
        return gameboard.search(x,y);
    }
}


