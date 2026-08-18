#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    
    Args:
        grid (list of list of int): 2D grid where 0 is water and 1 is land
    
    Returns:
        int: The perimeter of the island
    
    The function calculates perimeter by:
    - Each land cell contributes 4 to perimeter
    - Subtract 1 for each adjacent land cell (shared edge)
    - Adjacent cells are checked horizontally and vertically
    """
    if not grid or not grid[0]:
        return 0
    
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Each land cell starts with 4 sides
                perimeter += 4
                
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                
                # Check right neighbor
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
                
                # Check up neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                
                # Check down neighbor
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
    
    return perimeter
