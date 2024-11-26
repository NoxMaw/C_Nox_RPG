#include "nox.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
  int name_size[] = {2, 3, 4}, i = get_i_value() % 2, j = 0, n = 0;
  char *titles[2] = {"Sir", "Madame"};
  char *name;
  char charname[8];
  
  printf("%s ", titles[i]);

  if (get_i_value() % 2)
    i++;
  name = Nox_Speak(1, i);
  while (name[j])
    {
      charname[j] = name[j];
      j++;
    }

  if (get_i_value() % 2 && i < 2)
    i++;
  name = Nox_Speak(1, i);
  while (name[n])
    {
      charname[j] = name[n];
      j++;
      n++;
    }
  charname[0] = toupper(charname[0]);

  printf("%s", charname);

  printf("!\n");
  return(0);
}
