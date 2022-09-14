#!/usr/bin/python3

"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """ Calculate perimeter of grid of an island
     The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    p = 0
    height = len(grid)
    width = len(grid[0])
    for lth in range(height):
        for bth in range(width):
            if (grid[lth][bth] == 1):
                if (lth == 0):
                    p += 1
                if (grid[lth - 1][bth]) == 0:
                    p += 1  # top surrounded by water
                if (lth == (height - 1)):
                    p += 1
                if (grid[lth + 1][bth]) == 0:
                    p += 1  # bottom surrounded by water
                if (bth == 0):
                    p += 1
                if (grid[lth][bth - 1] == 0):
                    p += 1  # left surrounded by water
                if (bth == (width - 1)):
                    p += 1
                if (grid[lth][bth + 1]) == 0:
                    p += 1  # right surrounded by water
    return p
