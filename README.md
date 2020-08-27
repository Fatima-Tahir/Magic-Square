# Magic-Square

A magic square of order (or size) ‘n’ is an arrangement of n^2 numbers, usually distinct integers, in an n by n square such that the sum of all columns, all rows and both diagonals sum to same value. A magic square contains integers from 1 to n^2.

I write a program that creates and prints a magic square of order (size) 7.
Which means I will declare a 2D array of 7 rows and 7 columns. However make rows and columns constant variables, so that my code can print a magic square of any order (which will be an odd number) apart from 7.

Scheme of building a magic square:
A magic square is made according to following steps. 

a)	Numbers are placed in ascending order starting with 1 , i.e. 1, 2, 3, 4, …
b)	Always start by placing number 1 in topmost row and center column. See in the above square.
c)	After placing a number let us say ‘p’ in a cell the next number ‘p+1’ will be placed in a cell present in row above it and the column to its right. For instance in above example  look at number 6 in cell (2, 1), so number 7 is place in cell (1, 2) and number 8 is placed in cell (0, 3) and so on.
d)	If a number occurs in a cell that has no row above it, then the next number should be placed in the cell present in the lower most row and the column to its right. For instance in above square, number 8 in cell (0, 3) has a column to its right but no row above it so the next number 9 is placed in the column to its right and in lower most row i.e. cell (4, 4).
e)	If a number occurs in a cell that has no column to its right, then the next number should be placed in the cell present in the left most column and the row right above it. For instance in above square, number 22 in cell (2, 4) has a row above it but no column to  its right, so the next number 23 is placed in the row above it and left most column i.e. cell (1, 0).
f)	If a number occurs in a cell that has no row above it and no column to its right (e.g. number 15 in above square at cell (0,4) ), 
OR
If a number occurs in a cell that has row above it and column to the right but the cell there is previously occupied (e.g. number 10 in above square at cell (3,0)  has its upper right neighboring cell holding the number 6) 
In both above situations the next number is placed in the cell right below the current cell, as you can see how numbers 16 and 11 are placed in above square. 

