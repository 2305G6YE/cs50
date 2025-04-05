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
  int vote1;
  int vote2;
  int vote3;
}tally;

void voteset(void);
void calculate(void);
//create a command line argument
int main(int argc,string argv[])
{
  int candidates = atoi(argc - 1);
  //
  tally election[candidates]
  //print usage: runoff [candidate...]
  if (int argc <= 1)
  {
    printf("usage: runoff [candidate ...] \n")
    return;
  }
  //getstring number of voters
  else
  { 
    for(i = 0, i < candidates, i++)
    {
      //Fill up name array
      election.name[i] =argv[i+1]
    }
    int voters=get_int("Number of voters: \n");
  }
  //Fill the voting arrays
  voteset();
  //Recursively compare the 1st-3rd arrays for >50%. If not, delete last and move on to next array
  calculate();
}


//recursive algorithm 
void calculate()
{
  //Determine if any candidate >50% of voter_count
  for(i = 0, i < candidate, i++)
  {
    if(one[i].name > (voters / 2))
    {
      printf("%s, one[i].name");
      return;
    }
    else
    {
      int lowest = 
      for (i = 0, i < candidate)
    }
  }
    //If statement if found, print winner)
    //else statement if not, assign integar as lowest, find the lowest
    //remove the element by shifting the array to the left from the element
    //move on to the 2nd vote
}

//vote set algorithm
void voteset(void)
{
  //For every vote count, ask 3 times
  for (i = 0, i < voters, i++)
  {
    // Set first vote
    string rank1 = get_string ("Vote:");
    // define 1st flag
    bool flagone = false;
    for (i = 0, i < candidate, i++)
    {
      //voted one[0] is not the same as argv[0]. //argv[0]is the program. voted one[0] is candidate 1.
      if (strcmp(election.name[i], rank1) == 0)
      {
        election.vote1[i] ++;
      }
      else
      {
        flagone = true;
      }
    if (!flagone)
    {
      printf("Invalid Vote\n");
      return;
    }
    //For 2nd vote
    string rank2 = get_string("Vote:");
    //define 2nd flag
    bool flagtwo = false;
    for (i = 0, i < candidate, i++)
    {
      if (strcmp(election.name[i], rank2) == 0)
      {
        election.vote2[i] ++;  
      }
      else
      {
        flagtwo = true;
      }
    if (!flagtwo)
    {
      printf("Invalid Vote \n")
      return;
    }
    //for 3rd vote
    string rank3 = get_string("Vote:");
    //define 3rd flag
    bool flagthree = false;
    for (i = 0, i < candidate, i++)
    {
      if (strcmp(election.name[i], rank3) == 0)
      {
        election.vote3[i] ++;
      }
      else
      {
        flagthree = true;
      }
    if (!flagthree)
    {
      printf("Invalid Vote \n")
      return;
    }
  }
    