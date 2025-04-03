//necessary libraries
#include <cs50.h>
#include <stdio.h>
#include <string.h>
//for atoi
#include <stdlib.h>

//three arrays for each vote
typedef struct
{
  string name;
  int number;
} voted;

void calculate(void);
//create a command line argument
int main(int argc,string argv[])
{
  int candidates = atoi(argc - 1);
  //
  voted one[candidates]
  voted two[candidates]
  voted three[candidates]
  //print usage: runoff [candidate...]
  if (int argc <= 1)
  {
    printf("usage: runoff [candidate ...] \n")
    return;
  }
  //getstring number of voters
  else
  {
    int voters=get_int("Number of voters: \n");
  }
  //Fill the voting arrays
  voteset();
}

//Recursively compare the 1st-3rd arrays for >50%. If not, delete last and move on to next array
//print Winner

//recursive algorithm 
void calculate()

//vote set algorithm
void voteset(void)
{
  //For every vote count, ask 3 times
  for (i = 0, i < voters, i++)
  {
    int rank1 = get_int ("Vote:\n");
    int rank2 = get_int ("Vote:\n");
    int rank3 = get_int ("Vote:\n");
    // Add to array 1
    if (rank1 = vote_one.name)
  }