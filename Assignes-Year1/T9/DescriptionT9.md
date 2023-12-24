Implement a C program that contains an options menu like the one below:
1. Decrypt file
2. Write line number to file
3. How many lines the file has
4. What is the longest line
5. Search for a word
0.  Close

In option 1, the file to be decrypted is 'readme.code.txt'. The file contains numbers (between square brackets) that represent codes from the ASCII table. After reading the number, your character representation will be written to the file ‘readme.decifra.txt’. This file deciphered will be used to execute the other program options. The brackets must be neglected during decryption./
In option 2, the file 'readme.nlines.txt' will be generated containing its number in each line followed by the line text.
In option 3, the output should be: “File XXXX has (999) lines.”, where XXXX is the name of the decrypted file and 999 is the number of lines the file has.
In option 4, the output should be: “The line [XXX] is the longest with (99) characters.”, where XXX is the number of the line that has the largest number of characters and 99 is this number.
In option 5, a word is provided by the user and all lines in which there is the word must be printed. At the end, the number of occurrences will be shown.
