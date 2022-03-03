## Data type

In [[computer science]] and [[computer programming]], a '''data type''' or simply '''type''' is an attribute of [[data]] which tells the [[compiler]] or [[Interpreter (computing)|interpreter]] how the programmer intends to use the data. 
![[Pasted image 20201020133134.png|Python 3: The standard type hierarchy]]
Most programming languages support basic data types of [[integer (computer science)|integer]] numbers (of varying sizes), [[floating point|floating-point]] numbers (which approximate real numbers), [[Character (computing)|characters]] and [[boolean data type|Booleans]]. A data type constrains the values that an [[Expression (computer science)|expression]], such as a variable or a function, might take. This data type defines the operations that can be done on the data, the meaning of the data, and the way values of that type can be stored. A data type provides a set of values from which an [[Expression_(computer_science)|expression]] (i.e. variable, function, etc.) may take its values.

## Concept 

Data types are used within type systems, which offer various ways of defining, implementing and using them. Different type systems ensure varying degrees of [[type safety]].

Almost all programming languages explicitly include the notion of data type, though different languages may use different terminology.

Common data types include:

* [[Integer (computer science)|Integer]].
* [[floating point|Floating-point]] number.
* [[Character (computing)|Character]].
* [[String (computer science)|String]].
* [[Boolean data type|Boolean]].

For example, in the [[Java (programming language)|Java programming language]], the type ''int'' represents the set of [[32-bit]] [[Integer (computer science)|integers]] ranging in value from −2,147,483,648 to 2,147,483,647, as well as the operations that can be performed on integers, such as addition, subtraction, and multiplication. A color, on the other hand, might be represented by three [[byte]]s denoting the amounts each of red, green, and blue, and a string representing the color's name.

Most programming languages also allow the programmer to define additional data types, usually by combining multiple elements of other types and defining the valid operations of the new data type.  For example, a programmer might create a new data type named "[[complex number]]" that would include real and imaginary parts. 
A data type also represents a constraint placed upon the interpretation of data in a [[type system]], describing representation, interpretation and structure of [[Value (computer science)|value]]s or [[object (computer science)|object]]s stored in computer memory. The type system uses data type information to check [[correctness of computer programs]] that access or manipulate the data.

Most data types in statistics have comparable types in computer programming, and vice versa, as shown in the following table:

{|class="wikitable"
|-
! Statistics !! Programming
|-
| [[real-valued]] ([[interval scale]])
| rowspan=2|[[floating-point]]
|-
| [[real-valued]] ([[ratio scale]])
|-
| [[count data]] (usually non-negative) || [[Integer (computer science)|integer]]
|-
| [[binary data]] || [[Boolean data type|Boolean]]
|-
| [[categorical data]] || [[enumerated type]]
|-
| [[random vector]] || [[list (abstract data type)|list]] or [[array data type|array]]
|-
| [[random matrix]] || two-dimensional [[array data type|array]]
|-
| [[random tree (disambiguation)|random tree]] || [[tree (data structure)|tree]]
|}

==Definition==
{{harv|Parnas|Shore|Weiss|1976}} identified five definitions of a "type" that were used—sometimes implicitly—in the literature.  Types including behavior align more closely with [[object-oriented]] models, whereas a [[structured programming]] model would tend to not include code, and are called [[plain old data structure]]s.

The five types are:
; Syntactic: A type is a purely [[syntax|syntactic]] label associated with a [[variable (computer science)|variable]] when it is declared. Such definitions of "type" do not give any [[semantic]] meaning to types.{{clarify|date=August 2016}}
; Representation: A type is defined in terms of its composition of more primitive types—often machine types.
; Representation and behaviour: A type is defined as its representation and a set of [[operator (computer programming)|operator]]s manipulating these representations.
; Value space: A type is a set of possible values which a variable can possess. Such definitions make it possible to speak about ([[disjoint union|disjoint]]) [[union (set theory)|union]]s or [[Cartesian product]]s of types.
; Value space and behaviour: A type is a set of values which a variable can possess and a set of [[function (computer science)|function]]s that one can apply to these values.

The definition in terms of a representation was often done in imperative languages such as [[ALGOL]] and [[Pascal (programming language)|Pascal]], while the definition in terms of a value space and behaviour was used in higher-level languages such as [[Simula]] and [[CLU (programming language)|CLU]].

==Classes of data types==
===Primitive data types===
[[Primitive data type]]s are typically types that are built-in or basic to a language implementation.

==== Machine data types ====

