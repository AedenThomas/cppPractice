def findMaxNum(x, y, z):
    if x == y:
        return max(x, x + min(z, (x - 1) // 2 * 2) + 1)
    elif x > y:
        return max(x, x - min(z, x - y))
    else:
        if z < y - x:
            return -1
        return max(x, x + ((y - x) // 2) * 2 + min(2, (y - x) % 2, z - (y - x)))




print(findMaxNum(8, 5, 3))  
print(findMaxNum(4, 4, 6))  
