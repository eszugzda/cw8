//zad 11



#include <stdio.h>
#include <string.h>

int OnEnd(char *string, char *text)
{
  int k, i=strlen(text), j=strlen(string)-1, string_len = strlen(string);
  for(k=i-1; k>=i-string_len; k--)
  {
        if(text[k] != string[j])
                return -1;
        --j;
  }
  if(text[i-string_len-1]==' ')
  return 1;
  else
  return -1;
}
int main()
{
  char *text = "ala ma kota";
  char *string = "kota";
  printf("%d\n",OnEnd(string,text));
return 0;
}

//zad12

#include <stdlib.h>

#define TAB_SIZE 4

void getString(char *wsk)
{
    char static_table[TAB_SIZE];
    char character_input;
    int i = 0;
    printf("Ilosc znakow do wpisania: %d\n", TAB_SIZE);
    while ( i < TAB_SIZE )
    {
        character_input = getchar();
        if( character_input != '\n' )
        {
            static_table[i] = character_input;
            *(wsk+i) = static_table[i];
            ++i;
        }
    }
    printf("Zawartosc table:\n");
    for (i=0; i<TAB_SIZE; ++i)
        printf("%c ", *(wsk+i));
}
int main()
{
    char *table = malloc(sizeof(char)*TAB_SIZE);
    char *tableN = NULL;
    char *tableR = NULL;
    getString(table);
	printf("\n");
    return 0;
}

//13

#include <stdio.h>
#include <stdlib.h>
#define TAB_SIZE 4
void getStringN(char *table, int n)
{
    table = malloc(sizeof(char)*n);
    char character_input;
    int i = 0;
    printf("Ilosc znakow do wpisania: %d\n", n);
    while ( i < n )
    {
        character_input = getchar();

        if( character_input != '\n' )
        {
            *(table+i) = character_input;
            ++i;
        }
    }
    printf("Zawartosc table:\n");
    for (i=0; i<n; ++i)
        printf("%c ", *(table+i));
}
int main()
{
    char *table = malloc(sizeof(char)*TAB_SIZE);
    char *tableN = NULL;
    char *tableR = NULL;
    getStringN(tableN, TAB_SIZE);
	printf("\n");
    return 0;
}

//14

void getStringR(char *table)
{
    char static_table[TAB_SIZE];
    char character_input;
    int i = 0;
    printf("Ilosc znakow do wpisania: %d\n", TAB_SIZE);
    while ( i < TAB_SIZE )
    {
        character_input = getchar();
        if( character_input != '\n' )
        {
            static_table[i] = character_input;
            table = realloc(table, sizeof(char)*(i+1));
            *(table+i) = static_table[i];
            ++i;
        }
    }
    printf("Zawartosc table:\n");
    for (i=0; i<TAB_SIZE; ++i)
        printf("%c ", *(table+i));
}
int main()
{
    char *table = malloc(sizeof(char)*TAB_SIZE);
    char *tableN = NULL;
    char *tableR = NULL;
    getStringR(tableR);
	printf("\n");
    return 0;
}
