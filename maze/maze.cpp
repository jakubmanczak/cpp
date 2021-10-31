#include <iostream> // console input/output
#include <fstream>  // file streaming
#include <cstring>  // string operations
#include <queue> // queues
using namespace std;

/* **** ******** ******** ******** **** **
**      rozwiązywacz labiryntów 2D      **
**        C++ 2021 jakub mańczak        **
** **** ******** ******** ******** **** */

/*     ale taki co nie działa w 100%    */

int main()
{

  string mazeName, line;
  int lineLen, rowCount = 1;
  cout << "enter maze file's name: ";
  cin >> mazeName;

  fstream mazeFile; // read the file holding maze data
  mazeFile.open(mazeName + ".txt", fstream::in);

  getline(mazeFile, line);
  lineLen = line.length(); // save firstline length

  while (getline(mazeFile, line))
  {
    if (line.length() != lineLen)
    {
      cout << "bad file my guy" << endl;
      return 1; // if maze is not rectangular, test shall not pass
    }
    rowCount++;
  }

  // loaded maze message, but nicely printed
  cout << "loaded maze from " + mazeName + ".txt" + " with "
       << rowCount << " [" << rowCount - 1 << "] rows and "
       << lineLen << " [" << lineLen - 1 << "] columns."
       << endl;

  // make a matrix (2D array) that holds values from text file
  char maze[rowCount][lineLen];

  mazeFile.close(); // reset position of mazeFile after validation
  mazeFile.open(mazeName + ".txt", fstream::in);

  // translate maze into matrix (2D array)
  for (int i = 0; i < rowCount; i++)
  {
    for (int l = 0; l < lineLen; l++)
    {
      mazeFile >> maze[i][l];
    }
  }

  mazeFile.close();

  // print maze preview
  cout << "\nMAZE PREVIEW\n";
  for (int i = 0; i < rowCount; i++)
  {
    for (int l = 0; l < lineLen; l++)
    {
      cout << maze[i][l];
    }
    cout << "\n";
  }

  // ----- ----- GRAPH TRAVERSAL STARTS HERE ----- -----

  // variables free to change to adjust program for a different maze
  const char pointB = 66, pointA = 65, wall = 88;// freeSpace = 45;

  queue<int> queueRow;
  queue<int> queueLen;
  bool visitable[rowCount][lineLen];
  bool visited[rowCount][lineLen];
  bool pointBhit = true;
  int previousRow[rowCount][lineLen], previousLen[rowCount][lineLen];
  int pointAcoords[] = {0,0}, pointBcoords[] = {0,0};
  
  for (int i = 0; i < rowCount; i++)
  {
    for (int l = 0; l < lineLen; l++)
    {
      visited[i][l] = false;
      if (maze[i][l] == wall)
      {
        visitable[i][l] = false;
      } else {
        visitable[i][l] = true;
      }

      previousRow[i][l] = 0;
      previousLen[i][l] = 0;

      if(maze[i][l] == pointA){
        queueRow.push(i);
        queueLen.push(l);
        pointAcoords[0] = i;
        pointAcoords[1] = l;
      }

    }
  } // check if given coordinate should be visitable and fill the array

  cout << "\nVISITED ARRAY\n"; // visited array
  for (int i = 0; i < rowCount; i++)
  {
    for (int l = 0; l < lineLen; l++)
    {
      cout << visited[i][l];
    }
    cout << "\n";
  }

  while(!queueRow.empty() && pointBhit){
    int currentRow, currentLen;
    previousRow[queueRow.front()][queueLen.front()] = currentRow;
    previousLen[queueRow.front()][queueLen.front()] = currentLen;
    currentRow = queueRow.front();
    currentLen = queueLen.front();
    queueRow.pop();
    queueLen.pop();

    if(maze[currentRow][currentLen] == pointB){
      cout << "pointb hit!" << endl;
      cout << queueRow.size() << endl;
      pointBcoords[0] = currentLen;
      pointBcoords[1] = currentRow;
      cout << queueRow.size() << endl;
      pointBhit = false;
    }

    if(visitable[currentRow + 1][currentLen]){ // look down
      if(!visited[currentRow + 1][currentLen]){
        queueRow.push(currentRow + 1);
        queueLen.push(currentLen);
        visited[currentRow + 1][currentLen] = true;
      }
    }
    if(visitable[currentRow][currentLen -1]){ // look left
      if(!visited[currentRow][currentLen -1]){
        queueRow.push(currentRow);
        queueLen.push(currentLen - 1);
        visited[currentRow][currentLen - 1] = true;
      }
    }
    if(visitable[currentRow][currentLen + 1]){ // look right
      if(!visited[currentRow][currentLen + 1]){
        queueRow.push(currentRow);
        queueLen.push(currentLen + 1);
        visited[currentRow][currentLen + 1] = true;
      }
    }
    if(visitable[currentRow - 1][currentLen]){ // look up
      if(!visited[currentRow - 1][currentLen]){
        queueRow.push(currentRow - 1);
        queueLen.push(currentLen);
        visited[currentRow - 1][currentLen] = true;
      }
    }
  }

  cout << "\nVISITED ARRAY\n";
  for (int i = 0; i < rowCount; i++)
  {
    for (int l = 0; l < lineLen; l++)
    {
      cout << visited[i][l];
    }
    cout << "\n";
  }

  cout << "\nPREVIOUS ROW/LEN ARRAY\n";
  for (int i = 0; i < rowCount; i++) //displays entire previous row, len table
  {
    for (int l = 0; l < lineLen; l++)
    {
      cout << previousRow[i][l] << " ";
      cout << previousLen[i][l];
      cout << "   ";
    }
    cout << "\n";
  }

  cout << endl;
  cout << "POINT A: " << pointAcoords[0] << " " << pointAcoords[1] << endl;
  cout << "POINT B: " << pointBcoords[0] << " " << pointBcoords[1] << endl; 

  // PATH FROM POINT A TO POINT B
  int backtrackRow, backtrackLen;
  int backtrackRow2, backtrackLen2;

  cout << "\nPATH FROM POINT A TO POINT B\n";
  
  bool pathBack = true;
  backtrackRow = pointBcoords[0];
  backtrackLen = pointBcoords[1]; 
  while (pathBack){
    cout << backtrackRow << " " << backtrackLen << endl;
    backtrackRow2 = backtrackLen; // somewhere before i messed
    backtrackLen2 = backtrackRow; // with the order so now we fix :)
    backtrackRow = previousRow[backtrackRow2][backtrackLen2];
    backtrackLen = previousLen[backtrackRow2][backtrackLen2];
    if(backtrackRow == pointAcoords[0] && backtrackLen == pointAcoords[1]){
      pathBack = false;
      cout << pointAcoords[0] << " " << pointAcoords[1];
    }
  }
  
  cout << "\n";

  cout << "\nexiting the program\n";
  return 0;
}
