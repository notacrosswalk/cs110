#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define P_SIZE 50000
#define N_WORDS 1000
#define SIZE_WORD 50

/** TESTCASE
* I tried to write a recursive function, but I ended up with a recursive recursive function that recursively recursed.
*/

struct node_t
{
    int frequency;
    char word[50];
};
struct node_t nodes[N_WORDS];

char paragraph[P_SIZE];
int numberOfUniqueWords;
char tempWord[50];

void inputParagraph();
void removeNonEnglish();
void printParagraph();
void convertToUpper(char *);
void indexParagraph();
void processWord(char *, char *);
void makeTempWord(char *, char *);
int wordInList();
void sortList();
void printList();
void userSearch();
int findFrequency(char *);

int main()
{
    inputParagraph();
    removeNonEnglish();
    convertToUpper(paragraph);
    printParagraph();
    indexParagraph();
    sortList();
    userSearch();

    return 0;
}

void inputParagraph()
{
    printf("Enter the paragraph.\n");
    fflush(stdin);
    scanf("%[^\n]s", paragraph); // Might need a /n at the beginning if fflush(stdin) doesn't work
}

void removeNonEnglish()
{
    char *p = paragraph;
    while(*p)
    {
        if(*p >= 'A' && *p <= 'Z');
        else if(*p >= 'a' && *p <= 'z');
        else *p = ' ';
        p++;
    }
}

void printParagraph()
{
    printf("\n%s\n", paragraph);
}

void convertToUpper(char *string)
{
    char *p = string;
    while(*p)
    {
        if(*p >= 'a' && *p <= 'z') *p += ('A' - 'a');
        p++;
    }
}

void indexParagraph()
{
    char *begin = NULL;
    char *p = paragraph;
    // Extract a word first
    while(*p)
    {
        if(begin == NULL && *p != ' ') begin = p;
        if(*(p+1) == ' ' && begin || *(p+1) == '\0' && begin)
        {
            processWord(begin, p);
            begin = NULL;
        }
        p++;
    }
}

void processWord(char *begin, char *end)
{
    makeTempWord(begin, end);
    int result = wordInList();
    if(result != -1)
    {
        nodes[result].frequency += 1;
    }
    else
    {
        nodes[numberOfUniqueWords].frequency = 1;
        strcpy(nodes[numberOfUniqueWords].word, tempWord);
        numberOfUniqueWords++;
    }
}

void makeTempWord(char *begin, char *end)
{
    for(int i = 0; i < 50; i++) tempWord[i] = '\0';
    char *p = begin;
    int j = 0;
    while(p <= end && j < 50)
    {
        tempWord[j] = *p;
        j++;
        p++;
    }
}

int wordInList()
{
    for(int i = 0; i < numberOfUniqueWords; i++)
    {
        if(strcmp(nodes[i].word, tempWord) == 0) return i;
    }
    return -1;
}

void sortList()
{
    for(int i = 0; i < numberOfUniqueWords; i++)
    {
        int maxFreq = nodes[i].frequency;
        int index = i;
        for(int j = i + 1; j < numberOfUniqueWords; j++)
        {
            if(nodes[j].frequency > maxFreq)
            {
                index = j;
                maxFreq = nodes[j].frequency;
            }
        }
        struct node_t temp = nodes[i];
        nodes[i] = nodes[index];
        nodes[index] = temp;
    }
    printList();
}

void printList()
{
    for(int i = 0; i < numberOfUniqueWords; i++)
    {
        printf("%d - %s\n", nodes[i].frequency, nodes[i].word);
    }
    printf("\n");
}

void userSearch()
{
    do
    {
        printf("Enter a word (enter 1 to exit):");
        char query[50];
        fflush(stdin);
        scanf("%s", query);
        if(query[0] == '1') break;
        convertToUpper(query);
        int f = findFrequency(query);
        if(!f) printf("%s is not found.\n", query);
        else printf("%s is found %d time(s).\n", query, findFrequency(query));

    } while(1);
}

int findFrequency(char *str)
{
    for(int i = 0; i < numberOfUniqueWords; i++)
    {
        if(strcmp(nodes[i].word, str) == 0) return nodes[i].frequency;
    }
    return 0;
}