All data in computers based on digital electronics is represented as [[bit]]s (alternatives 0 and 1) on the lowest level. The smallest addressable unit of data is usually a group of bits called a [[byte]] (usually an [[octet (computing)|octet]], which is 8 bits). The unit processed by [[machine code]] instructions is called a [[Word (data type)|word]] ({{as of|2011|lc=y}}, typically 32 or 64 bits). Most instructions interpret the word as a [[binary number]], such that a 32-bit word can represent unsigned integer values from 0 to <math>2^{32}-1</math> or signed integer values from <math>-2^{31}</math> to <math>2^{31}-1</math>. Because of [[two's complement]], the machine language and machine doesn't need to distinguish between these unsigned and signed data types for the most part.

Floating point numbers used for floating point arithmetic use a different interpretation of the bits in a word. See [[Floating-point arithmetic]] for details.

Machine data types need to be ''exposed'' or made available in [[systems programming|system]]s or [[low-level programming language]]s, allowing fine-grained control over hardware. The [[C programming language]], for instance, supplies integer types of various widths, such as <code>short</code> and <code>long</code>. If a corresponding native type does not exist on the target platform, the compiler will break them down into code using types that do exist. For instance, if a 32-bit integer is requested on a 16 bit platform, the compiler will tacitly treat it as an array of two 16 bit integers.

In higher level programming, machine data types are often hidden or ''abstracted'' as an implementation detail that would render code less portable if exposed.  For instance, a generic <code>numeric</code> type might be supplied instead of integers of some specific bit-width.

#### Boolean type

The [[Boolean type]] represents the values [[logical truth|true]] and [[false (logic)|false]]. Although only two values are possible, they are rarely implemented as a single binary digit for efficiency reasons. Many programming languages do not have an explicit Boolean type, instead interpreting (for instance) 0 as false and other values as true.
**Boolean data** refers to the logical structure of how the language is interpreted to the machine language. In this case a Boolean 0 refers to the logic False. True is always a non zero, especially a one which is known as Boolean 1.

====Enumerations====
The [[enumerated type]] has distinct values, which can be compared and assigned, but which do not necessarily have any particular concrete representation in the computer's memory; compilers and interpreters can represent them arbitrarily. For example, the four suits in a deck of playing cards may be four enumerators named ''CLUB'', ''DIAMOND'', ''HEART'', ''SPADE'', belonging to an enumerated type named ''suit''.  If a variable ''V'' is declared having ''suit'' as its data type, one can assign any of those four values to it. Some implementations allow programmers to assign integer values to the enumeration values, or even treat them as type-equivalent to integers.

====Numeric types====

Such as:
* The [[integer (computing)|integer]] data types, or "non-fractional numbers". May be sub-typed according to their ability to contain negative values (e.g. <code>unsigned</code> in C and C++). May also have a small number of predefined subtypes (such as <code>short</code> and <code>long</code> in C/C++); or allow users to freely define subranges such as 1..12 (e.g. [[Pascal (programming language)|Pascal]]/[[Ada (programming language)|Ada]]).
* [[Floating point]] data types, usually represent values as high-precision fractional values ([[rational numbers]], mathematically), but are sometimes misleadingly called reals (evocative of mathematical [[real numbers]]). They usually have predefined limits on both their maximum values and their precision. Typically stored internally in the form {{math|a × 2<sup>b</sup>}} (where {{math|a}} and {{math|b}} are integers), but displayed in familiar [[decimal]] form.
* [[Fixed point (computing)|Fixed point]] data types are convenient for representing monetary values. They are often implemented internally as integers, leading to predefined limits.
* [[Bignum]] or [[arbitrary precision]] numeric types lack predefined limits. They are not primitive types, and are used sparingly for efficiency reasons.

===Composite types===
[[Composite type]]s are derived from more than one primitive type. This can be done in a number of ways. The ways they are combined are called [[data structure]]s. Composing a primitive type into a compound type generally results in a new type, e.g. ''array-of-integer'' is a different type to ''integer''.

* An [[array data type|array]] (also called vector, [[List (abstract data type)|list]], or sequence) stores a number of elements and provide [[random access]] to individual elements. The elements of an array are typically (but not in all contexts) required to be of the same type. Arrays may be fixed-length or expandable. Indices into an array are typically required to be integers (if not, one may stress this relaxation by speaking about an [[associative array]]) from a specific range (if not all indices in that range correspond to elements, it may be a [[sparse array]]).
* [[Record (computer science)|Record]] (also called tuple or struct) Records are among the simplest [[data structure]]s. A record is a value that contains other values, typically in fixed number and sequence and typically indexed by names. The elements of records are usually called ''fields'' or ''members''.
* [[Union (computer science)|Union]]. A union type definition will specify which of a number of permitted primitive types may be stored in its instances, e.g. "float or long integer". Contrast with a [[record (computer science)|record]], which could be defined to contain a float ''and'' an integer; whereas, in a union, there is only one type allowed at a time.
** A [[tagged union]] (also called a [[Variant type|variant]], variant record, discriminated union, or disjoint union) contains an additional field indicating its current type for enhanced type safety.
* A [[set (abstract data type)|set]] is an [[abstract data structure]] that can store certain values, without any particular [[sequence|order]], and no repeated values. Values themselves are not retrieved from sets, rather one tests a value for membership to obtain a boolean "in" or "not in".
* An [[object (computer science)|object]] contains a number of data fields, like a record, and also a number of subroutines for accessing or modifying them, called [[Method (computer programming)|methods]].

Many others are possible, but they tend to be further variations and compounds of the above. For example a [[linked list]] can store the same data as an array, but provides [[sequential access]] rather than random and is built up of records in [[dynamic memory]]; though arguably a data structure rather than a type ''per se'', it is also common and distinct enough that including it in a discussion of composite types can be justified.

==== String and text types ====

Such as:

* A [[Character (computing)|character]], which may be a letter of some [[alphabet]], a digit, a blank space, a punctuation mark, etc.
* A [[String (computer science)|string]], which is a sequence of characters. Strings are typically used to represent words and text.

Character and string types can store sequences of characters from a character set such as [[ASCII]]. Since most character sets include the [[Numerical digit|digits]], it is possible to have a numeric string, such as <code>"1234"</code>. However, many languages treat these as belonging to a different type to the numeric value <code>1234</code>.

Character and string types can have different subtypes according to the required character "width". The original 7-bit wide ASCII was found to be limited, and superseded by 8 and 16-bit sets, which can encode a wide variety of non-Latin alphabets (such as [[Hebrew]] and [[Chinese language|Chinese]]) and other symbols. Strings may be either stretch-to-fit or of fixed size, even in the same programming language. They may also be subtyped by their maximum size.

Note: Strings are not a primitive data type in all languages. In [[C (programming language)|C]], for instance, they are composed from an array of characters.

===Abstract data types===
Any data type that does not expatiate on the concrete representation of the data is an [[abstract data type]].  Instead, a formal ''specification'' based on the data type's operations is used to describe it. Any ''implementation'' of a specification must fulfill the rules given. Abstract data types are used in formal [[Semantics (computer science)|semantics]] and program [[Formal verification|verification]] and, less strictly, in [[design]].

Beyond verification, a specification might immediately be turned into an implementation. The [[OBJ (programming language)|OBJ]] family of programming languages for instance bases on this option using [[equation]]s for specification and [[rewriting]] to run them. [[Algebraic specification]]<ref>{{cite book|title=Fundamentals of Algebraic Specification 1 - Equations and Initial Semantics|first=H.|last= Ehrig|publisher=Springer-Verlag|year=1985|isbn=0-387-13718-1}}</ref> was an important subject of research in CS around 1980 and almost a synonym for abstract data types at that time. It has a mathematical foundation in [[Universal algebra]]<ref>{{cite book|title=Universal Algebra for Computer Scientists|first=Wolfgang|last= Wechler|publisher=Springer-Verlag|year=1992|isbn=0-387-54280-9}}</ref>. The specification language can be made more expressive by allowing other formulas than only equations. 

A typical example is the hierarchy of the [[List (abstract data type)|list]], [[Set_(abstract_data_type)#Multiset|bag]] and [[Set (computer science)|set]] data types. All these data types can be declared by three operations: ''null'', which constructs is the empty container, ''single'', which constructs a container from a single element and ''append'', which combines two containers of the same type. The complete specification for the three data types can then be given by the following rules over these operation:
{|
|-
| - null is the left and right neutral:           || append(null,A) = A, append(A,null) = A.
|-
| - for a list, append is associative:            || append(append(A,B),C) = append(A,append(B,C)).
|-
| - bags add commutativity:                       || append(B,A) = append(A,B).
|-
| - finally, a set is also idempotent:            || append(A,A) = A.
|}

Access to the data can be specified likely, e.g. a ''member'' function for these containers by:
{|
|-
| - member(X,single(Y)) = eq(X,Y)
|-
| - member(X,null) = false
|-
| - member(X,append(A,B)) = or(member(X,A), member(X,B))
|}

### Other types
Types can be based on, or derived from, the basic types explained above. In some languages, such as C, [[function (computer science)|function]]s have a type derived from the type of their [[return value]].

#### Pointers and references
{{Main|Reference (computer science)}}
The main non-composite, derived type is the [[pointer (computer programming)|pointer]], a data type whose value refers directly to (or "points to") another value stored elsewhere in the [[computer memory]] using its [[Memory address|address]]. It is a primitive kind of [[reference (computer science)|reference]]. (In everyday terms, a page number in a book could be considered a piece of data that refers to another one). Pointers are often stored in a format similar to an integer; however, attempting to dereference or "look up" a pointer whose value was never a valid memory address would cause a program to crash. To ameliorate this potential problem, pointers are considered a separate type to the type of data they point to, even if the underlying representation is the same.

#### Function types
{{Main|Function type}}

While functions can be assigned a type, too, their type is not considered a data type in the setting of this article. Here, data is viewed as opposed to [[algorithm]]s. In programming, functions are strongly related to the later. But because a central motive of [[Universal Turing machine|universal data processing]] is, that algorithms can be [[Gödel numbering#Generalizations|represented as data]], e.g. textual description and binary programs, the contrast of data and functions has its limits. Reversely, functions can be used to [[Lambda_calculus#Encoding_datatypes|encode data]], too. Many contemporary [[type systems]] strongly focus on function types and many modern languages construe functions as [[first-class citizen]]s.

To conceptually exclude functions from the subject is not uncommon in related fields. [[Predicate logic]] for instance does not allow to apply the [[Quantifier (logic)|quantifiers]] on function nor predicate names.

#### Meta types
{{Main|Metaclass}}

Some programming languages represent the type information as data, enabling [[type introspection]] and [[Reflection (computer programming)|reflection]]. To the contrary, [[Type constructor|higher order]] [[type systems]], while allowing to construct types from other types and pass them through functions like they were values, typically avoid to base [[computational]] decisions on them.

#### Utility types
For convenience, high-level languages may supply ready-made "real world" data types, for instance ''times'', ''dates'' and ''monetary values'' and ''memory'', even where the language allows them to be built from primitive types.

## Type systems
A [[type system]] associates types with computed values. By examining the flow of these values, a type system attempts to prove that no ''type errors'' can occur. The type system in question determines what constitutes a type error, but a type system generally seeks to guarantee that operations expecting a certain kind of value are not used with values for which that operation does not make sense.

A [[compiler]] may use the static type of a value to optimize the storage it needs and the choice of algorithms for operations on the value. In many [[C (programming language)|C]] compilers the {{C-lang|float}} data type, for example, is represented in 32 [[bit]]s, in accord with the [[IEEE 754-2008|IEEE specification for single-precision floating point numbers]]. They will thus use floating-point-specific [[instruction set|microprocessor operations]] on those values (floating-point addition, multiplication, etc.).

The depth of type constraints and the manner of their evaluation affect the ''typing'' of the language. A [[programming language]] may further associate an operation with varying concrete algorithms on each type in the case of [[type polymorphism]]. [[Type theory]] is the study of type systems, although the concrete type systems of programming languages originate from practical issues of computer architecture, compiler implementation, and language design.

Type systems may be variously [[static typing|static]] or [[dynamic typing|dynamic]], [[strong typing|strong]] or [[weak typing]], and so forth.

## See also
* [[C data types]]
* [[Data dictionary]]
* [[Functional programming]]
* [[Kind (type theory)|Kind]]
* [[Type theory]] for the mathematical models of types
* [[Type system]] for different choices in programming language typing
* [[Type conversion]]

==References==
{{Reflist}}

==Further reading==
*{{cite journal|last1 = Parnas|first1=David L.|authorlink1=David Parnas|first2=John E.|last2=Shore|first3=David|last3=Weiss|year=1976|title=Abstract types defined as classes of variables|journal=Proceedings of the 1976 Conference on Data : Abstraction, Definition and Structure|pages=149–154|doi=10.1145/800237.807133|ref=harv}} 
*{{cite journal|last1 = Cardelli|first1=Luca|authorlink1=Luca Cardelli|last2=Wegner|first2=Peter|authorlink2=Peter Wegner|title = On Understanding Types, Data Abstraction, and Polymorphism|url=http://lucacardelli.name/Papers/OnUnderstanding.A4.pdf|journal = [[ACM Computing Surveys]]|date = December 1985| volume = 17|issue=4|issn = 0360-0300|pages = 471–523|doi = 10.1145/6041.6042| ref = harv|citeseerx=10.1.1.117.695}}
*{{cite book|first=J. Craig|last=Cleaveland|title=An Introduction to Data Types|year=1986|publisher=Addison-Wesley|isbn=978-0201119404}}

## External links
![[Pasted image 20201020133628.png]]
[[Category:Data types| ]]
[[Category:Programming language concepts]]
