#!/usr/bin/python3
''' returns the perimeter of the island described in grid '''


def island_perimeter(grid):
    ''' grid is a list of list of integers '''
    p = 0
    try:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    if grid[i][j + 1] == 0:
                        p = p + 1
                    if grid[i][j - 1] == 0:
                        p = p + 1
                    if grid[i + 1][j] == 0:
                        p = p + 1
                    if grid[i - 1][j] == 0:
                        p = p + 1
    except IndexError:
        p = p + 1
    return p
