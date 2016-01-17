/** include libraries */
#include <stdio.h>
#include <string.h>

/** declare global structure named car with four elements */
typedef struct car 
{
  char brand[100];
  char model[100];
  char year[100];
  char color[100];
};

/**
 *function to sort cars alphabeticlly by model
 * @param array of car structures
 */
print_cars_by_model(car record[])
{
  int c, d, e=9;
  /** for loops to compare each two strings in structure */
  for (c = 0 ; c < 9; c++)
  {
    for (d = 0 ; d < e; d++)
    {
	/** use strcmp to determine which string comes first alphabetically */
      if (strcmp(record[d].model, record[d+1].model) > 0) 
      {
	/** switch order of structures if they are not alphabetical */
        record[10] = record[d+1];
	record[d+1] = record[d];
	record[d] = record[10];
      }
    d++;
    }
  e--;
  d=0;
  }
  printf("cars sorted by model:\n");
  for(d = 0; d < 10; d++)
  {
		/** print the cars sorted alphabetically */
	printf("%99s%99s%99s%99s", record[d].brand, record[d].model, record[d].year, record[d].color);
  }
}

/**
 * function to print cars in order of year, oldest to newest
 * @param array of car structures
 */
print_cars_by_year(car record[])
{
  int c, d, e=9;
  for (c = 0 ; c < 9; c++)
  {
    for (d = 0 ; d < e; d++)
    {
	/** use strcmp to check if years are in order */
      if (strcmp(record[d].year, record[d+1].year) > 0) 
      {
	/** switch order of structures if years are not in order */
       	record[10] = record[d+1];
        record[d+1] = record[d];
        record[d] = record[10];
      }
    d++;
    }
  e--;
  d=0;
  }
  printf("Cars sorted by year:\n");
  for(d = 0; d < 10; d++)
  {
	/** print the cars sorted by year */
        printf("%99s%99s%99s%99s", record[d].brand, record[d].model, record[d].year, record[d].color);   
  }


}
/**
 *Function to print dulicate car records
 *@param array of car structures
 */
printrepeats(car record[])
{
  int c=0;
  /** for loop to check each record */
  for(c = 0; c < 10; c++)
  {
	/** only execute statement if all four fields of structure are the same */
    if((strcmp(record[c].brand, record[c+1].brand)==0)&&(strcmp(record[c].model, record[c+1].model)==0)&&(strcmp(record[c].year, record[c+1].year)==0)&&(strcmp(record[c].color, record[c+1].color)==0))
    {
	/** print out  message and the duplicated record */
      printf("There is a duplicate of the following record:\n");
      printf("%s%s%s%s", record[c].brand, record[c].model, record[c].year, record[c].color);
    }
  }
}
/**
 * Main function to accept input from a file and to call functions
 * @param argc number of arguments
 * @param argv array of arguments being passed
 */

int main(int argc, char** argv)
{
  /** create array of structs
  car record[10];
  /** temporary strings to store infile data */
  char brandstring[100], modelstring[100], yearstring[100], colorstring[100];
  int yeartemp;
  /** open infile */
  FILE *recordfile = fopen("carrecords.txt", "r");
  if (recordfile == NULL)
  {
	/** print message if file cannot be opened */
    printf("Input file could not be opened");
  }
  int i;
  /** use for loop to red in data for each car record from file */
  for(i=0;i<10;i++)  /** There's something wrong with this file reading system */
  {
    fscanf(recordfile, "%99s %99s %99s %99s", brandstring, modelstring, yearstring, colorstring);  
    strcpy(record[i].brand, brandstring);
    strcpy(record[i].model, modelstring);
    strcpy(record[i].year, yearstring);
    strcpy(record[i].color, colorstring);
    printf("%s%s%s%s\n", brandstring, modelstring, yearstring, colorstring);
  }
  print_cars_by_model(record);
  print_cars_by_year(record);
  printrepeats(record);
  int j;
  for(j=0;j<10;j++)
  {
	/** print the inputted data to confirm accuracy */
    printf("%s%s%s%s\n", record[j].brand, record[j].model, record[j].year, record[j].color);
  }
  return 0;
}
