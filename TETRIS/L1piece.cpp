#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"
#include "L1piece.h"

L1piece::L1piece(){
    square1 = centre_position.left();
    square2 = centre_position.right();
    square3 = centre_position.left().down();

    squares.insert(squares.end(), {centre_position, square1, square2, square3});
}

void L1piece::update(){
    if (state==0){
        if (centre_position.x_co()>1 && centre_position.x_co()<10){
            square1 = centre_position.left();
            square2 = centre_position.right();
            square3 = centre_position.left().down();
        } else if (centre_position.x_co()==1){
            centre_position = centre_position.right();
            update();
        } else if (centre_position.x_co()==10){
            centre_position = centre_position.left();
            update();
        }
    } else if (state==1){
        square1 = centre_position.up();
        square2 = centre_position.down();
        square3 = centre_position.up().left();
    } else if (state==2){
        if (centre_position.x_co()<10){
            square1 = centre_position.right();
            square2 = centre_position.left();
            square3 = centre_position.right().up();
        } else {
            centre_position = centre_position.left();
            update();
        }
    } else if (state==3){
        square1 = centre_position.down();
        square2 = centre_position.up();
        square3 = centre_position.down().right();
    }
}