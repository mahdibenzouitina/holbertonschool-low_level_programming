#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for c in range(len(grid)):
        for d in range(len(grid[c])):
            if grid[c][d] == 1:
                if grid[c][d - 1] == 1 and d >= 1:
                    perimeter += 3
                if d + 1 >= len(grid[c]) or grid[c][d + 1] == 0:
                    perimeter += 1
                if c + 1 >= len(grid) or grid[c + 1][d] == 0:
                    perimeter += 1
    return (perimeter)
