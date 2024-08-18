#ifndef BLOCK_HPP
#define BLOCK_HPP

/**
 * A block of a grid. Blocks represent both empty grid spaces, and filled grid spaces.
 */
class Block {
    public:
        int val;            /**< value of a block */
        bool is_empty;      /**< whether a block is "empty" (has a value of 0) */
        bool not_combined;  /**< whether a block has been combined yet when a grid moves */

        // constructors
        Block();
        Block( int );
        Block( int, bool );
        Block( const Block&, int );

        // "destructor"
        void remove();

        // equality functions
        friend bool operator==( Block const&, Block const& );
        friend bool operator!=( Block const&, Block const& );

};

#endif
