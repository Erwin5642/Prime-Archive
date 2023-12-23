Recently hired by ICPC (Computational Institute for Scientific Research), Doctor Henrique is in need of your help again! Heading a super secret project for the Kingdom of Syldávia, Dr. Henrique faces a big problem. The bacteria involved in the project are being destroyed after be contaminated by a very rare type of virus. This virus is capable of destroying any part of genetic code of bacteria that is the same as their RNA (genetic code of the virus). 
Knowing this, Dr. Henrique wants to create a type of bacteria that is resistant to this type of virus, however, he wants to preserve the greater amount of genetic code from the original bacteria. His goal is to find the longest genetic substring (contains only proteins A, C, G, T) among a group of contaminated bacteria.
Let's look at an example:
Let's assume that the virus's RNA is the sequence TCGA. And we also assume that Dr. Henrique has 3 DNA bacteria's:
~~~text
 Bacteria 1: GCTTTCGACGAT
 Bacteria 2: GATCGAGCTTCGAA
 Bacteria 3: GGTCTAGCTAAT
~~~
After infection, the virus will look for the first snippet of code from the beginning of the bacteria's DNA, that it is the same as the virus RNA, and will destroy it. And it will repeat the process until there is no more code to be destroyed.
~~~text
 Bacteria 1: GCTTTCGACGAT  GCTTCGAT  GCTT
 Bacteria 2: GATCGAGCTTCGAA  GAGCTTCGAA  GAGCTA
 Bacteria 3: GGTCTAGCTAAT
~~~
Now that all the bacteria are infected, we will find the longest substring common to them all, which It will be the DNA of the bacteria that Dr. Henrique is looking for:
~~~text
 Bacteria 1: GCTT
 Bacteria 2: GAGCTA
 Bacteria 3: GGTCTAGCTAAT
Resulting DNA: GCT
~~~
Note: There will always be a single resulting DNA.

### Input
The input contains a line with the number N that represents the number of bacteria (1 ≤ N ≤ 10). Followed by N lines containing a string S (1 ≤ |S| ≤ 1000) that represents the genetic code of each bacterium.
The N+2 line contains a string R (1 ≤ |R| ≤ 1000) which is the RNA of the infectious virus. 
All strings are composed only of the characters: A, C, G, T.
### Output
One string per line representing the DNA of the final bacterium.
