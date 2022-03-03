Tags: #clik

[Clik](https://en.wikipedia.org/wiki/Cilk): Cilk, Cilk++ and Cilk Plus are general-purpose programming languages designed for multithreaded parallel computing. They are based on the C and C++ programming languages, which they extend with constructs to express parallel loops and the fork–join idiom.

<u>Language features</u>
The principle behind the design of the Cilk language is that  _**the programmer should be responsible for ''exposing'' the parallelism**_, identifying elements that can safely be executed in parallel; it should then be left to the run-time environment, particularly the [[Scheduling (computing)|scheduler]], to decide during execution how to actually divide the work between processors. It is because these responsibilities are separated that a Cilk program can run without rewriting on any number of processors, including one.
