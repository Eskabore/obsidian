# Clock synchronization
Tags: #clock #synchronization #computer #engineering 

---

&nbsp;&nbsp;&nbsp;&nbsp; **Clock synchronization** is a topic in **computer science** and **[[computer engineering#Computer engineering|engineering]]** that ==aims to coordinate otherwise independent clocks==. 
&nbsp;&nbsp;&nbsp;&nbsp; Even when initially set accurately, real clocks will differ after some amount of time due to clock drift, caused by clocks counting time at slightly different rates.
&nbsp;&nbsp;&nbsp;&nbsp; There are several problems that occur as a result of clock rate differences and several solutions, some being more appropriate than <u>others in certain contexts</u>.[^1]


## Terminology
In [[serial communication]], clock synchronization can refer to clock recovery which achieves frequency synchronization, as opposed to full [[phase synchronization]].  Such clock synchronization is used in synchronization in telecommunications and [[automatic baud rate detection]].[^2]

## Problems
As a result of the difficulties managing time at smaller scales, there are problems associated with '_clock skew_' that take on more complexity in **distributed computing** in which several computers will need to realize **the same global time**. 

> **Synchronization** is required for accurate reproduction of streaming media. **Clock synchronization** is a significant component of audio over **_Ethernet systems_**. 

## Solutions

&nbsp; &nbsp; &nbsp; &nbsp; In system with a central server, the synchronization solution is trivial, the server will dictate the system time.

[ Berkeley algorithm ](https://www.geeksforgeeks.org/berkeleys-algorithm/) and the [Cristian's algorithm](https://www.geeksforgeeks.org/cristians-algorithm/) are potential solutions to the clock synchronization problem in this environment.


In [[distributed systems|distributed computing]], the problem takes on more complexity because a global time is not easily known.
==>The most used clock synchronization solution on the Internet is the [[Network Time Protocol]] (**NTP**) which is a layered client-server architecture based on [[User Datagram Protocol]] (**UDP**) message passing.

> In a **wireless network**, the problem becomes even more challenging due to the possibility of collision of the synchronization packets on the wireless medium and the higher drift rate of clocks on low-cost wireless devices.

[^1]: Tanenbaum, Andrew S.; van Steen, Maarten (2002), *Distributed Systems : Principles and Paradigms*, Prentice Hall, ISBN 0-13-088893-1
[^2]: Norman Matloff (September 3, 2001), Transmission on a Serial Line (PDF), retrieved 2018-04-17

