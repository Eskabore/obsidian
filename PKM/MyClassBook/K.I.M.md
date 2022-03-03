### Best Practice 4 - Code should be written to be reviewed

#kaizen #project

While writing your software code, keep in mind that someone is going to review your code and you will have to face criticism about one or more of the following points but not limited to:

-   Bad coding
-   Not following standard
-   Not keeping performance in mind
-   History, Indentation, Comments are not appropriate.
-   Readability is poor
-   Open files are not closed
-   Allocated memory has not been released
-   Too many global variables.
-   Too much hard coding.
-   Poor error handling.
-   No modularity.
-   Repeated code.

### Best Practice 7 - Keep your Tools & Techniques Handy

I remember an instance when I wanted to find out **debug** keyword in all the C++ files available in various directories and sub-directories, it took me 30 minutes to find the command, but finally, I kept a note of the command, and whenever I'm in need, I use it without wasting a second.

$find . \-name \\\*.cpp \-exec grep \-q "debug" '{}' \\; \-print