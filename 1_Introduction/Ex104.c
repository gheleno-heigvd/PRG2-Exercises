/*
-----------------------------------------------------------------------------------
Filename : Ex104.c
Author(s) : Gonçalo Heleno
Creation date : 12/03/2022
Description : How does each expression amount to?
Note(s) : None
Compilator : Not applicable
-----------------------------------------------------------------------------------
*/

/*
1) 22 | 11 = 31   correct
   10110 | 1011 = 11111

2) 0 ^ 19 = 19   correct
   0 ^ 10011 = 10011

3) 2 << 3 = 16   correct
   10 << 3 = 10000

4) 30 & 14 = 14   correct
   11110 & 01110 = 01110

5) 8 >> 2 = 2   correct
   1000 >> 2 = 0010

6) 4 & 29 = 4   correct
   00100 & 11101 = 00100

7) 9 << 4 = 144   correct
   1001 << 4 = 10010000

8) 31 ^ 27 = 27   wrong, it was 4
   11111 ^ 11011 = 11011

9) 23 | 3 = 3   wrong, it was 23
   10111 | 00011 = 00011

10) -1 >> 1 = 1   wrong, it was -1 if we do an arithmetic shift (gcc), if not it would be INT_MAX

11) -5 >> 1 = 5   wrong, it was -3 if an arithmetic shift, otherwise INT_MAX-2 if we do an arithmetic shift

12) 3 & ~2 = 3   wrong, it should be 1
    101 & ~010 = 101

    There is a formule to calculate ~n:
    - if n is a signed type, ~n is equal to -n-1
    - if n is an unsigned type, then ~n is equal to <TYPE_MAX>-n

13) 6 | 5 & 4 = 6 & 4 = 6   correct
    110 | 101 & 100 = 110 | 100 = 110
*/
