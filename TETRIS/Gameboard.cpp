#include "Gameboard.h"
#include "Square.h"

#include <vector>

//creating the sqaures on the board

//row1
static Square square1x1(1, 1);
static Square square2x1(2, 1);
static Square square3x1(3, 1);
static Square square4x1(4, 1);
static Square square5x1(5, 1);
static Square square6x1(6, 1);
static Square square7x1(7, 1);
static Square square8x1(8, 1);
static Square square9x1(9, 1);
static Square square10x1(10, 1);

//row2
 static Square square1x2(1, 2);
 static Square square2x2(2, 2);
 static Square square3x2(3, 2);
 static Square square4x2(4, 2);
 static Square square5x2(5, 2);
 static Square square6x2(6, 2);
 static Square square7x2(7, 2);
 static Square square8x2(8, 2);
 static Square square9x2(9, 2);
 static Square square10x2(10, 2);

 //row3
 static Square square1x3(1, 3);
 static Square square2x3(2, 3);
 static Square square3x3(3, 3);
 static Square square4x3(4, 3);
 static Square square5x3(5, 3);
 static Square square6x3(6, 3);
 static Square square7x3(7, 3);
 static Square square8x3(8, 3);
 static Square square9x3(9, 3);
 static Square square10x3(10, 3);


 //row4
 static Square square1x4(1, 4);
 static Square square2x4(2, 4);
 static Square square3x4(3, 4);
 static Square square4x4(4, 4);
 static Square square5x4(5, 4);
 static Square square6x4(6, 4);
 static Square square7x4(7, 4);
 static Square square8x4(8, 4);
 static Square square9x4(9, 4);
 static Square square10x4(10, 4);


 //row5
 static Square square1x5(1, 5);
 static Square square2x5(2, 5);
 static Square square3x5(3, 5);
 static Square square4x5(4, 5);
 static Square square5x5(5, 5);
 static Square square6x5(6, 5);
 static Square square7x5(7, 5);
 static Square square8x5(8, 5);
 static Square square9x5(9, 5);
 static Square square10x5(10, 5);


 //row6
 static Square square1x6(1, 6);
 static Square square2x6(2, 6);
 static Square square3x6(3, 6);
 static Square square4x6(4, 6);
 static Square square5x6(5, 6);
 static Square square6x6(6, 6);
 static Square square7x6(7, 6);
 static Square square8x6(8, 6);
 static Square square9x6(9, 6);
 static Square square10x6(10, 6);


 //row7
 static Square square1x7(1, 7);
 static Square square2x7(2, 7);
 static Square square3x7(3, 7);
 static Square square4x7(4, 7);
 static Square square5x7(5, 7);
 static Square square6x7(6, 7);
 static Square square7x7(7, 7);
 static Square square8x7(8, 7);
 static Square square9x7(9, 7);
 static Square square10x7(10, 7);

 //row8
 static Square square1x8(1, 8);
 static Square square2x8(2, 8);
 static Square square3x8(3, 8);
 static Square square4x8(4, 8);
 static Square square5x8(5, 8);
 static Square square6x8(6, 8);
 static Square square7x8(7, 8);
 static Square square8x8(8, 8);
 static Square square9x8(9, 8);
 static Square square10x8(10, 8);

 //row9
 static Square square1x9(1, 9);
 static Square square2x9(2, 9);
 static Square square3x9(3, 9);
 static Square square4x9(4, 9);
 static Square square5x9(5, 9);
 static Square square6x9(6, 9);
 static Square square7x9(7, 9);
 static Square square8x9(8, 9);
 static Square square9x9(9, 9);
 static Square square10x9(10, 9);

 //row10
 static Square square1x10(1, 10);
 static Square square2x10(2, 10);
 static Square square3x10(3, 10);
 static Square square4x10(4, 10);
 static Square square5x10(5, 10);
 static Square square6x10(6, 10);
 static Square square7x10(7, 10);
 static Square square8x10(8, 10);
 static Square square9x10(9, 10);
 static Square square10x10(10, 10);


 //row11
 static Square square1x11(1, 11);
 static Square square2x11(2, 11);
 static Square square3x11(3, 11);
 static Square square4x11(4, 11);
 static Square square5x11(5, 11);
 static Square square6x11(6, 11);
 static Square square7x11(7, 11);
 static Square square8x11(8, 11);
 static Square square9x11(9, 11);
 static Square square10x11(10, 11);


 //row12
 static Square square1x12(1, 12);
 static Square square2x12(2, 12);
 static Square square3x12(3, 12);
 static Square square4x12(4, 12);
 static Square square5x12(5, 12);
 static Square square6x12(6, 12);
 static Square square7x12(7, 12);
 static Square square8x12(8, 12);
 static Square square9x12(9, 12);
 static Square square10x12(10, 12);


 //row13
 static Square square1x13(1, 13);
 static Square square2x13(2, 13);
 static Square square3x13(3, 13);
 static Square square4x13(4, 13);
 static Square square5x13(5, 13);
 static Square square6x13(6, 13);
 static Square square7x13(7, 13);
 static Square square8x13(8, 13);
 static Square square9x13(9, 13);
 static Square square10x13(10, 13);


 //row14
 static Square square1x14(1, 14);
 static Square square2x14(2, 14);
 static Square square3x14(3, 14);
 static Square square4x14(4, 14);
 static Square square5x14(5, 14);
 static Square square6x14(6, 14);
 static Square square7x14(7, 14);
 static Square square8x14(8, 14);
 static Square square9x14(9, 14);
 static Square square10x14(10, 14);

 //row15
 static Square square1x15(1, 15);
 static Square square2x15(2, 15);
 static Square square3x15(3, 15);
 static Square square4x15(4, 15);
 static Square square5x15(5, 15);
 static Square square6x15(6, 15);
 static Square square7x15(7, 15);
 static Square square8x15(8, 15);
 static Square square9x15(9, 15);
 static Square square10x15(10, 15);

 //row16
 static Square square1x16(1, 16);
 static Square square2x16(2, 16);
 static Square square3x16(3, 16);
 static Square square4x16(4, 16);
 static Square square5x16(5, 16);
 static Square square6x16(6, 16);
 static Square square7x16(7, 16);
 static Square square8x16(8, 16);
 static Square square9x16(9, 16);
 static Square square10x16(10, 16);

 //row17
 static Square square1x17(1, 17);
 static Square square2x17(2, 17);
 static Square square3x17(3, 17);
 static Square square4x17(4, 17);
 static Square square5x17(5, 17);
 static Square square6x17(6, 17);
 static Square square7x17(7, 17);
 static Square square8x17(8, 17);
 static Square square9x17(9, 17);
 static Square square10x17(10, 17);

 //row18
 static Square square1x18(1, 18);
 static Square square2x18(2, 18);
 static Square square3x18(3, 18);
 static Square square4x18(4, 18);
 static Square square5x18(5, 18);
 static Square square6x18(6, 18);
 static Square square7x18(7, 18);
 static Square square8x18(8, 18);
 static Square square9x18(9, 18);
 static Square square10x18(10, 18);

 //row19
 static Square square1x19(1, 19);
 static Square square2x19(2, 19);
 static Square square3x19(3, 19);
 static Square square4x19(4, 19);
 static Square square5x19(5, 19);
 static Square square6x19(6, 19);
 static Square square7x19(7, 19);
 static Square square8x19(8, 19);
 static Square square9x19(9, 19);
 static Square square10x19(10, 19);

 //row20
 static Square square1x20(1, 20);
 static Square square2x20(2, 20);
 static Square square3x20(3, 20);
 static Square square4x20(4, 20);
 static Square square5x20(5, 20);
 static Square square6x20(6, 20);
 static Square square7x20(7, 20);
 static Square square8x20(8, 20);
 static Square square9x20(9, 20);
 static Square square10x20(10, 20);


