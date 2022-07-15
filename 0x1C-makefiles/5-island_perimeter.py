#!/usr/bin/python3
def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if grid[i + 1][j] == 0 or j == len(grid):
                    count += 1
                if grid[i - 1][j] == 0 or j == 0:
                    count += 1
                if grid[i][j + 1] == 0 or i == len(grid[0]):
                    count += 1
                if grid[i][j - 1] == 0 or i == 0:
                    count += 1

    return count
