#!/usr/bin/python3
"""
Calculate the perimeter of the island
"""


def island_perimeter(grid):
    """
    loops and increments perimeter when
    conditions are met
    """

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    if not grid or not grid[0]:
        return 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2

    return perimeter
