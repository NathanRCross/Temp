typedef struct
{
    int occupied; // 0 unoccupied, 1 occupied
    char symbol; //'X' or 'O' or ' '
} Cell;

typedef struct
{
    Cell cells[3][3]; // 9 spaces in our board
    int winner; // 0 or 1 if player 0 or player 1 wins, or -1 if no winner
    int counter; // for how many turns have been played in total
    int size; // should match the dimensions of the `cells` array
    int currentPlayer; // 0 or 1
} Board;

/* global to make things easy, hereby referred to as "your gameboard" */
Board mainBoard;

// In function prototypes, just the type of each argument is sufficient.
Cell initializeCell(char, int);
void getPosition(int);
void updateBoard(int, int, int);
int isWinningMove(int, int, int);
void printBoard();

int main(void)
{
    /* Initialize the members of the global Board variable `board`.
     * You should set its `size`, `counter`, `currentPlayer`, and `winner`.
     */

    /* Initialize all the cells to "empty", i.e. unoccupied and with
     * no symbol in them (hint: a space character works best).
     */

    while ((mainBoard.winner == -1) && (mainBoard.counter < 9))
    {
        /* Set the current player. This should alternate every loop.
         * Have the current player play their turn using a call to
         * the getPosition() function.
         * Print out the game board.
         * Increment the counter of the game board.
         */
    }

    /* If we reach here, someone won, or it was a tie game.
     * Print out which player won if the game didn't end in a tie,
     * or that the game ended in a tie.
     */
    return 0;
}
void printBoard()
{
    /* Don't touch this function. It already does things nicely for you.*/
    for (int row = 0; row < mainBoard.size; row++)
    {
        printf("| ");
        for (int column = 0; column < mainBoard.size; column++)
        {
            printf("%c | ", mainBoard.cells[row][column].symbol);
        }
        printf("\n");
    }
}

Cell initializeCell(char sym, int isOccupied)
{
    /* Create a local variable of type Cell and initialize its members
     * according to the arguments passed into this function.
     */
    // This function is here mainly to show you that you can return
    // a struct in a function.
}

void getPosition(int player)
{
    int row, col; // Remember, these are LOCAL variables to this function.
    do
    {
        printf("Enter the row: ");
        scanf("%d", &row);
        printf("Enter the column: ");
        scanf("%d", &col);
        printf("\n");
    } while (/* insert condition here */)
    /* The do-while loop above should continue looping if their selection is
     * outside the bounds of our board OR if the cell is already occupied
     */

    /* Update the board with the player's symbol using a call to the
     * updateBoard() function.
     */
}

void updateBoard(int row, int col, int player)
{
    /* Update the state of the cell given by `row` and `col`. The cell should
     * be changed to occupied and the symbol should be 'X' or 'O' depending
     * on the player.
     */

    /* Assign the result of calling isWinningMove() to your game board's
     * `winner` member. Basically we check after each move if that move
     * resulted in a win for the current player.
     */
}

int isWinningMove(int row, int col, int player)
{
    int possibleWin = 0;
    /* Create a local variable of type char and set it to either
     * 'X' or 'O' depending on the player.
     */
    
    // Check the row.
    for (int column = 0; column < mainBoard.size; column++)
    {
        if (mainBoard.cells[row][column].symbol == playerSymbol)
            possibleWin = 1;
        else
        {
            possibleWin = 0;
            break;
        }
    }
    // If `possibleWin` is 1 at this stage, that means there were 
    // three identical symbols in that row, so return the player that won.
    if (possibleWin)
        return player;

    /* Check the column */

    /* If `possibleWin` is a 1, the current player won. Return that player. */

    if (col == row)
    {
        /* Check the main diagonal (top left to bottom right) */
    }
    else if (col == mainBoard.size - 1 - row)
    {
        /* Check the secondary diagonal (bottom left to top right) */
    }

    /* Check if `possibleWin` is a 1. If it is, return the current player.
     * Otherwise, return -1 to indicate no one won on that move.
     */
}
