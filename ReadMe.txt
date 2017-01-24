Lab1
Austin Prince

This is my Lab1 solution which takes an input of card strings and creates card structs for these strings.
This program reads in a line of input five card strings at a time and then creates a hand which is assigned a score.
The program then sorts the entire deck and prints out the sorted deck. 

I ran the following tests.
The first test I ran inputted the given hands.txt file and returned the hand ranks followed by the final sorted deck
of all the cards in hands.txt. Also along the way it outputted an "invalid card string" to indiciate when a 
invalid card string was read.

The second trial I ran inputted a invalid file. The program then called the usage function and returned the name of 
the program followed by the message saying to input a valid input file.

If a file was inputted which did not contain any card strings the usage function indicated this fact
and asked the user to input a file which contained valid card strings.