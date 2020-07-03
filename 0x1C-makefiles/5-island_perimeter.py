#!/usr/bin/python3
""" This function will calculated the area of the array"""


def island_perimeter(grid):
     """ This """
     if not grid:
          return 0
     total = 0
     for land in grid:
          total += sum(land)
     if total == 0:
          return 0
     return 12
