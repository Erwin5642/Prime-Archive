# Space Elevator
China is building a space elevator, which will allow the launch of probes and satellites at a much lower cost, enabling not only scientific research projects but also space tourism.
However, the Chinese are very superstitious, and that is why they are very careful with the numbering of elevator floors: they do not use any number that contains the digit “4” or the digit sequence “13”.
Thus, they do not use floor 4, nor floor 13, nor floor 134, nor floor 113, but they use floor 103. 
So, the first floors are numbered 1, 2, 3, 5, 6, 7, 8 , 9, 10, 11, 12, 15, 16...
Since the space elevator has many floors, and they need to number all the floors in the elevator, the Chinese asked you to write a program that, given the floor, indicates the number that should 
be assigned to it.

- Input: 
Each test case consists of a single line, containing an integer N (1 ≤ N ≤ 10^6) that indicates the floor number of which must be determined.

- Output: 
For each test case, print a line containing a single integer indicating the number assigned to the N-th floor.
---
# Payroll
This government, like every year, is very concerned about the payroll. This year, however, the way payments are made will be changed. 
Instead of paying employees as usual, the formula used to calculate salaries will be simpler: The sum of the divisors of the employee's registration number. 
To avoid fraud, help the government make this calculation!

- Input: 
The input starts with a line with a number 1 <= N <= 10^4 which is the number of employees. 
Each of the following N lines represents an employee through their registration number 1 <= M <= 3 x 10^4.

- Output:
The output consists of N lines, each containing the employee's salary in the order they were included in the input.
---
# Tiles
Rafael decided to change the tiles in his living room, so he took measurements and bought N white tiles in the store.
The fact that all the tiles were white made Rafael a little worried about the design of his living room, and so he decided to paint some of them to give his home a “more modern look”.
He positioned all N tiles in a straight line, and numbered them all from 1 to N, from left to right.
To choose which tiles to paint, he thought of the following logic: he chose two integers A and B, and said that he would paint all the tiles whose enumeration was a multiple of A and/or B.
Help Rafael find out how many tiles will be painted in total.

- Input: 
There will be several test cases. Each test case contains three integers, N, A and B (3 ≤ N ≤ 10000, 2 ≤ A, B ≤ N).
The last test case is indicated when N = A = B = 0, which should not be processed.

- Output: 
For each test case, print a line containing an integer, showing how many tiles will be painted at the end of the process.
---
# Coffee machine
The new building of the Brazilian Computing Society (SBC) has 3 floors. At certain times of the year, SBC employees drink a lot of coffee. Because of this, the SBC presidency decided
to gift employees with a new espresso machine. This machine must be installed on one of the 3 floors, but the installation must be done in such a way that people do not waste too much
time going up and down stairs. Each SBC employee drinks 1 espresso per day. He needs to go from the floor where he works to the floor where the machine is and back to his workstation.
It takes every employee 1 minute to go up or down a floor. Because SBC cares so much about efficiency, it wants to position the machine to minimize the total time spent going up and down stairs.
Your task is to help management position the machine in a way that minimizes the total time employees spend going up and down stairs.

- Input: 
The input consists of 3 numbers, A1, A2, A3 (≤ 0 Ai ≤ 1000), where Ai represents the number of people working on the ith floor.

- Output: 
Your program should print on the first line, the total number of minutes to be spent with the best possible positioning of the machine,
and on the second line, the floor(s) with the best positioning for the machine.
