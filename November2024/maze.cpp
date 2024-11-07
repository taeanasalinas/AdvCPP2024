#include <iostream>
using namespace std;
 
// Constants for the maze dimensions
const int i = 7;
const int j = 6;
 
 

// Maze representation
// 0 - Open path
// 1 - Wall
// 2 - Part of the solution path
int maze[i][j] = {
    {1, 1, 2, 1, 1, 1},
    {1, 0, 2, 2, 1, 1},
    {1, 1, 1, 2, 1, 1},
    {1, 0, 0, 2, 2, 1},
    {1, 1, 0, 1, 2, 1},
    {1, 0, 0, 2, 2, 1},
    {1, 1, 1, 2, 1, 1},
};
 
// Function to print the maze with solution path
void printMaze() {
   
    
for(int i = 0; i < 7; i++)
  {
    for(int j = 0; j < 6; j++)
    {
      cout << maze[i][j] << " ";
    }
    

    cout << endl;
    // TODO: Loop through each cell in the maze and print
    // '#' for walls, '.' for solution path, and ' ' for open spaces
}}
 
// Recursive function to solve the maze
bool solveMaze(int i, int j) {
    // Base case: Check if (x, y) is out of bounds or a wall
    // TODO: Implement checks for boundaries and walls
    
    // Base case: Check if we've reached the end of the maze
    // TODO: Implement check for reaching the goal position
 
    // Mark current cell as part of the solution path
    // TODO: Update the cell to represent part of the path
 
    // Recursive calls: Move in each direction (right, left, down, up)
    // TODO: Call solveMaze recursively for each direction
 
    // Backtrack: If no path is found, reset the cell to its original state// TODO: Undo the marking for the path
 
    return false; // No solution found from this position
}
 
int main() {
    // Start the maze solver from the top-left corner
    if (solveMaze(0, 0)) {
        cout << "Path found:\n";
    } else {
        cout << "No path found.\n";
    }
    printMaze();  // Display the maze with the solution path
    return 0;
}