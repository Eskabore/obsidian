##  Lambda Calculus

Lambda calculus (also written as λ-calculus) is a formal system in mathematical logic for expressing computation based on function abstraction and application using variable binding and substitution. It is a universal model of computation that can be used to simulate any Turing machine. It was introduced by the mathematician Alonzo Church in the 1930s as part of his research into the foundations of mathematics.

Lambda calculus consists of constructing lambda terms and performing reduction operations on them. In the simplest form of lambda calculus, terms are built using only the following rules: 
![[Pasted image 20201023151403.png]]
producing expressions such as: $(λx.λy.(λz.(λx.z x) (λy.z y)) (x y))$. Parentheses can be dropped if the expression is unambiguous. For some applications, terms for logical and mathematical constants and operations may be included.

The reduction operations include:

![[Pasted image 20201023151448.png]]

If De Bruijn indexing is used, then α-conversion is no longer required as there will be no name collisions. If repeated application of the reduction steps eventually terminates, then by the Church–Rosser theorem it will produce a β-normal form.

Variable names are not needed if using a universal lambda function, such as Iota and Jot, which can create any function behavior by calling it on itself in various combinations. 

### Explanation and applications

Lambda calculus is Turing complete, that is, it is a universal model of computation that can be used to simulate any Turing machine.[1] Its namesake, the Greek letter lambda (λ), is used in lambda expressions and lambda terms to denote binding a variable in a function.

Lambda calculus may be *untyped* or *typed*. In typed lambda calculus, functions can be applied only if they are capable of accepting the given input's "type" of data. Typed lambda calculi are weaker than the untyped lambda calculus, which is the primary subject of this article, in the sense that typed lambda calculi can express less than the untyped calculus can, but on the other hand typed lambda calculi allow more things to be proven; in the simply typed lambda calculus it is, for example, a theorem that every evaluation strategy terminates for every simply typed lambda-term, whereas evaluation of untyped lambda-terms need not terminate. One reason there are many different typed lambda calculi has been the desire to do more (of what the untyped calculus can do) without giving up on being able to prove strong theorems about the calculus.

Lambda calculus has applications in many different areas in mathematics, philosophy,[2] linguistics,[3][4] and computer science.[5] Lambda calculus has played an important role in the development of the theory of programming languages. Functional programming languages implement the lambda calculus. Lambda calculus is also a current research topic in Category theory.[6] 

### History

The lambda calculus was introduced by mathematician Alonzo Church in the 1930s as part of an investigation into the foundations of mathematics.[7][8] The original system was shown to be logically inconsistent in 1935 when Stephen Kleene and J. B. Rosser developed the Kleene–Rosser paradox.[9][10]

Subsequently, in 1936 Church isolated and published just the portion relevant to computation, what is now called the untyped lambda calculus.[11] In 1940, he also introduced a computationally weaker, but logically consistent system, known as the simply typed lambda calculus.[12]

Until the 1960s when its relation to programming languages was clarified, the lambda calculus was only a formalism. Thanks to Richard Montague and other linguists' applications in the semantics of natural language, the lambda calculus has begun to enjoy a respectable place in both linguistics[13] and computer science.[14]
Origin of the lambda symbol

There is a bit of controversy over the reason for Church's use of the Greek letter lambda (λ) as the notation for function-abstraction in the lambda calculus, perhaps in part due to conflicting explanations by Church himself. According to Cardone and Hindley (2006):

   By the way, why did Church choose the notation “$λ$”? In [an unpublished 1964 letter to Harald Dickson] he stated clearly that it came from the notation “ $x ^$” used for class-abstraction by Whitehead and Russell, by first modifying “ $x ^$ ” to “$∧ x$ ” to distinguish function-abstraction from class-abstraction, and then changing “$∧$” to “$λ$” for ease of printing.

   This origin was also reported in [Rosser, 1984, p.338]. On the other hand, in his later years Church told two enquirers that the choice was more accidental: a symbol was needed and λ just happened to be chosen.

Dana Scott has also addressed this controversy in various public lectures.[15] Scott recounts that he once posed a question about the origin of the lambda symbol to Church's son-in-law John Addison, who then wrote his father-in-law a postcard:

>  \- Dear Professor Church,
>
>   Russell had the iota operator, Hilbert had the epsilon operator. Why did you choose lambda for your operator?

According to Scott, Church's entire response consisted of returning the postcard with the following annotation: "*eeny, meeny, miny, moe*". 

### Informal description

Motivation

Computable functions are a fundamental concept within computer science and mathematics. The lambda calculus provides a simple semantics for computation, enabling properties of computation to be studied formally. The lambda calculus incorporates two simplifications that make this semantics simple. The first simplification is that the lambda calculus treats functions "anonymously", without giving them explicit names. For example, the function

    s q u a r e _ s u m ⁡ ( x , y ) = x 2 + y 2 {\displaystyle \operatorname {square\_sum} (x,y)=x^{2}+y^{2}} {\displaystyle \operatorname {square\_sum} (x,y)=x^{2}+y^{2}}

can be rewritten in anonymous form as

    ( x , y ) ↦ x 2 + y 2 {\displaystyle (x,y)\mapsto x^{2}+y^{2}} {\displaystyle (x,y)\mapsto x^{2}+y^{2}}

(read as "a tuple of x and y is mapped to x 2 + y 2 {\textstyle x^{2}+y^{2}} {\textstyle x^{2}+y^{2}}"). Similarly,

    id ⁡ ( x ) = x {\displaystyle \operatorname {id} (x)=x} \operatorname {id} (x)=x

can be rewritten in anonymous form as

    x ↦ x {\displaystyle x\mapsto x} x \mapsto x

where the input is simply mapped to itself.

The second simplification is that the lambda calculus only uses functions of a single input. An ordinary function that requires two inputs, for instance the s q u a r e _ s u m {\textstyle \operatorname {square\_sum} } {\textstyle \operatorname {square\_sum} } function, can be reworked into an equivalent function that accepts a single input, and as output returns another function, that in turn accepts a single input. For example,

    ( x , y ) ↦ x 2 + y 2 {\displaystyle (x,y)\mapsto x^{2}+y^{2}} {\displaystyle (x,y)\mapsto x^{2}+y^{2}}

can be reworked into

    x ↦ ( y ↦ x 2 + y 2 ) {\displaystyle x\mapsto (y\mapsto x^{2}+y^{2})} {\displaystyle x\mapsto (y\mapsto x^{2}+y^{2})}

This method, known as currying, transforms a function that takes multiple arguments into a chain of functions each with a single argument.

