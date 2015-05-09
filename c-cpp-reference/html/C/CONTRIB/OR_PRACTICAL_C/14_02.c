#include <stdio.h>
/*
 * The main program will open this file if -S is on 
 * the command line.
 */
FILE *save_file = NULL; 
/********************************************************
 * extended_fgets -- get a line from the input file     *
 *              and record it in a save file if needed. *
 *                                                      *
 * Parameters                                           *
 *      line -- the line to read                        *
 *      size -- sizeof(line) -- maximum number of       *
 *                      characters to read              *
 *      file -- file to read data from                  *
 *              (normally stdin)                        *
 *                                                      *
 * Returns                                              *
 *      NULL -- error or end of file in read            *
 *      otherwise line (just like fgets)                *
 ********************************************************/
char *extended_fgets(char *line, int size, FILE *file)
{

    char *result;               /* result of fgets */

    result = fgets(line, size, file);

    /* did someone ask for a save file */
    if (save_file != NULL) 
        (void)fputs(line, save_file);

    return (result);
}
