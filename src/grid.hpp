#ifndef GRID_HPP
#define GRID_HPP

#include "block.hpp"

class Grid {
    public:
        // grid is an array of blocks
        Block blocks[16];

        // score of a grid
        int score;

        // iteration of a grid for printing
        int iteration;

        //
        bool not_moved;

        // direction of previous grid move
        char dir;

        // constructors
        Grid();
        Grid( const Grid& );
        // destructor
        ~Grid();

        // move functions
        Grid *moveLeft();
        Grid *moveRight();
        Grid *moveUp();
        Grid *moveDown();

        // Astar search weight
        double value() const;

        // return max value + index
        int maxVal() const;
        int maxValI() const;

        // print grid
        void print();

        // equality and comparison functions
        friend bool operator==( Grid const&, Grid const& );
        friend bool operator!=( Grid const&, Grid const& );
        friend bool operator>( Grid const&, Grid const& );
        friend bool operator<( Grid const&, Grid const& );

};

#endif