Function application of the s q u a r e _ s u m {\textstyle \operatorname {square\_sum} } {\textstyle \operatorname {square\_sum} } function to the arguments (5, 2), yields at once

    ( ( x , y ) ↦ x 2 + y 2 ) ( 5 , 2 ) {\textstyle ((x,y)\mapsto x^{2}+y^{2})(5,2)} {\textstyle ((x,y)\mapsto x^{2}+y^{2})(5,2)}
    = 5 2 + 2 2 {\textstyle =5^{2}+2^{2}} {\textstyle =5^{2}+2^{2}}
    = 29 {\textstyle =29} {\textstyle =29},

whereas evaluation of the curried version requires one more step

    ( ( x ↦ ( y ↦ x 2 + y 2 ) ) ( 5 ) ) ( 2 ) {\textstyle {\Bigl (}{\bigl (}x\mapsto (y\mapsto x^{2}+y^{2}){\bigr )}(5){\Bigr )}(2)} {\textstyle {\Bigl (}{\bigl (}x\mapsto (y\mapsto x^{2}+y^{2}){\bigr )}(5){\Bigr )}(2)}
    = ( y ↦ 5 2 + y 2 ) ( 2 ) {\textstyle =(y\mapsto 5^{2}+y^{2})(2)} {\textstyle =(y\mapsto 5^{2}+y^{2})(2)} // the definition of x {\displaystyle x} x has been used with 5 {\displaystyle 5} 5 in the inner expression. This is like β-reduction.
    = 5 2 + 2 2 {\textstyle =5^{2}+2^{2}} {\textstyle =5^{2}+2^{2}} // the definition of y {\displaystyle y} y has been used with 2 {\displaystyle 2} 2. Again, similar to β-reduction.
    = 29 {\textstyle =29} {\textstyle =29}

to arrive at the same result.
The lambda calculus

The lambda calculus consists of a language of lambda terms, which is defined by a certain formal syntax, and a set of transformation rules, which allow manipulation of the lambda terms. These transformation rules can be viewed as an equational theory or as an operational definition.

As described above, all functions in the lambda calculus are anonymous functions, having no names. They only accept one input variable, with currying used to implement functions with several variables.
Lambda terms

The syntax of the lambda calculus defines some expressions as valid lambda calculus expressions and some as invalid, just as some strings of characters are valid C programs and some are not. A valid lambda calculus expression is called a "lambda term".

The following three rules give an inductive definition that can be applied to build all syntactically valid lambda terms:

    a variable, x {\displaystyle x} x, is itself a valid lambda term
    if t {\displaystyle t} t is a lambda term, and x {\displaystyle x} x is a variable, then ( λ x . t ) {\displaystyle (\lambda x.t)} (\lambda x.t) is a lambda term (called an abstraction);
    if t {\displaystyle t} t and s {\displaystyle s} s are lambda terms, then ( t s ) {\displaystyle (ts)} (ts) is a lambda term (called an application).

Nothing else is a lambda term. Thus a lambda term is valid if and only if it can be obtained by repeated application of these three rules. However, some parentheses can be omitted according to certain rules. For example, the outermost parentheses are usually not written. See Notation, below.

An abstraction λ x . t {\displaystyle \lambda x.t} \lambda x.t is a definition of an anonymous function that is capable of taking a single input x {\displaystyle x} x and substituting it into the expression t {\displaystyle t} t. It thus defines an anonymous function that takes x {\displaystyle x} x and returns t {\displaystyle t} t. For example, λ x . x 2 + 2 {\displaystyle \lambda x.x^{2}+2} \lambda x.x^{2}+2 is an abstraction for the function f ( x ) = x 2 + 2 {\displaystyle f(x)=x^{2}+2} f(x)=x^{2}+2 using the term x 2 + 2 {\displaystyle x^{2}+2} x^{2}+2 for t {\displaystyle t} t. The definition of a function with an abstraction merely "sets up" the function but does not invoke it. The abstraction binds the variable x {\displaystyle x} x in the term t {\displaystyle t} t.

An application t s {\displaystyle ts} ts represents the application of a function t {\displaystyle t} t to an input s {\displaystyle s} s, that is, it represents the act of calling function t {\displaystyle t} t on input s {\displaystyle s} s to produce t ( s ) {\displaystyle t(s)} t(s).

There is no concept in lambda calculus of variable declaration. In a definition such as λ x . x + y {\displaystyle \lambda x.x+y} \lambda x.x+y (i.e. f ( x ) = x + y {\displaystyle f(x)=x+y} f(x)=x+y), the lambda calculus treats y {\displaystyle y} y as a variable that is not yet defined. The abstraction λ x . x + y {\displaystyle \lambda x.x+y} \lambda x.x+y is syntactically valid, and represents a function that adds its input to the yet-unknown y {\displaystyle y} y.

Bracketing may be used and may be needed to disambiguate terms. For example, λ x . ( ( λ x . x ) x ) {\displaystyle \lambda x.((\lambda x.x)x)} \lambda x.((\lambda x.x)x) and ( λ x . ( λ x . x ) ) x {\displaystyle (\lambda x.(\lambda x.x))x} (\lambda x.(\lambda x.x))x denote different terms (although they coincidentally reduce to the same value). Here, the first example defines a function whose lambda term is the result of applying x to the child function, while the second example is the application of the outermost function to the input x, which returns the child function. Therefore, both examples evaluate to the identity function λ x . x {\displaystyle \lambda x.x} \lambda x.x.
Functions that operate on functions

In lambda calculus, functions are taken to be 'first class values', so functions may be used as the inputs, or be returned as outputs from other functions.

For example, λ x . x {\displaystyle \lambda x.x} \lambda x.x represents the identity function, x ↦ x {\displaystyle x\mapsto x} x \mapsto x, and ( λ x . x ) y {\displaystyle (\lambda x.x)y} (\lambda x.x)y represents the identity function applied to y {\displaystyle y} y. Further, ( λ x . y ) {\displaystyle (\lambda x.y)} (\lambda x.y) represents the constant function x ↦ y {\displaystyle x\mapsto y} {\displaystyle x\mapsto y}, the function that always returns y {\displaystyle y} y, no matter the input. In lambda calculus, function application is regarded as left-associative, so that s t x {\displaystyle stx} stx means ( s t ) x {\displaystyle (st)x} (st)x.

There are several notions of "equivalence" and "reduction" that allow lambda terms to be "reduced" to "equivalent" lambda terms.
Alpha equivalence

A basic form of equivalence, definable on lambda terms, is alpha equivalence. It captures the intuition that the particular choice of a bound variable, in an abstraction, does not (usually) matter. For instance, λ x . x {\displaystyle \lambda x.x} \lambda x.x and λ y . y {\displaystyle \lambda y.y} \lambda y.y are alpha-equivalent lambda terms, and they both represent the same function (the identity function). The terms x {\displaystyle x} x and y {\displaystyle y} y are not alpha-equivalent, because they are not bound in an abstraction. In many presentations, it is usual to identify alpha-equivalent lambda terms.

