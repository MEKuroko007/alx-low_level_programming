#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, Width and Height don’t exceed 100
    """
    Width = len(grid[0])
    Height = len(grid)
    Ribs = 0
    Size = 0

    for i in range(Height):
        for j in range(Width):
            if grid[i][j] == 1:
                Size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    Ribs += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    Ribs += 1
    return Size * 4 - Ribs * 2