Gameboard::Gameboard() {
 
    row1.insert(row1.end(), {square1x1, square2x1, square3x1,square4x1, square5x1, 
                        square6x1, square7x1, square8x1, square9x1, square10x1});

    row2.insert(row2.end(), {square1x2, square2x2, square3x2,square4x2, square5x2, 
                        square6x2, square7x2, square8x2, square9x2, square10x2});

    row3.insert(row3.end(), {square1x3, square2x3, square3x3,square4x3, square5x3, 
                        square6x3, square7x3, square8x3, square9x3, square10x3});

    row4.insert(row4.end(), {square1x4, square2x4, square3x4,square4x4, square5x4, 
                        square6x4, square7x4, square8x4, square9x4, square10x4});


    row5.insert(row5.end(), {square1x5, square2x5, square3x5,square4x5, square5x5, 
                        square6x5, square7x5, square8x5, square9x5, square10x5});


    row6.insert(row6.end(), {square1x6, square2x6, square3x6,square4x6, square5x6, 
                        square6x6, square7x6, square8x6, square9x6, square10x6});


    row7.insert(row7.end(), {square1x7, square2x7, square3x7,square4x7, square5x7, 
                        square6x7, square7x7, square8x7, square9x7, square10x7});

   
    row8.insert(row8.end(), {square1x8, square2x8, square3x8,square4x8, square5x8, 
                        square6x8, square7x8, square8x8, square9x8, square10x8});


    row9.insert(row9.end(), {square1x9, square2x9, square3x9,square4x9, square5x9, 
                        square6x9, square7x9, square8x9, square9x9, square10x9});

    row10.insert(row10.end(), {square1x10, square2x10, square3x10,square4x10, square5x10, 
                            square6x10, square7x10, square8x10, square9x10, square10x10});

    row11.insert(row11.end(), {square1x11, square2x11, square3x11,square4x11, square5x11, 
                            square6x11, square7x11, square8x11, square9x11, square10x11});


    row12.insert(row12.end(), {square1x12, square2x12, square3x12,square4x12, square5x12, 
                            square6x12, square7x12, square8x12, square9x12, square10x12});



    row13.insert(row13.end(), {square1x13, square2x13, square3x13,square4x13, square5x13, 
                            square6x13, square7x13, square8x13, square9x13, square10x13});

    
    row14.insert(row14.end(), {square1x14, square2x14, square3x14,square4x14, square5x14, 
                            square6x14, square7x14, square8x14, square9x14, square10x14});

    

    row15.insert(row15.end(), {square1x15, square2x15, square3x15,square4x15, square5x15, 
                            square6x15, square7x15, square8x15, square9x15, square10x15});

    

    row16.insert(row16.end(), {square1x16, square2x16, square3x16,square4x16, square5x16, 
                            square6x16, square7x16, square8x16, square9x16, square10x16});



    row17.insert(row17.end(), {square1x17, square2x17, square3x17,square4x17, square5x17, 
                             square6x17, square7x17, square8x17, square9x17, square10x17});

    

    row18.insert(row18.end(), {square1x18, square2x18, square3x18,square4x18, square5x18, 
                             square6x18, square7x18, square8x18, square9x18, square10x18});

    
    row19.insert(row19.end(), {square1x19, square2x19, square3x19,square4x19, square5x19, 
                            square6x19, square7x19, square8x19, square9x19, square10x19});


    row20.insert(row20.end(), {square1x20, square2x20, square3x20,square4x20, square5x20, 
                            square6x20, square7x20, square8x20, square9x20, square10x20});
                            

    column1.insert(column1.end(), {square1x1, square1x2, square1x3, square1x4, square1x5,
                                square1x6, square1x7, square1x8, square1x9, square1x10,
                                square1x11, square1x12, square1x13, square1x14, square1x15,
                                square1x16, square1x17, square1x18, square1x19, square1x20});

    column2.insert(column2.end(), {square2x1, square2x2, square2x3, square2x4, square2x5,
                                square2x6, square2x7, square2x8, square2x9, square2x10,
                                square2x11, square2x12, square2x13, square2x14, square2x15,
                                square2x16, square2x17, square2x18, square2x19, square2x20});

    column3.insert(column3.end(), {square3x1, square3x2, square3x3, square3x4, square3x5,
                            square3x6, square3x7, square3x8, square3x9, square3x10,
                            square3x11, square3x12, square3x13, square3x14, square3x15,
                            square3x16, square3x17, square3x18, square3x19, square3x20});

    column4.insert(column4.end(), {square4x1, square4x2, square4x3, square4x4, square4x5,
                            square4x6, square4x7, square4x8, square4x9, square4x10,
                            square4x11, square4x12, square4x13, square4x14, square4x15,
                            square4x16, square4x17, square4x18, square4x19, square4x20});

    column5.insert(column5.end(), {square5x1, square5x2, square5x3, square5x4, square5x5,
                            square5x6, square5x7, square5x8, square5x9, square5x10,
                            square5x11, square5x12, square5x13, square5x14, square5x15,
                            square5x16, square5x17, square5x18, square5x19, square5x20});

    column6.insert(column6.end(), {square6x1, square6x2, square6x3, square6x4, square6x5,
                            square6x6, square6x7, square6x8, square6x9, square6x10,
                            square6x11, square6x12, square6x13, square6x14, square6x15,
                            square6x16, square6x17, square6x18, square6x19, square6x20});

    column7.insert(column7.end(), {square7x1, square7x2, square7x3, square7x4, square7x5,
                            square7x6, square7x7, square7x8, square7x9, square7x10,
                            square7x11, square7x12, square7x13, square7x14, square7x15,
                            square7x16, square7x17, square7x18, square7x19, square7x20});

    column8.insert(column8.end(), {square8x1, square8x2, square8x3, square8x4, square8x5,
                            square8x6, square8x7, square8x8, square8x9, square8x10,
                            square8x11, square8x12, square8x13, square8x14, square8x15,
                            square8x16, square8x17, square8x18, square8x19, square8x20});

    column9.insert(column9.end(), {square9x1, square9x2, square9x3, square9x4, square9x5,
                            square9x6, square9x7, square9x8, square9x9, square9x10,
                            square9x11, square9x12, square9x13, square9x14, square9x15,
                            square9x16, square9x17, square9x18, square9x19, square9x20});

    column10.insert(column10.end(), {square10x1, square10x2, square10x3, square10x4, square10x5,
                            square10x6, square10x7, square10x8, square10x9, square10x10,
                            square10x11, square10x12, square10x13, square10x14, square10x15,
                            square10x16, square10x17, square10x18, square10x19, square10x20});


    board_columnview.insert(board_columnview.end(), {column1, column2, column3, column4, column5,
                                                    column6, column7, column8, column9, column10});

    board_rowview.insert(board_rowview.end(), {row1, row2, row3, row4, row5, row6, row7, row8, row9, row10,
                                        row11, row12, row13, row14, row15, row16, row17, row18, row19, row20});
}

Square Gameboard::search(int x, int y){
    return board_columnview[x-1][y-1];
}

//Gameboard gameboard();

//int s = 10;