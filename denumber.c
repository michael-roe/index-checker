#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

static wchar_t buff[1024];

int main(int argc, char **argv)
{
int len;
int gesperrt;
wchar_t *cp;

  setlocale(LC_ALL, getenv("LANG"));

  gesperrt = 0;

  while (fgetws(buff, sizeof(buff), stdin) != 0)
  {
    len = wcslen(buff);
    if (buff[len - 1] == '\n')
    {
      buff[len - 1] = '\0';
      len--;
    }
    cp = buff;
    while (*cp)
    {
      if (iswdigit(*cp))
      {
        while ((cp > buff) && (cp[-1] == ' '))
        {
          cp--;
        }
        *cp = '\0';
        break;
      }
      cp++;
    }
    wprintf(L"%ls\n", buff);
  }
  return 0;
}
