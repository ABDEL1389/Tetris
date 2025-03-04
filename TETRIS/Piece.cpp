#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"

#include <vector>
#include <algorithm>

Piece::Piece(){
    state = 0;
    is_active = true;
    centre_position = gameboard.search(5,20);
}

bool Piece::active() const{
    return is_active;
}

int Piece::get_state() const{
    return state;
}

Square Piece::find_centre() const{
    return centre_position;
}

void Piece::rotate(){
    if (state==3){
        state = 0;
    } else {
        state+=1;
    }
}

void Piece::move_left(){
    unplace();
    centre_position = centre_position.left();
    update();
    place();
}

void Piece::move_right(){
    unplace();
    centre_position = centre_position.right();
    update();
    place();
}

void Piece::move_down(){
    unplace();
    centre_position = centre_position.down();
    update();
    place();
}

std::vector<int> Piece::find_centre_co() const{
    std::vector<int> xy = {centre_position.x_co(), centre_position.y_co()};
    return xy;
}

void Piece::place(){
    for (Square square : squares){
        square.occupy();
    }
}

void Piece::unplace(){
    for (Square square : squares){
        square.unoccupy();
    }
}

std::vector<Square> Piece::project(){
    int min_distance = 20;
    for (Square square : squares){
        bool found = false;
        int distance = 0;
        while (!found){
            if (square.down(distance).y_co()==1){
                found = true;
            } else if (square.down(distance+1).occupied() && !(std::find(squares.begin(), 
                                squares.end(), square.down(distance+1))!=squares.end())){
                found = true;
            } else {
                distance += 1;
            }
        } 
        if (distance < min_distance){
            min_distance = distance;
        }
    }
    std::vector<Square> projected = {centre_position.down(min_distance), square1.down(min_distance),
                                    square2.down(min_distance), square3.down(min_distance)};
    return projected;
}