#!/usr/bin/python3
"""
    Module for the funtion island_perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if grid[i + 1][j] == 0:
                    count += 1
                if grid[i - 1][j] == 0:
                    count += 1
                if grid[i][j + 1] == 0:
                    count += 1
                if grid[i][j - 1] == 0:
                    count += 1

    return count
