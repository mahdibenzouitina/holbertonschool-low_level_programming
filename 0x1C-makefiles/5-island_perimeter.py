#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for c in range(len(grid)):
        for d in range(len(grid[c])):
            if grid[c][d] == 1:
                if grid[c][d - 1] == 0:
                    perimeter -= 2
                if d + 1 >= len(grid[c]) or grid[c][d + 1] == 0:
                    perimeter += 2
                if c + 1 >= len(grid) or grid[c + 1][d] == 0:
                    perimeter += 4
    return (perimeter)
