#!/usr/bin/python3

"""The island_perimete function"""


def island_perimeter(grid):
    """This function returns the perimeter of the island described in grid
    """
    width = len(grid)
    length = len(grid[0])
    land = 0
    adj_land = 0

    for vertical in range(0, width):
        for horizontal in range(0, length):
            if grid[vertical][horizontal] == 1:
                land += 1
                try:
                    if grid[vertical][horizontal - 1] == 1:
                        adj_land += 1
                except Exception:
                    pass
                try:
                    if grid[vertical][horizontal + 1] == 1:
                        adj_land += 1
                except Exception:
                    pass
                try:
                    if grid[vertical - 1][horizontal] == 1:
                        adj_land += 1
                except Exception:
                    pass
                try:
                    if grid[vertical + 1][horizontal] == 1:
                        adj_land += 1
                except Exception:
                    pass
    perimeter = (land * 4) - adj_land
    return perimeter
