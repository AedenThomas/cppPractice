#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Initializes the parent array with the indices of the 2D array
void makeSet(int size,int parent[])
{
    for(int i = 0; i < size; i++)
    {
        parent[i] = i;
    }
}

// Finds the representative element of a set using path compression
int find(int x,int parent[])
{
    if(parent[x] != x)
    {
        parent[x] = find(parent[x],parent);
    }
    return parent[x];
}

// Merges two sets together
void Union(int x, int y, int parent[])
{
    int xRep = find(x,parent);
    int yRep = find(y,parent);

    if(xRep != yRep)
    {
        parent[xRep] = yRep;
    }
}

// Counts the number of connected "islands" of 1's in the 2D array
int countIslands(int arr[20][20],int rows,int cols,int parent[])
{
    // Initialize the parent array
    makeSet(rows*cols,parent);

    // Union any neighboring 1's
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == 1)
            {
                if(i+1 < rows && arr[i+1][j] == 1)
                    Union(i*cols+j, (i+1)*cols+j, parent);
                if(i-1 >= 0 && arr[i-1][j] == 1)
                    Union(i*cols+j, (i-1)*cols+j, parent);
                if(j+1 < cols && arr[i][j+1] == 1)
                    Union(i*cols+j, i*cols+j+1, parent);
                if(j-1 >= 0 && arr[i][j-1] == 1)
                    Union(i*cols+j, i*cols+j-1, parent);
            }
        }
    }

    // Count the number of unique representatives
    int count = 0;
    // Allocate memory for the visited array
int *visited = (int *)malloc(rows*cols * sizeof(int));
    // Initialize the visited array with 0's
    memset(visited, 0, rows*cols * sizeof(int));
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == 1)
            {
                int rep = find(i*cols+j, parent);
                if(!visited[rep])
                {
                    count++;
                    visited[rep] = 1;
                }
            }
        }
    }

    return count;
}


int main()
{
        int arr[20][20] = {{1, 1, 1, 1, 1},
                       {0, 1, 0, 0, 1},
                       {1, 0, 0, 1, 1},
                       {0, 1, 0, 0, 0},
                       {1, 0, 1, 0, 1}};
    int rows = 5, cols = 5;
    int parent[rows*cols];
    int count = countIslands(arr, rows, cols, parent);
    printf("Number of islands: %d", count);
    return 0;
}
