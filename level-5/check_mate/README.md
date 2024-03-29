# CHECK_MATE

### Assignment

```
Assignment name  : check_mate 
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes rows of a chessboard as its argument and checks if
the King is in a check position.

Chess is played on a chessboard, a square 8 by 8 board with 
distinct pieces on it: King, Queen, Bishop, Knight, Rook and Pawns.
For this exercise, you will only play with Pawns, Bishops, Rooks and Queen...
and obviously a King.

Each piece has a unique pattern of capture. All patterns of capture are
detailed in the examples.txt file.

A piece can capture only the first enemy piece it finds in its capture
pattern.

The board will have a variable size but will remain a square. There will
only be one King and all other pieces are against it.
All other characters except those used for pieces are considered empty squares.

The King is considered as in a check position when an enemy piece can
capture it.
When this is the case, you will print "Success" on the standard output
followed by a newline, otherwise you will print "Fail" followed by a newline.

If there are no arguments, the program will print only a newline.
```

### Moves

```
Pion / Pawn (P):

	. . . . . . .
	. . . . . . .
	. . X . X . .
	. . . P . . .
	. . . . . . .
	. . . . . . .
	. . . . . . .

Fou / Bishop (B):

	X . . . . . X
	. X . . . X .
	. . X . X . .
	. . . B . . .
	. . X . X . .
	. X . . . X .
	X . . . . . X

Tour / Rook (R):

	. . . X . . .
	. . . X . . .
	. . . X . . .
	X X X R X X X
	. . . X . . .
	. . . X . . .
	. . . X . . .

Dame / Queen (Q)

	X . . X . . X
	. X . X . X .
	. . X X X . .
	X X X Q X X X
	. . X X X . .
	. X . X . X .
	X . . X . . X 


```

### Examples

```
$> ./check_mate '..' '.K' | cat -e
Fail$
$> ./check_mate 'R...' '.K..' '..P.' '....' | cat -e
Success$
$> ./check_mate 'R...' 'iheK' '....' 'jeiR' | cat -e
Success$
$> ./check_mate '......' '......' '..K...' 'P.B.R.' '..Q...' '......' | cat -e
Fail$
$> ./check_mate | cat -e
$
$>
```