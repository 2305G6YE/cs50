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
    string rank1 = get_string ("Vote:\n");
    
    string rank2 = get_string ("Vote:\n");
    string rank3 = get_string ("Vote:\n");
    // Add to array 1
    for (i = 0, i < candidate, i++)
    {
      //voted one[0] is not the same as argv[0]. //argv[0]is the program. voted one[0] is candidate 1.
      if (strcmp(one.name[i], rank1) == 0)
      {
        one.vote[i] ++;
      }
    }
    // Add to array 2
    for (i = 0, i < candidate, i++)
    {
      if(strcmp(two.name[i], rank2) == 0)
      {
        two.vote[i] ++;
      }
    }
    // Add to array 3
    for (i = 0, i < candidate, i++)
    {
      if(strcmp(three.name[i], rank3) == 0)
      {
        three.vote[i] ++;
      }
    }
  }