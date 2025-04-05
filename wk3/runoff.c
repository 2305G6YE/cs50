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
  //1: Determine if any candidate >50% of voter_count
  for(i = 0, i < candidate, i++)
  {
    if(election.vote1[i] > (voters / 2))
    {
      //If such is found
      printf("%s, election.name[i]\n");
      return;
    }
    else
    {
      int lowest = election.vote1[0]
      for (i = 1, i < candidate, i++)
      {
        if (election.vote1[i] > lowest)
        {
          //Identify which [i] is lowest in vote1
          election.vote1[i] = lowest
        }
      }
      for (i = lowest, i < candidate, i++)
      {
        election.name[i + 1] = election.name[i]
        election.vote2[i + 1] = election.vote2[i]
        election.vote3[i + 1] = election.vote3[i]
      }
    }
  }
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
      //election.name[0] is not the same as argv[0]. //argv[0]is the program. election.name[0] is candidate 1.
      if (strcmp(election.name[i], rank1) == 0)
      {
        //fill 1st array
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
        //fill 2nd array
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
    