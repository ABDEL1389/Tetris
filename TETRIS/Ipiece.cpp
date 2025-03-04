#include "Square.h"
#include "Gameboard.h"
#include "Piece.h"
#include "Ipiece.h"

Ipiece::Ipiece(){
    square1 = centre_position.left();
    square2 = centre_position.right();
    square3 = centre_position.right().right();

    squares.insert(squares.end(), {centre_position, square1, square2, square3});
}

void Ipiece::update(){
    if (state==0){
        if (centre_position.x_co()>1 && centre_position.x_co()<9){
            square1 = centre_position.left();
            square2 = centre_position.right();
            square3 = centre_position.right().right();
        } else if (centre_position.x_co()==1){
            centre_position = centre_position.right();
            update();
        } else if (centre_position.x_co()==10){
            centre_position = centre_position.left().left();
            update();
        } else if (centre_position.x_co()==9){
            centre_position = centre_position.left();
            update();
        }
    } else if (state==1){
        square1 = centre_position.up();
        square2 = centre_position.down();
        square3 = centre_position.down().down();
    } else if (state==2){
        if (centre_position.x_co()<10 && centre_position.x_co()>2){
            square1 = centre_position.right();
            square2 = centre_position.left();
            square3 = centre_position.left().left();
        } else if (centre_position.x_co()==10){
            centre_position = centre_position.left();
            update();
        } else if (centre_position.x_co()==2){
            centre_position = centre_position.right();
            update();
        } else if (centre_position.x_co()==1){
            centre_position = centre_position.right().right();
            update();
        }
    } else if (state==3){
        square1 = centre_position.down();
        square2 = centre_position.up();
        square3 = centre_position.up().up();
    }
}