The following definitions are necessary in order to be able to define β-reduction:
Free variables

The free variables of a term are those variables not bound by an abstraction. The set of free variables of an expression is defined inductively:

    The free variables of x {\displaystyle x} x are just x {\displaystyle x} x
    The set of free variables of λ x . t {\displaystyle \lambda x.t} \lambda x.t is the set of free variables of t {\displaystyle t} t, but with x {\displaystyle x} x removed
    The set of free variables of t s {\displaystyle ts} ts is the union of the set of free variables of t {\displaystyle t} t and the set of free variables of s {\displaystyle s} s.

For example, the lambda term representing the identity λ x . x {\displaystyle \lambda x.x} \lambda x.x has no free variables, but the function λ x . y x {\displaystyle \lambda x.yx} {\displaystyle \lambda x.yx} has a single free variable, y {\displaystyle y} y.
Capture-avoiding substitutions

Suppose t {\displaystyle t} t, s {\displaystyle s} s and r {\displaystyle r} r are lambda terms and x {\displaystyle x} x and y {\displaystyle y} y are variables. The notation t [ x := r ] {\displaystyle t[x:=r]} t[x:=r] indicates substitution of r {\displaystyle r} r for x {\displaystyle x} x in t {\displaystyle t} t in a capture-avoiding manner. This is defined so that:

    x [ x := r ] = r {\displaystyle x[x:=r]=r} x[x:=r]=r;
    y [ x := r ] = y {\displaystyle y[x:=r]=y} y[x:=r]=y if x ≠ y {\displaystyle x\neq y} x\neq y;
    ( t s ) [ x := r ] = ( t [ x := r ] ) ( s [ x := r ] ) {\displaystyle (ts)[x:=r]=(t[x:=r])(s[x:=r])} (ts)[x:=r]=(t[x:=r])(s[x:=r]);
    ( λ x . t ) [ x := r ] = λ x . t {\displaystyle (\lambda x.t)[x:=r]=\lambda x.t} (\lambda x.t)[x:=r]=\lambda x.t;
    ( λ y . t ) [ x := r ] = λ y . ( t [ x := r ] ) {\displaystyle (\lambda y.t)[x:=r]=\lambda y.(t[x:=r])} (\lambda y.t)[x:=r]=\lambda y.(t[x:=r]) if x ≠ y {\displaystyle x\neq y} x\neq y and y {\displaystyle y} y is not in the free variables of r {\displaystyle r} r. The variable y {\displaystyle y} y is said to be "fresh" for r {\displaystyle r} r.

For example, ( λ x . x ) [ y := y ] = λ x . ( x [ y := y ] ) = λ x . x {\displaystyle (\lambda x.x)[y:=y]=\lambda x.(x[y:=y])=\lambda x.x} (\lambda x.x)[y:=y]=\lambda x.(x[y:=y])=\lambda x.x, and ( ( λ x . y ) x ) [ x := y ] = ( ( λ x . y ) [ x := y ] ) ( x [ x := y ] ) = ( λ x . y ) y {\displaystyle ((\lambda x.y)x)[x:=y]=((\lambda x.y)[x:=y])(x[x:=y])=(\lambda x.y)y} ((\lambda x.y)x)[x:=y]=((\lambda x.y)[x:=y])(x[x:=y])=(\lambda x.y)y.

The freshness condition (requiring that y {\displaystyle y} y is not in the free variables of r {\displaystyle r} r) is crucial in order to ensure that substitution does not change the meaning of functions. For example, a substitution is made that ignores the freshness condition: ( λ x . y ) [ y := x ] = λ x . ( y [ y := x ] ) = λ x . x {\displaystyle (\lambda x.y)[y:=x]=\lambda x.(y[y:=x])=\lambda x.x} (\lambda x.y)[y:=x]=\lambda x.(y[y:=x])=\lambda x.x. This substitution turns the constant function λ x . y {\displaystyle \lambda x.y} \lambda x.y into the identity λ x . x {\displaystyle \lambda x.x} \lambda x.x by substitution.

In general, failure to meet the freshness condition can be remedied by alpha-renaming with a suitable fresh variable. For example, switching back to our correct notion of substitution, in ( λ x . y ) [ y := x ] {\displaystyle (\lambda x.y)[y:=x]} (\lambda x.y)[y:=x] the abstraction can be renamed with a fresh variable z {\displaystyle z} z, to obtain ( λ z . y ) [ y := x ] = λ z . ( y [ y := x ] ) = λ z . x {\displaystyle (\lambda z.y)[y:=x]=\lambda z.(y[y:=x])=\lambda z.x} (\lambda z.y)[y:=x]=\lambda z.(y[y:=x])=\lambda z.x, and the meaning of the function is preserved by substitution.
β-reduction

The β-reduction rule states that an application of the form ( λ x . t ) s {\displaystyle (\lambda x.t)s} (\lambda x.t)s reduces to the term t [ x := s ] {\displaystyle t[x:=s]} t[x:=s]. The notation ( λ x . t ) s → t [ x := s ] {\displaystyle (\lambda x.t)s\to t[x:=s]} (\lambda x.t)s\to t[x:=s] is used to indicate that ( λ x . t ) s {\displaystyle (\lambda x.t)s} (\lambda x.t)s β-reduces to t [ x := s ] {\displaystyle t[x:=s]} t[x:=s]. For example, for every s {\displaystyle s} s, ( λ x . x ) s → x [ x := s ] = s {\displaystyle (\lambda x.x)s\to x[x:=s]=s} (\lambda x.x)s\to x[x:=s]=s. This demonstrates that λ x . x {\displaystyle \lambda x.x} \lambda x.x really is the identity. Similarly, ( λ x . y ) s → y [ x := s ] = y {\displaystyle (\lambda x.y)s\to y[x:=s]=y} (\lambda x.y)s\to y[x:=s]=y, which demonstrates that λ x . y {\displaystyle \lambda x.y} \lambda x.y is a constant function.

The lambda calculus may be seen as an idealised version of a functional programming language, like Haskell or Standard ML. Under this view, β-reduction corresponds to a computational step. This step can be repeated by additional β-reductions until there are no more applications left to reduce. In the untyped lambda calculus, as presented here, this reduction process may not terminate. For instance, consider the term Ω = ( λ x . x x ) ( λ x . x x ) {\displaystyle \Omega =(\lambda x.xx)(\lambda x.xx)} \Omega =(\lambda x.xx)(\lambda x.xx). Here ( λ x . x x ) ( λ x . x x ) → ( x x ) [ x := λ x . x x ] = ( x [ x := λ x . x x ] ) ( x [ x := λ x . x x ] ) = ( λ x . x x ) ( λ x . x x ) {\displaystyle (\lambda x.xx)(\lambda x.xx)\to (xx)[x:=\lambda x.xx]=(x[x:=\lambda x.xx])(x[x:=\lambda x.xx])=(\lambda x.xx)(\lambda x.xx)} (\lambda x.xx)(\lambda x.xx)\to (xx)[x:=\lambda x.xx]=(x[x:=\lambda x.xx])(x[x:=\lambda x.xx])=(\lambda x.xx)(\lambda x.xx). That is, the term reduces to itself in a single β-reduction, and therefore the reduction process will never terminate.

