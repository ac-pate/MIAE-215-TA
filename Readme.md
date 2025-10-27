
Here is the assignmetn that students did:
MIAE 215/2 Programming for Mechanical,Industrial,and Aerospace Engineers
Section YY
Hand-in Assignment 1 Fall 2025
Write a complete C++ program which prompts the user to enter the number of rows and the number
of columns specifying the size of a rectangular box. The program then draws on the screen, using
ASCII characters, a ‘hollow’ rectangular box. The first row is to consist of the required number of
‘a’ characters, the second row consists of a leading ‘b’, followed by blanks, followed by the trailing
‘b’, the third row consists of a leading ‘c’, followed by blanks, followed by the trailing ‘c’, etc.
For example, typical program interaction with the user and output should be similar to:
ted@deadflowers Assignment1 > hollow_box_with_letters
Please enter the size of the box in terms of # of rows and # of
columns: 3 5
aaaaa
b b
ccccc
ted@deadflowers Assignment1 >
ted@deadflowers Assignment1 >hollow_box_with_letters
Please enter the size of the box in terms of # of rows and # of
columns: 2 2
aa
bb
ted@deadflowers Assignment1 >
ted@deadflowers Assignment1 > hollow_box_with_letters
Please enter the size of the box in terms of # of rows and # of
columns: 10 20
aaaaaaaaaaaaaaaaaaaa
b b
c c
d d
e e
f f
g g
h h
i i
jjjjjjjjjjjjjjjjjjjj
ted@deadflowers Assignment1 >
ted@deadflowers Assignment1 > hollow_box_with_letters
Please enter the size of the box in terms of # of rows and # of
columns: 26 40
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
b b
c c
d d
e e
f f
g g
h h
i i
j j
k k
l l
m m
n n
o o
p p
q q
r r
s s
t t
u u
v v
w w
x x
y y
zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
ted@deadflowers Assignment1 >
(In the above program interaction examples, the ted@deadflowers Assignment1 > is
not part of the program output, but rather it is the Linux prompt. )
NOTE: For simplicty, you may assume that the number of rows is greater or equal than 2, and the
number of columns is greater or equal to 2. You are free to use any looping construct in the design of your program.
HINT: Draw the first row of rectangle,
 then draw the "body" of the hollow rectangle,
 finally, draw the last row of the rectangle.
Consider this the first ‘refinement’ using the method of stepwise refinement as discussed in class.
DUE DATE AND SUBMISSION PROCEDURE.
The assignment is due on Friday, October 10, 2025 23:59:59. Submit your program source code
as an ASCII text file with a with filename of assignment1.cpp . Ensure that the source
code you submit is in ASCII text, do not submit any other file format. Use the ‘Assignment 1’
submission link found in the ‘Assignment Submission Links” section available on the MIAE 215
Moodle page to submit your .cpp ASCII text file containing the program source code.
IMPORTANT NOTE: Your program MUST compile with the ENCS g++ Linux compiler. You
may use any compiler you chose when developing your code, but before you submit it, it is your
responsibility to ensure that it compiles with the g++ compiler available on the Gina Cody School
Linux computers.
Design Considerations:
It is up to you as the programmer to decide what to do in the case that a user enters a number greater
than 26 for the number of rows. For example, you may wish to simply limit the number of rows
to 26, or you may decide to let the rows continue to the next ASCII character after ‘z’ as in:
ted@deadflowers Assignment1 1 > hollow_box_with_letters
Please enter the size of the box in terms of # of rows and # of
columns: 38 5
aaaaa
b b
c c
d d
e e
f f
g g
h h
i i
j j
k k
l l
m m
n n
o o
p p
q q
r r
s s
t t
u u
v v
w w
x x
y y
z z
{ {
| |
} }
~ ~
˘fffd ˘fffd
˘fffd ˘fffd
˘fffd ˘fffd
˘fffd ˘fffd
˘fffd ˘fffd
˘fffd ˘fffd
˘fffd˘fffd˘fffd˘fffd˘fffd
Note: The last 7 rows of output resulted in non-printable ASCII characters as rendered by my word
processing sofware. Your output may appear different.



------------------------------------------------------
these are the grading instructions from my prof
The grading instructions are:

1) download from Moodle all the submissions of the program source
   code (.c, .C, .cpp) and from an ENVS Linux server :


  a) compile the code:  g++  -o assignment1 assigment1.cpp
  b) From Linux, run the executable program to determine the output.



I have submitted my code "hollow_box_with_letters.C" which you can
use as a 'golden' reference


2) Grade each assignment according to:


   5/5 : program compiles and gives correct output

  3.5/5 : program compiles but produces incorrect output

  1.5/5 : program does not compile

3) for grades in the 3.5/5 and 1.5/5 categories, please include
   comments in the Moodle grading as to why - brief comments such
as "does not compile', or 'incorrect output' shall suffice

4) enter the grade in Moodle AND also in the "miae215_XX_fall_2025_formatted.xlsx"
   Excel class list which I will send to you in a separate email.  Do not simply
   'copy paste' from the Moodle grade into the "miae215_XX_fall_2025_formatted.xlsx"
as the Moodle list shrinks dynamically as students drop the class, thus the order
of the two lists is not the same - nobody had the forsight to realize the problems
this would cause . I formatted the "miae215_XX_fall_2025_formatted.xlsx" with columns
for Handin Assignment 1 and Handin Assignment 2 (both out of 5 ).


Please let me know if you have any question