#!/usr/bin/python3
"""impremen of island_perimmeter function"""

def island_perimeter(grid):
    """
    Function that returns the perimeter of an island described in a grid.
    """
    perm = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perm += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perm -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perm -= 2

    return perm

