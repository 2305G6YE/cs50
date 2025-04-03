//necessary libraries
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void calculate(void);
//create a command line argument
int main(int argc,string argv[])
{
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
  //print #voters sets
  for(i = 0, i < voters, i++)
    {
    voteset();
    }

//Compare 1st ranking - 'if' statement for >50%, if not, recursive compare 2nd, delete last.
//print Winner

//recursive algorithm 
void calculate(void)

//vote set algorithm
void voteset(void)
{
  one[] = get_int(Vote:)
}