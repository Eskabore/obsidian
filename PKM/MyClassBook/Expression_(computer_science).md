## Expression

In computer science, an **expression** is a syntactic entity in a programming language that may be evaluated to determine its value.[1] It is a combination of one or more constants, variables, functions, and operators that the programming language interprets (according to its particular rules of precedence and of association) and computes to produce ("to return", in a stateful environment) another value. This process, for mathematical expressions, is called evaluation.

In simple settings, the resulting value is usually one of various primitive types, such as numerical, string, boolean, complex data type or other types.

Expression is often contrasted with statement - a syntactic entity, which has no value (an instruction.) 

### Examples
For example, 2 + 3 is both an arithmetic and programming expression, which evaluates to 5. A variable is an expression because it denotes a value in memory, so y + 6 is also an expression. An example of a relational expression is 4 ≠ 4, which evaluates to `false`.

### Side effects and elimination

In many programming languages a function, and hence an expression containing a function, may have side effects. An expression with side effects does not normally have the property of referential transparency. In many languages (e.g. C++), expressions may be ended with a semicolon (;) to turn the expression into an expression statement. This asks the implementation to evaluate the expression for its side-effects only and to disregard the result of the expression (e.g. "x+1;") unless it is a part of an expression statement that induces side-effects (e.g. "y=x+1;" or "func1(func2());").
Caveats

Note that the formal notion of a side effect is a change to the abstract state of the running program.

Another class of side effects are changes to the concrete state of the computational system, such as loading data into cache memories. Languages which are often described as "side effect–free" will generally still have concrete side effects which can be exploited, for example, in side-channel attacks.

Furthermore, the elapsed time evaluating an expression (even one with no other apparent side effects), is sometimes essential to the correct operation of a system, as behaviour in time is easily visible from outside the evaluation environment by other parts of the system with which it interacts, and might even be regarded as the primary effect such as when performing benchmark testing.

It depends on the particular programming language specification whether an expression with no abstract side effects can legally be eliminated from the execution path by the processing environment in which the expression is evaluated. 

### See also

* Statement (computer science) (contrast)
* Boolean expression
* [[Expression (mathematics)]]
* Evaluation strategy