Another aspect of the untyped lambda calculus is that it does not distinguish between different kinds of data. For instance, it may be desirable to write a function that only operates on numbers. However, in the untyped lambda calculus, there is no way to prevent a function from being applied to truth values, strings, or other non-number objects. 

### Formal definition
Main article: Lambda calculus definition
Definition

Lambda expressions are composed of:

* variables v1, v2, ...;
* the abstraction symbols λ (lambda) and . (dot);
* parentheses ().

The set of lambda expressions, Λ, can be defined inductively:

1. If x is a variable, then x ∈ Λ.
2. If x is a variable and M ∈ Λ, then (λx.M) ∈ Λ.
3. If M, N ∈ Λ, then (M N) ∈ Λ.

Instances of rule 2 are known as abstractions and instances of rule 3 are known as applications

Notation

To keep the notation of lambda expressions uncluttered, the following conventions are usually applied:

    Outermost parentheses are dropped: M N instead of (M N).
    Applications are assumed to be left associative: M N P may be written instead of ((M N) P).[18]
    The body of an abstraction extends as far right as possible: λx.M N means λx.(M N) and not (λx.M) N.
    A sequence of abstractions is contracted: λx.λy.λz.N is abbreviated as λxyz.N.[19][18]

Free and bound variables

The abstraction operator, λ, is said to bind its variable wherever it occurs in the body of the abstraction. Variables that fall within the scope of an abstraction are said to be bound. In an expression λx.M, the part λx is often called binder, as a hint that the variable x is getting bound by appending λx to M. All other variables are called free. For example, in the expression λy.x x y, y is a bound variable and x is a free variable. Also a variable is bound by its nearest abstraction. In the following example the single occurrence of x in the expression is bound by the second lambda: λx.y (λx.z x).

The set of free variables of a lambda expression, M, is denoted as FV(M) and is defined by recursion on the structure of the terms, as follows:

    FV(x) = {x}, where x is a variable.
    FV(λx.M) = FV(M) \ {x}.
    FV(M N) = FV(M) ∪ FV(N).[20]

An expression that contains no free variables is said to be closed. Closed lambda expressions are also known as combinators and are equivalent to terms in combinatory logic.
Reduction

The meaning of lambda expressions is defined by how expressions can be reduced.[21]

There are three kinds of reduction:

    α-conversion: changing bound variables;
    β-reduction: applying functions to their arguments;
    η-reduction: which captures a notion of extensionality.

We also speak of the resulting equivalences: two expressions are α-equivalent, if they can be α-converted into the same expression. β-equivalence and η-equivalence are defined similarly.

The term redex, short for reducible expression, refers to subterms that can be reduced by one of the reduction rules. For example, (λx.M) N is a β-redex in expressing the substitution of N for x in M. The expression to which a redex reduces is called its reduct; the reduct of (λx.M) N is M[x := N].

If x is not free in M, λx.M x is also an η-redex, with a reduct of M.
α-conversion

α-conversion, sometimes known as α-renaming,[22] allows bound variable names to be changed. For example, α-conversion of λx.x might yield λy.y. Terms that differ only by α-conversion are called α-equivalent. Frequently, in uses of lambda calculus, α-equivalent terms are considered to be equivalent.

The precise rules for α-conversion are not completely trivial. First, when α-converting an abstraction, the only variable occurrences that are renamed are those that are bound to the same abstraction. For example, an α-conversion of λx.λx.x could result in λy.λx.x, but it could not result in λy.λx.y. The latter has a different meaning from the original. This is analogous to the programming notion of variable shadowing.

Second, α-conversion is not possible if it would result in a variable getting captured by a different abstraction. For example, if we replace x with y in λx.λy.x, we get λy.λy.y, which is not at all the same.

In programming languages with static scope, α-conversion can be used to make name resolution simpler by ensuring that no variable name masks a name in a containing scope (see α-renaming to make name resolution trivial).

In the De Bruijn index notation, any two α-equivalent terms are syntactically identical.
Substitution

Substitution, written M[V := N], is the process of replacing all free occurrences of the variable V in the expression M with expression N. Substitution on terms of the lambda calculus is defined by recursion on the structure of terms, as follows (note: x and y are only variables while M and N are any lambda expression):

    x[x := N] = N
    y[x := N] = y, if x ≠ y
    (M1 M2)[x := N] = (M1[x := N]) (M2[x := N])
    (λx.M)[x := N] = λx.M
    (λy.M)[x := N] = λy.(M[x := N]), if x ≠ y and y ∉ FV(N)

To substitute into an abstraction, it is sometimes necessary to α-convert the expression. For example, it is not correct for (λx.y)[y := x] to result in λx.x, because the substituted x was supposed to be free but ended up being bound. The correct substitution in this case is λz.x, up to α-equivalence. Substitution is defined uniquely up to α-equivalence.
β-reduction

β-reduction captures the idea of function application. β-reduction is defined in terms of substitution: the β-reduction of (λV.M) N is M[V := N].

For example, assuming some encoding of 2, 7, ×, we have the following β-reduction: (λn.n × 2) 7 → 7 × 2.

β-reduction can be seen to be the same as the concept of local reducibility in natural deduction, via the Curry–Howard isomorphism.
η-reduction

η-reduction expresses the idea of extensionality, which in this context is that two functions are the same if and only if they give the same result for all arguments. η-reduction converts between λx.f x and f whenever x does not appear free in f.

η-reduction can be seen to be the same as the concept of local completeness in natural deduction, via the Curry–Howard isomorphism.
Normal forms and confluence
Main article: Normalization property (abstract rewriting)

For the untyped lambda calculus, β-reduction as a rewriting rule is neither strongly normalising nor weakly normalising.

However, it can be shown that β-reduction is confluent when working up to α-conversion (i.e. we consider two normal forms to be equal if it is possible to α-convert one into the other).

Therefore, both strongly normalising terms and weakly normalising terms have a unique normal form. For strongly normalising terms, any reduction strategy is guaranteed to yield the normal form, whereas for weakly normalising terms, some reduction strategies may fail to find it.
Encoding datatypes
Main articles: Church encoding and Mogensen–Scott encoding

