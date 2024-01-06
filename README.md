This function receives as input a string compromising of the characters ( ) { } [ ] as well as any other characters in between the opening and closing characters and determines if it is legal or illegal.  There are no white spaces between the characters, and the brackets have to be closed, else generating illegal.
Ex:
Input: (s)d           Output: legal
Input: a(a{b}s)d      Output: legal
Input: {a[b]c         Output: illegal
Input: ([a)d]         Output: illegal
