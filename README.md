# libft

ABOUT
Re-coded several functions of the standard C library, as well as other utility functions that will be of use through out my studies at Hive Helsinki.

I have fully made the libft functions myself.


HOW TO RUN TESTS
1. go to the 'test' directory.

		cd test

2. run the command

		make all

3. it should then compile all the functions in the libft folder into 'libft.a' and inside the testfile it will have created 't1.out', 't2.out', 't3.out', 't4.out', 't5.out', 't6.out' & 'b.out' which you then can run from the terminal.

4. run the tests one at a time example (replace x with numbers 1-6 or replace tx with b to run the test for bonus functions):

		./tx.out

   run all tests (including bonus):

		make runall

   run all tests (only mandatory part):

		make runman


TESTFILES
The test files are a mix between my own and friends of mines tests. Thank you Tpolonen (https://github.com/kyyninen) for sharing your test files with me. Thank you Jumanner for showing me how to make the structure of the testfile and Makefile ( some of your tests are still present in the files but I'm working on removing them )