The basic lambda calculus may be used to model booleans, arithmetic, data structures and recursion, as illustrated in the following sub-sections.
Arithmetic in lambda calculus

There are several possible ways to define the natural numbers in lambda calculus, but by far the most common are the Church numerals, which can be defined as follows:

    0 := λf.λx.x
    1 := λf.λx.f x
    2 := λf.λx.f (f x)
    3 := λf.λx.f (f (f x))

and so on. Or using the alternative syntax presented above in Notation:

    0 := λfx.x
    1 := λfx.f x
    2 := λfx.f (f x)
    3 := λfx.f (f (f x))

A Church numeral is a higher-order function—it takes a single-argument function f, and returns another single-argument function. The Church numeral n is a function that takes a function f as argument and returns the n-th composition of f, i.e. the function f composed with itself n times. This is denoted f(n) and is in fact the n-th power of f (considered as an operator); f(0) is defined to be the identity function. Such repeated compositions (of a single function f) obey the laws of exponents, which is why these numerals can be used for arithmetic. (In Church's original lambda calculus, the formal parameter of a lambda expression was required to occur at least once in the function body, which made the above definition of 0 impossible.)

One way of thinking about the Church numeral n, which is often useful when analysing programs, is as an instruction 'repeat n times'. For example, using the PAIR and NIL functions defined below, one can define a function that constructs a (linked) list of n elements all equal to x by repeating 'prepend another x element' n times, starting from an empty list. The lambda term is

    λn.λx.n (PAIR x) NIL

By varying what is being repeated, and varying what argument that function being repeated is applied to, a great many different effects can be achieved.

We can define a successor function, which takes a Church numeral n and returns n + 1 by adding another application of f, where '(mf)x' means the function 'f' is applied 'm' times on 'x':

    SUCC := λn.λf.λx.f (n f x)

Because the m-th composition of f composed with the n-th composition of f gives the m+n-th composition of f, addition can be defined as follows:

    PLUS := λm.λn.λf.λx.m f (n f x)

PLUS can be thought of as a function taking two natural numbers as arguments and returning a natural number; it can be verified that

    PLUS 2 3

and

    5

are β-equivalent lambda expressions. Since adding m to a number n can be accomplished by adding 1 m times, an alternative definition is:

    PLUS := λm.λn.m SUCC n [23]

Similarly, multiplication can be defined as

    MULT := λm.λn.λf.m (n f)[19]

Alternatively

    MULT := λm.λn.m (PLUS n) 0

since multiplying m and n is the same as repeating the add n function m times and then applying it to zero. Exponentiation has a rather simple rendering in Church numerals, namely

    POW := λb.λe.e b[20]

The predecessor function defined by PRED n = n − 1 for a positive integer n and PRED 0 = 0 is considerably more difficult. The formula

    PRED := λn.λf.λx.n (λg.λh.h (g f)) (λu.x) (λu.u)

can be validated by showing inductively that if T denotes (λg.λh.h (g f)), then T(n)(λu.x) = (λh.h(f(n−1)(x))) for n > 0. Two other definitions of PRED are given below, one using conditionals and the other using pairs. With the predecessor function, subtraction is straightforward. Defining

    SUB := λm.λn.n PRED m,

SUB m n yields m − n when m > n and 0 otherwise.
Logic and predicates

By convention, the following two definitions (known as Church booleans) are used for the boolean values TRUE and FALSE:

    TRUE := λx.λy.x
    FALSE := λx.λy.y

        (Note that FALSE is equivalent to the Church numeral zero defined above)

Then, with these two lambda terms, we can define some logic operators (these are just possible formulations; other expressions are equally correct):

    AND := λp.λq.p q p
    OR := λp.λq.p p q
    NOT := λp.p FALSE TRUE
    IFTHENELSE := λp.λa.λb.p a b

We are now able to compute some logic functions, for example:

    AND TRUE FALSE

        ≡ (λp.λq.p q p) TRUE FALSE →β TRUE FALSE TRUE
        ≡ (λx.λy.x) FALSE TRUE →β FALSE

and we see that AND TRUE FALSE is equivalent to FALSE.

A predicate is a function that returns a boolean value. The most fundamental predicate is ISZERO, which returns TRUE if its argument is the Church numeral 0, and FALSE if its argument is any other Church numeral:

    ISZERO := λn.n (λx.FALSE) TRUE

The following predicate tests whether the first argument is less-than-or-equal-to the second:

    LEQ := λm.λn.ISZERO (SUB m n),

and since m = n, if LEQ m n and LEQ n m, it is straightforward to build a predicate for numerical equality.

The availability of predicates and the above definition of TRUE and FALSE make it convenient to write "if-then-else" expressions in lambda calculus. For example, the predecessor function can be defined as:

    PRED := λn.n (λg.λk.ISZERO (g 1) k (PLUS (g k) 1)) (λv.0) 0 

which can be verified by showing inductively that n (λg.λk.ISZERO (g 1) k (PLUS (g k) 1)) (λv.0) is the add n − 1 function for n > 0.
Pairs

A pair (2-tuple) can be defined in terms of TRUE and FALSE, by using the Church encoding for pairs. For example, PAIR encapsulates the pair (x,y), FIRST returns the first element of the pair, and SECOND returns the second.

    PAIR := λx.λy.λf.f x y
    FIRST := λp.p TRUE
    SECOND := λp.p FALSE
    NIL := λx.TRUE 
    NULL := λp.p (λx.λy.FALSE)

A linked list can be defined as either NIL for the empty list, or the PAIR of an element and a smaller list. The predicate NULL tests for the value NIL. (Alternatively, with NIL := FALSE, the construct l (λh.λt.λz.deal_with_head_h_and_tail_t) (deal_with_nil) obviates the need for an explicit NULL test).

As an example of the use of pairs, the shift-and-increment function that maps (m, n) to (n, n + 1) can be defined as

    Φ := λx.PAIR (SECOND x) (SUCC (SECOND x))

which allows us to give perhaps the most transparent version of the predecessor function:

    PRED := λn.FIRST (n Φ (PAIR 0 0)).

Additional programming techniques

There is a considerable body of programming idioms for lambda calculus. Many of these were originally developed in the context of using lambda calculus as a foundation for programming language semantics, effectively using lambda calculus as a low-level programming language. Because several programming languages include the lambda calculus (or something very similar) as a fragment, these techniques also see use in practical programming, but may then be perceived as obscure or foreign.
Named constants

In lambda calculus, a library would take the form of a collection of previously defined functions, which as lambda-terms are merely particular constants. The pure lambda calculus does not have a concept of named constants since all atomic lambda-terms are variables, but one can emulate having named constants by setting aside a variable as the name of the constant, using abstraction to bind that variable in the main body, and apply that abstraction to the intended definition. Thus to use f to mean M (some explicit lambda-term) in N (another lambda-term, the "main program"), one can say

    (λf.N) M

Authors often introduce syntactic sugar, such as let, to permit writing the above in the more intuitive order

    let f = M in N

By chaining such definitions, one can write a lambda calculus "program" as zero or more function definitions, followed by one lambda-term using those functions that constitutes the main body of the program.

A notable restriction of this let is that the name f is not defined in M, since M is outside the scope of the abstraction binding f; this means a recursive function definition cannot be used as the M with let. The more advanced letrec syntactic sugar construction that allows writing recursive function definitions in that naive style instead additionally employs fixed-point combinators.
Recursion and fixed points
Main article: Fixed-point combinator
See also: SKI combinator calculus § Self-application and recursion

Recursion is the definition of a function using the function itself. Lambda calculus cannot express this as directly as some other notations: all functions are anonymous in lambda calculus, so we can't refer to a value which is yet to be defined, inside the lambda term defining that same value. However, recursion can still be achieved by arranging for a lambda expression to receive itself as its argument value, for example in  (λx.x x) E.

Consider the factorial function F(n) recursively defined by

    F(n) = 1, if n = 0; else n × F(n − 1).

In the lambda expression which is to represent this function, a parameter (typically the first one) will be assumed to receive the lambda expression itself as its value, so that calling it – applying it to an argument – will amount to recursion. Thus to achieve recursion, the intended-as-self-referencing argument (called r here) must always be passed to itself within the function body, at a call point:

    G := λr. λn.(1, if n = 0; else n × (r r (n−1)))

            with  r r x = F x = G r x  to hold, so  r = G  and

    F := G G = (λx.x x) G

The self-application achieves replication here, passing the function's lambda expression on to the next invocation as an argument value, making it available to be referenced and called there.

This solves it but requires re-writing each recursive call as self-application. We would like to have a generic solution, without a need for any re-writes:

    G := λr. λn.(1, if n = 0; else n × (r (n−1)))

            with  r x = F x = G r x  to hold, so  r = G r =: FIX G  and

    F := FIX G  where  FIX g := (r where r = g r) = g (FIX g)

            so that  FIX G = G (FIX G) = (λn.(1, if n = 0; else n × ((FIX G) (n−1)))) 

Given a lambda term with first argument representing recursive call (e.g. G here), the fixed-point combinator FIX will return a self-replicating lambda expression representing the recursive function (here, F). The function does not need to be explicitly passed to itself at any point, for the self-replication is arranged in advance, when it is created, to be done each time it is called. Thus the original lambda expression (FIX G) is re-created inside itself, at call-point, achieving self-reference.

In fact, there are many possible definitions for this FIX operator, the simplest of them being:

    Y := λg.(λx.g (x x)) (λx.g (x x))

In the lambda calculus, Y g  is a fixed-point of g, as it expands to:

    Y g
    (λh.(λx.h (x x)) (λx.h (x x))) g
    (λx.g (x x)) (λx.g (x x))
    g ((λx.g (x x)) (λx.g (x x)))
    g (Y g)

Now, to perform our recursive call to the factorial function, we would simply call (Y G) n,  where n is the number we are calculating the factorial of. Given n = 4, for example, this gives:

    (Y G) 4 
    G (Y G) 4 
    (λr.λn.(1, if n = 0; else n × (r (n−1)))) (Y G) 4
    (λn.(1, if n = 0; else n × ((Y G) (n−1)))) 4
    1, if 4 = 0; else 4 × ((Y G) (4−1))
    4 × (G (Y G) (4−1))
    4 × ((λn.(1, if n = 0; else n × ((Y G) (n−1)))) (4−1))
    4 × (1, if 3 = 0; else 3 × ((Y G) (3−1)))
    4 × (3 × (G (Y G) (3−1)))
    4 × (3 × ((λn.(1, if n = 0; else n × ((Y G) (n−1)))) (3−1)))
    4 × (3 × (1, if 2 = 0; else 2 × ((Y G) (2−1))))
    4 × (3 × (2 × (G (Y G) (2−1))))
    4 × (3 × (2 × ((λn.(1, if n = 0; else n × ((Y G) (n−1)))) (2−1))))
    4 × (3 × (2 × (1, if 1 = 0; else 1 × ((Y G) (1−1)))))
    4 × (3 × (2 × (1 × (G (Y G) (1−1)))))
    4 × (3 × (2 × (1 × ((λn.(1, if n = 0; else n × ((Y G) (n−1)))) (1−1)))))
    4 × (3 × (2 × (1 × (1, if 0 = 0; else 0 × ((Y G) (0−1))))))
    4 × (3 × (2 × (1 × (1))))
    24

Every recursively defined function can be seen as a fixed point of some suitably defined function closing over the recursive call with an extra argument, and therefore, using Y, every recursively defined function can be expressed as a lambda expression. In particular, we can now cleanly define the subtraction, multiplication and comparison predicate of natural numbers recursively.
Standard terms

Certain terms have commonly accepted names[citation needed]:

    I := λx.x
    K := λx.λy.x
    S := λx.λy.λz.x z (y z) 
    B := λx.λy.λz.x (y z) 
    C := λx.λy.λz.x z y
    W := λx.λy.x y y
    U := λx.x x 
    ω := λx.x x 
    Ω := ω ω 
    Y := λg.(λx.g (x x)) (λx.g (x x))

Several of these have direct applications in the elimination of abstraction that turns lambda terms into combinator calculus terms.
Abstraction elimination
Main article: Combinatory logic § Completeness of the S-K basis

If N is a lambda-term without abstraction, but possibly containing named constants (combinators), then there exists a lambda-term T(x,N) which is equivalent to λx.N but lacks abstraction (except as part of the named constants, if these are considered non-atomic). This can also be viewed as anonymising variables, as T(x,N) removes all occurrences of x from N, while still allowing argument values to be substituted into the positions where N contains an x. The conversion function T can be defined by:

    T(x, x) := I
    T(x, N) := K N if x is not free in N.
    T(x, M N) := S T(x, M) T(x, N)

In either case, a term of the form T(x,N) P can reduce by having the initial combinator I, K, or S grab the argument P, just like β-reduction of (λx.N) P would do. I returns that argument. K throws the argument away, just like (λx.N) would do if x has no free occurrence in N. S passes the argument on to both subterms of the application, and then applies the result of the first to the result of the second.

The combinators B and C are similar to S, but pass the argument on to only one subterm of an application (B to the "argument" subterm and C to the "function" subterm), thus saving a subsequent K if there is no occurrence of x in one subterm. In comparison to B and C, the S combinator actually conflates two functionalities: rearranging arguments, and duplicating an argument so that it may be used in two places. The W combinator does only the latter, yielding the B, C, K, W system as an alternative to SKI combinator calculus.
Typed lambda calculus
Main article: Typed lambda calculus

A typed lambda calculus is a typed formalism that uses the lambda-symbol ( λ {\displaystyle \lambda } \lambda ) to denote anonymous function abstraction. In this context, types are usually objects of a syntactic nature that are assigned to lambda terms; the exact nature of a type depends on the calculus considered (see Kinds of typed lambda calculi). From a certain point of view, typed lambda calculi can be seen as refinements of the untyped lambda calculus but from another point of view, they can also be considered the more fundamental theory and untyped lambda calculus a special case with only one type.[24]

Typed lambda calculi are foundational programming languages and are the base of typed functional programming languages such as ML and Haskell and, more indirectly, typed imperative programming languages. Typed lambda calculi play an important role in the design of type systems for programming languages; here typability usually captures desirable properties of the program, e.g. the program will not cause a memory access violation.

Typed lambda calculi are closely related to mathematical logic and proof theory via the Curry–Howard isomorphism and they can be considered as the internal language of classes of categories, e.g. the simply typed lambda calculus is the language of Cartesian closed categories (CCCs).
Computable functions and lambda calculus

A function F: N → N of natural numbers is a computable function if and only if there exists a lambda expression f such that for every pair of x, y in N, F(x)=y if and only if f x =β y,  where x and y are the Church numerals corresponding to x and y, respectively and =β meaning equivalence with β-reduction. This is one of the many ways to define computability; see the Church–Turing thesis for a discussion of other approaches and their equivalence.
Undecidability of equivalence

There is no algorithm that takes as input any two lambda expressions and outputs TRUE or FALSE depending on whether or not the two expressions are equivalent.[11] More precisely, no computable function can decide the equivalence. This was historically the first problem for which undecidability could be proven. As usual for such a proof, computable means computable by any model of computation that is Turing complete.

Church's proof first reduces the problem to determining whether a given lambda expression has a normal form. A normal form is an equivalent expression that cannot be reduced any further under the rules imposed by the form. Then he assumes that this predicate is computable, and can hence be expressed in lambda calculus. Building on earlier work by Kleene and constructing a Gödel numbering for lambda expressions, he constructs a lambda expression e that closely follows the proof of Gödel's first incompleteness theorem. If e is applied to its own Gödel number, a contradiction results.
Lambda calculus and programming languages

As pointed out by Peter Landin's 1965 paper "A Correspondence between ALGOL 60 and Church's Lambda-notation",[25] sequential procedural programming languages can be understood in terms of the lambda calculus, which provides the basic mechanisms for procedural abstraction and procedure (subprogram) application.
Anonymous functions
Main article: Anonymous function

For example, in Lisp the "square" function can be expressed as a lambda expression as follows:

(lambda (x) (* x x))

The above example is an expression that evaluates to a first-class function. The symbol lambda creates an anonymous function, given a list of parameter names, (x) – just a single argument in this case, and an expression that is evaluated as the body of the function, (* x x). Anonymous functions are sometimes called lambda expressions.

For example, Pascal and many other imperative languages have long supported passing subprograms as arguments to other subprograms through the mechanism of function pointers. However, function pointers are not a sufficient condition for functions to be first class datatypes, because a function is a first class datatype if and only if new instances of the function can be created at run-time. And this run-time creation of functions is supported in Smalltalk, JavaScript, and more recently in Scala, Eiffel ("agents"), C# ("delegates") and C++11, among others.
Reduction strategies
Further information: Evaluation strategy

Whether a term is normalising or not, and how much work needs to be done in normalising it if it is, depends to a large extent on the reduction strategy used. The distinction between reduction strategies relates to the distinction in functional programming languages between eager evaluation and lazy evaluation.

Full β-reductions
    Any redex can be reduced at any time. This means essentially the lack of any particular reduction strategy—with regard to reducibility, "all bets are off".
Applicative order
    The leftmost, innermost redex is always reduced first. Intuitively this means a function's arguments are always reduced before the function itself. Applicative order always attempts to apply functions to normal forms, even when this is not possible.
    Most programming languages (including Lisp, ML and imperative languages like C and Java) are described as "strict", meaning that functions applied to non-normalising arguments are non-normalising. This is done essentially using applicative order, call by value reduction (see below), but usually called "eager evaluation".
Normal order
    The leftmost, outermost redex is always reduced first. That is, whenever possible the arguments are substituted into the body of an abstraction before the arguments are reduced.
Call by value
    Only the outermost redexes are reduced: a redex is reduced only when its right hand side has reduced to a value (variable or abstraction).
Call by name
    As normal order, but no reductions are performed inside abstractions. For example, λx.(λx.x)x is in normal form according to this strategy, although it contains the redex (λx.x)x.
Call by need
    As normal order, but function applications that would duplicate terms instead name the argument, which is then reduced only "when it is needed". Called in practical contexts "lazy evaluation". In implementations this "name" takes the form of a pointer, with the redex represented by a thunk.

Applicative order is not a normalising strategy. The usual counterexample is as follows: define Ω = ωω where ω = λx.xx. This entire expression contains only one redex, namely the whole expression; its reduct is again Ω. Since this is the only available reduction, Ω has no normal form (under any evaluation strategy). Using applicative order, the expression KIΩ = (λx.λy.x) (λx.x)Ω is reduced by first reducing Ω to normal form (since it is the rightmost redex), but since Ω has no normal form, applicative order fails to find a normal form for KIΩ.

In contrast, normal order is so called because it always finds a normalising reduction, if one exists. In the above example, KIΩ reduces under normal order to I, a normal form. A drawback is that redexes in the arguments may be copied, resulting in duplicated computation (for example, (λx.xx) ((λx.x)y) reduces to ((λx.x)y) ((λx.x)y) using this strategy; now there are two redexes, so full evaluation needs two more steps, but if the argument had been reduced first, there would now be none).

The positive tradeoff of using applicative order is that it does not cause unnecessary computation, if all arguments are used, because it never substitutes arguments containing redexes and hence never needs to copy them (which would duplicate work). In the above example, in applicative order (λx.xx) ((λx.x)y) reduces first to (λx.xx)y and then to the normal order yy, taking two steps instead of three.

Most purely functional programming languages (notably Miranda and its descendants, including Haskell), and the proof languages of theorem provers, use lazy evaluation, which is essentially the same as call by need. This is like normal order reduction, but call by need manages to avoid the duplication of work inherent in normal order reduction using sharing. In the example given above, (λx.xx) ((λx.x)y) reduces to ((λx.x)y) ((λx.x)y), which has two redexes, but in call by need they are represented using the same object rather than copied, so when one is reduced the other is too.
A note about complexity

While the idea of β-reduction seems simple enough, it is not an atomic step, in that it must have a non-trivial cost when estimating computational complexity.[26] To be precise, one must somehow find the location of all of the occurrences of the bound variable V in the expression E, implying a time cost, or one must keep track of these locations in some way, implying a space cost. A naïve search for the locations of V in E is O(n) in the length n of E. This has led to the study of systems that use explicit substitution. Sinot's director strings[27] offer a way of tracking the locations of free variables in expressions.
Parallelism and concurrency

The Church–Rosser property of the lambda calculus means that evaluation (β-reduction) can be carried out in any order, even in parallel. This means that various nondeterministic evaluation strategies are relevant. However, the lambda calculus does not offer any explicit constructs for parallelism. One can add constructs such as Futures to the lambda calculus. Other process calculi have been developed for describing communication and concurrency.
Optimal reduction

In Lévy's 1988 paper "Sharing in the Evaluation of lambda Expressions", he defines a notion of optimal sharing, such that no work is duplicated. For example, performing a β-reduction in normal order on (λx.xx) (II) reduces it to II (II). The argument II is duplicated by the application to the first lambda term. If the reduction was done in an applicative order first, we save work because work is not duplicated: (λx.xx) (II) reduces to (λx.xx) I. On the other hand, using applicative order can result in redundant reductions or even possibly never reduce to normal form. For example, performing a β-reduction in normal order on (λf.f I) (λy.(λx.xx) (y I)) yields (λy.(λx.xx) (y I)) I, (λx.xx) (II) which we know we can do without duplicating work. Doing the same but in applicative order yields (λf.f I) (λy.y I (y I)), (λy.y I (y I)) I, I I (I I), and now work is duplicated.

Lévy shows the existence of lambda terms where there does not exist a sequence of reductions which reduces them without duplicating work. The below lambda term is such an example.

((λg.(g(g(λx.x)))) (λh.((λf.(f(f(λz.z)))) (λw.(h(w(λy.y)))))))

It is composed of three similar terms, x=((λg. ... ) (λh.y)) and y=((λf. ...) (λw.z) ), and finally z=λw.(h(w(λy.y))). There are only two possible β-reductions to be done here, on x and on y. Reducing the outer x term first results in the inner y term being duplicated, and each copy will have to be reduced, but reducing the inner y term first will duplicate its argument z, which will cause work to be duplicated when the values of h and w are made known. Incidentally, the above term reduces to the identity function (λy.y), and is constructed by making wrappers which make the identity function available to the binders g=λh..., f=λw..., h=λx.x (at first), and w=λz.z (at first), all of which are applied to the innermost term λy.y.

The precise notion of duplicated work relies on noticing that after the first reduction of I I is done, the value of the other I I can be determined, because they have the same structure (and in fact they have exactly the same values), and result from a common ancestor. Such similar structures can each be assigned a label that can be tracked across reductions. If a name is assigned to the redex that produces all the resulting II terms, and then all duplicated occurrences of II can be tracked and reduced in one go. However, it is not obvious that a redex will produce the II term. Identifying the structures that are similar in different parts of a lambda term can involve a complex algorithm and can possibly have a complexity equal to the history of the reduction itself.

While Lévy defines the notion of optimal sharing, he does not provide an algorithm to do it. In Vincent van Oostrom, Kees-Jan van de Looij, and Marijn Zwitserlood's paper Lambdascope: Another optimal implementation of the lambda-calculus, they provide such an algorithm by transforming lambda terms into interaction nets, which are then reduced. Roughly speaking, the resulting reduction is optimal because every term that would have the same labels as per Lévy's paper would also be the same graph in the interaction net. In the paper, they mention that their prototype implementation of Lambdascope performs as well as the optimised version of the reference optimal higher order machine BOHM.

More details can be found in the short article About the efficient reduction of lambda terms.
Semantics

The fact that lambda calculus terms act as functions on other lambda calculus terms, and even on themselves, led to questions about the semantics of the lambda calculus. Could a sensible meaning be assigned to lambda calculus terms? The natural semantics was to find a set D isomorphic to the function space D → D, of functions on itself. However, no nontrivial such D can exist, by cardinality constraints because the set of all functions from D to D has greater cardinality than D, unless D is a singleton set.

In the 1970s, Dana Scott showed that, if only continuous functions were considered, a set or domain D with the required property could be found, thus providing a model for the lambda calculus.

This work also formed the basis for the denotational semantics of programming languages.
Variations and extensions

These extensions are in the lambda cube:

    Typed lambda calculus – Lambda calculus with typed variables (and functions)
    System F – A typed lambda calculus with type-variables
    Calculus of constructions – A typed lambda calculus with types as first-class values

These formal systems are extensions of lambda calculus that are not in the lambda cube:

    Binary lambda calculus – A version of lambda calculus with binary I/O, a binary encoding of terms, and a designated universal machine.
    Lambda-mu calculus – An extension of the lambda calculus for treating classical logic

These formal systems are variations of lambda calculus:

    Kappa calculus – A first-order analogue of lambda calculus

These formal systems are related to lambda calculus:

    Combinatory logic – A notation for mathematical logic without variables
    SKI combinator calculus – A computational system based on the S, K and I combinators, equivalent to lambda
    calculus, but reducible without variable substitutions
    
    
#### See also

    Applicative computing systems – Treatment of objects in the style of the lambda calculus
    Cartesian closed category – A setting for lambda calculus in category theory
    Categorical abstract machine – A model of computation applicable to lambda calculus
    Curry–Howard isomorphism – The formal correspondence between programs and proofs
    De Bruijn index – notation disambiguating alpha conversions
    De Bruijn notation – notation using postfix modification functions
    Deductive lambda calculus – The consideration of the problems associated with considering lambda calculus as a Deductive system.
    Domain theory – Study of certain posets giving denotational semantics for lambda calculus
    Evaluation strategy – Rules for the evaluation of expressions in programming languages
    Explicit substitution – The theory of substitution, as used in β-reduction
    Functional programming
    Harrop formula – A kind of constructive logical formula such that proofs are lambda terms
    Interaction nets
    Kleene–Rosser paradox – A demonstration that some form of lambda calculus is inconsistent
    Knights of the Lambda Calculus – A semi-fictional organization of LISP and Scheme hackers
    Krivine machine – An abstract machine to interpret call-by-name in lambda calculus
    Lambda calculus definition – Formal definition of the lambda calculus.
    Let expression – An expression closely related to an abstraction.
    Minimalism (computing)
    Rewriting – Transformation of formulæ in formal systems
    SECD machine – A virtual machine designed for the lambda calculus
    Scott–Curry theorem – A theorem about sets of lambda terms
    To Mock a Mockingbird – An introduction to combinatory logic
    Universal Turing machine – A formal computing machine that is equivalent to lambda calculus
    Unlambda – An esoteric functional programming language based on combinatory logic

