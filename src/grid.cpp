#include "grid.hpp"

Grid::Grid() {
    for( int i = 0; i < 16; i++ ) {
        blocks[i] = Block();
    }

    score = 0;
    iteration = 0;
    not_moved = true;
    dir = '\0';
}

Grid::~Grid(){}
