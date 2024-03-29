#!/usr/bin/python3
def island_perimeter(grid):
    """
    compute the perimter of an island in grid
    :param grid: alist pf integers representing the island
    :return: an integer representing the perimeter of the
    salnd
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range (len(grid[0])):
            if grid[i][i] == 1:

                perimeter += 4

                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter

