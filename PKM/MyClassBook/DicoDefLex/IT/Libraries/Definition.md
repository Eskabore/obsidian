In [[computer science]], a '''library''' is a collection of [[non-volatile memory|non-volatile]] resources used by [[computer program]]s, often for [[software development]]. These may include configuration data, documentation, help data, message templates, [[Code reuse|pre-written code]] and [[../Computing/Subroutine|subroutines]], [[obsidian://open?vault=Drafts_deskTop&file=Classes|classes]], [[Value (computer science)|values]] or [[Data type|type]] specifications. ![[Pasted image 20201020132816.png]]
In [[OS/360 and successors|IBM's OS/360 and its successors]] they are referred to as [[Data set (IBM mainframe)#Partitioned datasets|partitioned data sets]].

A '''library''' is also a collection of implementations of behavior, written in terms of a language, that has a well-defined [[interface (computing)|interface]] by which the behavior is invoked. For instance, people who want to write a higher level program can use a library to make [[system call]]s instead of implementing those system calls over and over again. In addition, the behavior is provided for reuse by multiple independent programs. A program invokes the library-provided behavior via a mechanism of the language. For example, in a simple [[imperative language]] such as C, the behavior in a library is invoked by using C's normal function-call. What distinguishes the call as being to a library function, versus being to another function in the same program, is the way that the code is organized in the system.

Library code is organized in such a way that it can be used by multiple programs that have no connection to each other, while code that is part of a program is organized to be used only within that one program. This distinction can gain a hierarchical notion when a program grows large, such as a multi-million-line program. In that case, there may be internal libraries that are reused by independent sub-portions of the large program. The distinguishing feature is that a library is organized for the purposes of being reused by independent programs or sub-programs, and the user only needs to know the interface and not the internal details of the library.

The value of a library lies in the reuse of the behavior. When a program invokes a library, it gains the behavior implemented inside that library without having to implement that behavior itself. Libraries encourage the sharing of code in a [[Modular programming|modular]] fashion, and ease the distribution of the code.

The behavior implemented by a library can be connected to the invoking program at different [[program lifecycle phase]]s. If the code of the library is accessed during the build of the invoking program, then the library is called a [[static library]].<br> An alternative is to build the executable of the invoking program and distribute that, independently of the library implementation. The library behavior is connected after the executable has been invoked to be executed, either as part of the process of starting the execution, or in the middle of execution. In this case the library is called a [[dynamic library]] (loaded at [[Runtime (program lifecycle phase)|runtime]]). A dynamic library can be loaded and linked when preparing a program for execution, by the [[linker (computing)|linker]]. Alternatively, in the middle of execution, an application may explicitly request that a module be [[Dynamic loading|loaded]].

Most [[compiled language]]s have a [[standard library]], although programmers can also create their own custom libraries. Most modern software systems provide libraries that implement the majority of the system services. Such libraries have [[Organized|organized]] the services which a modern application requires. As such, most code used by modern applications is provided in these system libraries.

==History==
The earliest programming concepts analogous to libraries were intended to separate [[data]] definitions from the program [[implementation]]. [[JOVIAL]] brought the "COMPOOL" (Communication Pool) concept to popular attention in 1959, although it adopted the idea from the large-system [[Semi Automatic Ground Environment|SAGE]] software. Following the computer science principles of [[separation of concerns]] and [[information hiding]], "Comm Pool's purpose was to permit the sharing of System Data among many programs by providing a centralized data description."<ref name="Wexelblat_1981_369">{{Cite book |last=Wexelblat |first=Richard |title=History of Programming Languages |publisher=Academic Press (A subsidiary of [[Harcourt Brace]]) |year=1981 |series=ACM Monograph Series |publication-place=New York, NY |isbn=0-12-745040-8 |page=[https://archive.org/details/historyofprogram0000hist/page/369 369] |postscript=<!--None--> |url=https://archive.org/details/historyofprogram0000hist/page/369 }}</ref>

[[COBOL]] also included "primitive capabilities for a library system" in 1959,<ref name="Wexelblat_1981_274">Wexelblat, ''op. cit.'', p. 274</ref> but [[Jean E. Sammet|Jean Sammet]] described them as "inadequate library facilities" in retrospect.<ref name="Wexelblat_1981_258">Wexelblat, ''op. cit.'', p. 258</ref>

Another major contributor to the modern library concept came in the form of the [[subprogram]] innovation of [[FORTRAN]]. FORTRAN subprograms can be compiled independently of each other, but the compiler lacked a [[Linker (computing)|linker]]. So prior to the introduction of modules in Fortran-90, [[type checking]] between FORTRAN<ref group=NB>It was possible earlier between, e.g., Ada subprograms.</ref> subprograms was impossible.<ref name="Wilson_Clark_1988_126">{{Cite book |last1=Wilson |first1=Leslie B. |last2=Clark |first2=Robert G.
|title=Comparative Programming Languages
|publisher=Addison-Wesley |year=1988 |publication-place=Wokingham, England |isbn=0-201-18483-4 |page=126 |postscript=<!--None--> }}</ref>

Finally, historians of the concept should remember the influential [[Simula 67]]. Simula was the first [[object-oriented programming]] language, and its [[Class (computer science)|classes]] were nearly identical to the modern concept as used in [[Java (programming language)|Java]], [[C++]], and [[C Sharp (programming language)|C#]]. The ''class'' concept of Simula was also a progenitor of the ''package'' in [[Ada (programming language)|Ada]] and the ''module'' of [[Modula-2]].<ref name="Wilson_Clark_1988_52">Wilson and Clark, ''op. cit.'', p. 52</ref> Even when developed originally in 1965, Simula classes could be included in library files and added at compile time.<ref name="Wexelblat_1981_716">Wexelblat, ''op. cit.'', p. 716</ref>

=={{anchor|Smart linking}}Linking==
{{main|Link time|Linker (computing)}}

Libraries are important in the program ''linking'' or ''binding'' process, which resolves references known as ''links'' or ''symbols'' to library modules. The linking process is usually automatically done by a ''[[linker (computing)|linker]]'' or ''binder'' program that searches a set of libraries and other modules in a given order. Usually it is not considered an error if a link target can be found multiple times in a given set of libraries. Linking may be done when an executable file is created, or whenever the program is used at [[Runtime (program lifecycle phase)|runtime]].

The references being resolved may be addresses for jumps and other routine calls. They may be in the main program, or in one module depending upon another. They are resolved into fixed or relocatable addresses (from a common base) by allocating runtime memory for the [[memory segment]]s of each module referenced.

Some programming languages may use a feature called ''smart linking'' whereby the linker is aware of or integrated with the compiler, such that the linker knows how external references are used, and code in a library that is never actually ''used'', even though internally referenced, can be discarded from the compiled application. For example, a program that only uses integers for arithmetic, or does no arithmetic operations at all, can exclude floating-point library routines. This smart-linking feature can lead to smaller application file sizes and reduced memory usage.

==Relocation==
{{Main|Relocation (computer science)}}

Some references in a program or library module are stored in a relative or symbolic form which cannot be resolved until all code and libraries are assigned final static addresses. ''Relocation'' is the process of adjusting these references, and is done either by the linker or the [[loader (computing)|loader]]. In general, relocation cannot be done to individual libraries themselves because the addresses in memory may vary depending on the program using them and other libraries they are combined with. [[Position-independent code]] avoids references to absolute addresses and therefore does not require relocation.

==Static libraries==
{{Main|Static library}}

When linking is performed during the creation of an executable or another object file, it is known as ''static linking'' or ''early binding''. In this case, the linking is usually done by a [[linker (computing)|linker]], but may also be done by the [[compiler]]. A ''static library'', also known as an ''archive'', is one intended to be statically linked. Originally, only static libraries existed. Static linking must be performed when any modules are recompiled.

All of the modules required by a program are sometimes statically linked and copied into the executable file. This process, and the resulting stand-alone file, is known as a [[static build]] of the program. A static build may not need any further [[relocation (computer science)|relocation]] if [[virtual memory]] is used and no [[address space layout randomization]] is desired.<ref>{{cite web|url=http://usenix.org/legacy/publications/library/proceedings/usenix05/tech/general/full_papers/collberg/collberg_html/main.html|title=SLINKY: Static Linking Reloaded|authors=Christian Collberg, John H. Hartman, Sridivya Babu, Sharath K. Udupa|publisher=Department of Computer Science, [[University of Arizona]]|accessdate=2016-03-17|year=2003|url-status=live|archiveurl=https://web.archive.org/web/20160323214637/https://www.usenix.org/legacy/publications/library/proceedings/usenix05/tech/general/full_papers/collberg/collberg_html/main.html|archivedate=23 March 2016}}</ref>

==Shared libraries==
{{redirect|Shared object|the synchronization mechanism|Monitor (synchronization)}}

A '''shared library''' or '''shared object''' is a file that is intended to be shared by [[executable files]] and further shared object files. Modules used by a program are loaded from individual shared objects into memory at [[load time]] or [[Runtime (program lifecycle phase)|runtime]], rather than being copied by a linker when it creates a single monolithic executable file for the program.

Shared libraries can be statically linked during compile-time, meaning that references to the library modules are resolved and the modules are allocated memory when the executable file is created. But often linking of shared libraries is postponed until they are loaded.{{Dubious|date=May 2014}}

Most modern [[operating system]]s<ref group=NB>Some older systems, e.g., [[Burroughs MCP]], [[Multics]], also have only a single format for executable files, regardless of whether they are shared.</ref> can have shared library files of the same format as the executable files. This offers two main advantages: first, it requires making only one loader for both of them, rather than two (having the single loader is considered well worth its added complexity). Secondly, it allows the executables also to be used as shared libraries, if they have a [[symbol table]]. Typical combined executable and shared library formats are [[Executable and Linkable Format|ELF]] and [[Mach-O]] (both in Unix) and [[Portable Executable|PE]] (Windows).

In some older environments such as [[16-bit Windows]] or [[HP Multi-Programming Executive|MPE]] for the [[HP 3000]] only stack-based data (local) was allowed in shared-library code, or other significant restrictions were placed on shared-library code.

===Memory sharing===
{{main|Shared memory (interprocess communication)}}

Library code may be shared in memory by multiple [[process (computing)|process]]es, as well as on disk. If virtual memory is used, processes would execute the same physical page of RAM that is mapped into the different address spaces of the processes. This has advantages. For instance, on the [[OpenStep]] system, applications were often only a few hundred kilobytes in size and loaded quickly; the majority of their code was located in libraries that had already been loaded for other purposes by the operating system.{{Citation needed|date=December 2008}}

Programs can accomplish RAM sharing by using [[position-independent code]], as in [[Unix]], which leads to a complex but flexible architecture, or by using common virtual addresses, as in Windows and [[OS/2]]. These systems make sure, by various tricks like pre-mapping the address space and reserving slots for each shared library, that code has a great probability of being shared. A third alternative is [[single-level store]], as used by the [[IBM System/38]] and its successors. This allows position-dependent code, but places no significant restrictions on where code can be placed or how it can be shared.

In some cases different versions of shared libraries can cause problems, especially when libraries of different versions have the same file name, and different applications installed on a system each require a specific version. Such a scenario is known as [[DLL hell]], named after the Windows and OS/2 [[DLL file]]. Most modern operating systems after 2001 have clean-up methods to eliminate such situations or use application-specific "private" libraries.<ref name="endofdllhell">{{cite web
| url=http://msdn.microsoft.com/library/techart/dlldanger1.htm
| title=The End of DLL Hell
| date=2000-01-11
| archiveurl=https://web.archive.org/web/20010605023737/http://msdn.microsoft.com/library/techart/dlldanger1.htm
| archivedate=2001-06-05
| last=Anderson
| first=Rick
| publisher=microsoft.com
| accessdate=2012-01-15
| quote=Private DLLs are DLLs that are installed with a specific application and used only by that application.
}}</ref>

===Dynamic linking===
{{main|Dynamic linker}}

Dynamic linking or [[late binding]] is linking performed while a program is being loaded ([[load time]]) or executed ([[Runtime (program lifecycle phase)|runtime]]), rather than when the executable file is created. A dynamically linked library ([[dynamic-link library]], or DLL, under [[Windows (OS)|Windows]] and [[OS/2]]; dynamic shared object, or DSO, under [[Unix-like]] systems) is a library intended for dynamic linking. Only a minimal amount of work is done by the [[Linker (computing)|linker]] when the executable file is created; it only records what library routines the program needs and the index names or numbers of the routines in the library. The majority of the work of linking is done at the time the application is loaded (load time) or during execution (runtime). Usually, the necessary linking program, called a "dynamic linker" or "linking loader", is actually part of the underlying [[operating system]]. (However, it is possible, and not exceedingly difficult, to write a program that uses dynamic linking and includes its own dynamic linker, even for an operating system that itself provides no support for dynamic linking.)

Programmers originally developed dynamic linking in the [[Multics]] operating system, starting in 1964, and the MTS ([[Michigan Terminal System]]), built in the late 1960s.<ref>{{cite journal | title=A History of MTS | journal=Information Technology Digest | volume=5 | issue=5}}</ref>

===Optimizations===
Since shared libraries on most systems do not change often, systems can compute a likely load address for each shared library on the system before it is needed and store that information in the libraries and executables. If every shared library that is loaded has undergone this process, then each will load at its predetermined address, which speeds up the process of dynamic linking. This optimization is known as [[prebinding]] in macOS and [[prelinking]] in Linux. Disadvantages of this technique include the time required to precompute these addresses every time the shared libraries change, the inability to use [[address space layout randomization]], and the requirement of sufficient virtual address space for use (a problem that will be alleviated by the adoption of [[64-bit]] architectures, at least for the time being).

===Locating libraries at runtime===
Loaders for shared libraries vary widely in functionality. Some depend on the executable storing explicit paths to the libraries. Any change to the library naming or layout of the file system will cause these systems to fail. More commonly, only the name of the library (and not the path) is stored in the executable, with the operating system supplying a method to find the library on disk, based on some algorithm.

If a shared library that an executable depends on is deleted, moved, or renamed, or if an incompatible version of the library is copied to a place that is earlier in the search, the executable would fail to load. This is called ''[[dependency hell]]'', existing on many platforms. The (infamous) Windows variant is commonly known as [[DLL hell]]. This problem cannot occur if each version of each library is uniquely identified and each program references libraries only by their full unique identifiers. The "DLL hell" problems with earlier Windows versions arose from using only the names of libraries, which were not guaranteed to be unique, to resolve dynamic links in programs. (To avoid "DLL hell", later versions of Windows rely largely on options for programs to install private DLLs&mdash;essentially a partial retreat from the use of shared libraries&mdash;along with mechanisms to prevent replacement of shared system DLLs with earlier versions of them.)

====Microsoft Windows====
[[Microsoft Windows]] checks the [[Windows registry|registry]] to determine the proper place to load DLLs that implement [[Component Object Model|COM objects]], but for other DLLs it will check the directories in a defined order. First, Windows checks the directory where it loaded the program (''private DLL''<ref name="endofdllhell"/>); any directories set by calling the <code>SetDllDirectory()</code> function; the System32, System, and Windows directories; then the current working directory; and finally the directories specified by the PATH [[environment variable]].<ref>{{cite web
 |url         = http://msdn.microsoft.com/en-us/library/ms682586.aspx
 |title       = Dynamic-Link Library Search Order
 |work        = Microsoft Developer Network Library
 |publisher   = Microsoft
 |date        = 2012-03-06
 |accessdate  = 2012-05-20
 |url-status     = live
 |archiveurl  = https://web.archive.org/web/20120509160536/http://msdn.microsoft.com/en-us/library/ms682586.aspx
 |archivedate = 9 May 2012
}}</ref> Applications written for the [[.NET Framework]] framework (since 2002), also check the [[Global Assembly Cache]] as the primary store of shared dll files to remove the issue of [[DLL hell]].

====OpenStep====
[[OpenStep]] used a more flexible system, collecting a list of libraries from a number of known locations (similar to the PATH concept) when the system first starts. Moving libraries around causes no problems at all, although users incur a time cost when first starting the system.

====Unix-like systems====
Most [[Unix-like]] systems have a "search path" specifying file-system [[Directory (computing)|directories]] in which to look for dynamic libraries. Some systems specify the default path in a [[Chart (Flow-Data)]], others hard-code it into the dynamic loader. Some [[executable|executable file]] formats can specify additional directories in which to search for libraries for a particular program. This can usually be overridden with an [[environment variable]], although it is disabled for [[setuid]] and setgid programs, so that a user can't force such a program to run arbitrary code with root permissions. Developers of libraries are encouraged to place their dynamic libraries in places in the default search path. On the downside, this can make installation of new libraries problematic, and these "known" locations quickly become home to an increasing number of library files, making management more complex.

===Dynamic loading===
{{Main|Dynamic loading}}
Dynamic loading, a subset of dynamic linking, involves a dynamically linked library loading and unloading at [[Runtime (program lifecycle phase)|runtime]] on request. Such a request may be made implicitly or explicitly. Implicit requests are made when a compiler or static linker adds library references that include file paths or simply file names.{{cn|date=March 2020}} Explicit requests are made when applications make direct calls to an operating system's API.

Most operating systems that support dynamically linked libraries also support dynamically loading such libraries via a [[Runtime (program lifecycle phase)|run-time]] linker [[Application programming interface|API]]. For instance, [[Microsoft Windows]] uses the API functions <tt>LoadLibrary</tt>, <tt>LoadLibraryEx</tt>, <tt>FreeLibrary</tt> and <tt>GetProcAddress</tt> with [[Microsoft Dynamic Link Library|Microsoft Dynamic Link Libraries]]; [[POSIX]]-based systems, including most UNIX and UNIX-like systems, use <tt>dlopen</tt>, <tt>dlclose</tt> and <tt>dlsym</tt>. Some development systems automate this process.

==Object and class libraries==
Although originally pioneered in the 1960s, dynamic linking did not reach [[operating system]]s used by consumers until the late 1980s. It was generally available in some form in most operating systems by the early 1990s. During this same period, [[object-oriented programming]] (OOP) was becoming a significant part of the programming landscape. OOP with runtime binding requires additional information that traditional libraries don't supply. In addition to the names and entry points of the code located within, they also require a list of the objects they depend on. This is a side-effect of one of OOP's main advantages, inheritance, which means that parts of the complete definition of any method may be in different places. This is more than simply listing that one library requires the services of another: in a true OOP system, the libraries themselves may not be known at [[compile time]], and vary from system to system.

At the same time many developers worked on the idea of multi-tier programs, in which a "display" running on a desktop computer would use the services of a [[Mainframe computer|mainframe]] or [[minicomputer]] for data storage or processing. For instance, a program on a GUI-based computer would send messages to a minicomputer to return small samples of a huge dataset for display. [[Remote procedure call]]s (RPC) already handled these tasks, but there was no standard RPC system.

Soon the majority of the minicomputer and mainframe vendors instigated projects to combine the two, producing an OOP library format that could be used anywhere. Such systems were known as '''object libraries''', or '''distributed objects''', if they supported remote access (not all did). Microsoft's COM is an example of such a system for local use. DCOM, a modified version of COM, supports remote access.

For some time object libraries held the status of the "next big thing" in the programming world. There were a number of efforts to create systems that would run across platforms, and companies competed to try to get developers locked into their own system. Examples include [[IBM]]'s [[System Object Model]] (SOM/DSOM), [[Sun Microsystems]]' [[Distributed Objects Everywhere]] (DOE), [[NeXT]]'s [[Portable Distributed Objects]] (PDO), [[Digital Equipment Corporation|Digital]]'s [[ObjectBroker]], Microsoft's [[Component Object Model]] (COM/DCOM), and any number of [[CORBA]]-based systems.

After the marketing hype cooled, object libraries continued to be used in both object-oriented programming and distributed information systems. '''Class libraries''' are the rough OOP equivalent of older types of code libraries. They contain [[Class (computer science)|classes]], which describe characteristics and define actions ([[Method (computer science)|methods]]) that involve objects. Class libraries are used to create [[Instance (computer science)|instances]], or objects with their characteristics set to specific values. In some OOP languages, like [[Java (programming language)|Java]], the distinction is clear, with the classes often contained in library files (like Java's [[jar (file format)|JAR file format]]) and the instantiated objects residing only in memory (although potentially able to be made [[Persistence (computer science)|persistent]] in separate files). In others, like [[Smalltalk]], the class libraries are merely the starting point for a [[system image]] that includes the entire state of the environment, classes and all instantiated objects.

==Remote libraries==
Another solution to the library issue comes from using completely separate executables (often in some lightweight form) and calling them using a [[remote procedure call]] (RPC) over a network to another computer. This approach maximizes operating system re-use: the code needed to support the library is the same code being used to provide application support and security for every other program. Additionally, such systems do not require the library to exist on the same machine, but can forward the requests over the network.

However, such an approach means that every library call requires a considerable amount of overhead. RPC calls are much more expensive than calling a shared library that has already been loaded on the same machine. This approach is commonly used in a [[Distributed computing|distributed architecture]] that makes heavy use of such remote calls, notably client-server systems and [[application server]]s such as [[Enterprise JavaBean]]s.

==Code generation libraries==
Code generation libraries are high-level [[Application Programming Interface|API]]s that can generate or transform [[byte code]] for [[Java (programming language)|Java]]. They are used by [[aspect-oriented programming]], some data access frameworks, and for testing to generate dynamic proxy objects. They also are used to intercept field access.<ref>{{cite web
 |accessdate  = 2010-03-03
 |publisher   = [[Source Forge]]
 |title       = Code Generation Library
 |url         = https://sourceforge.net/projects/cglib/
 |quote       = Byte Code Generation Library is high level API to generate and transform JAVA byte code. It is used by AOP, testing, data access frameworks to generate dynamic proxy objects and intercept field access.
 |url-status     = live
 |archiveurl  = https://web.archive.org/web/20100112154306/http://sourceforge.net/projects/cglib/
 |archivedate = 12 January 2010
}}</ref>

==File naming==
===Most modern [[Unix-like]] systems===
The system stores <code>libfoo.a</code> and <code>libfoo.so</code> files in directories such as <code>/lib</code>, <code>/usr/lib</code> or <code>/usr/local/lib</code>. The filenames always start with <code>lib</code>, and end with a suffix of <code>.a</code> ([[Ar (file format)|archive]], static library) or of <code>.so</code> (shared object, dynamically linked library). Some systems might have multiple names for the dynamically linked library, with most of the names being names for [[symbolic links]] to the remaining name; those names might include the major version of the library, or the full version number; for example, on some systems <code>libfoo.so.2</code> would be the filename for the second major interface revision of the dynamically linked library <code>libfoo</code>. The <code>.la</code> files sometimes found in the library directories are [[libtool]] archives, not usable by the system as such.

===[[macOS]]===
The system inherits static library conventions from [[BSD]], with the library stored in a <code>.a</code> file, and can use <code>.so</code>-style dynamically linked libraries (with the <code>.dylib</code> suffix instead). Most libraries in macOS, however, consist of "frameworks", placed inside special directories called "[[Bundle (macOS)|bundles]]" which wrap the library's required files and metadata. For example, a framework called <code>MyFramework</code> would be implemented in a bundle called <code>MyFramework.framework</code>, with <code>MyFramework.framework/MyFramework</code> being either the dynamically linked library file or being a symlink to the dynamically linked library file in <code>MyFramework.framework/Versions/Current/MyFramework</code>.

===[[Microsoft Windows]]===
[[Dynamic-link library|Dynamic-link libraries]] usually have the suffix <code>*.DLL</code>,<ref>
{{cite book
 |last1            = Bresnahan
 |first1           = Christine
 |last2            = Blum
 |first2           = Richard
 |title            = LPIC-1 Linux Professional Institute Certification Study Guide: Exam 101-400 and Exam 102-400
 |url              = https://books.google.com/books?id=jf3zBgAAQBAJ
 |publisher        = John Wiley & Sons
 |publication-date = 2015
 |page             = 82
 |isbn             = 9781119021186
 |accessdate       = 2015-09-03
 |quote            = Linux shared libraries are similar to the dynamic link libraries (DLLs) of Windows. Windows DLLs are usually identified by <tt>.dll</tt> filename extensions.
 |date             = 2015-04-27
 |url-status          = live
 |archiveurl       = https://web.archive.org/web/20150924234210/https://books.google.com/books?id=jf3zBgAAQBAJ
 |archivedate      = 24 September 2015
}}
</ref> although other file name extensions may identify specific-purpose dynamically linked libraries, e.g. <code>*.OCX</code> for [[Object Linking and Embedding|OLE]] libraries. The interface revisions are either encoded in the file names, or abstracted away using [[component object model|COM-object]] interfaces. Depending on how they are compiled, <code>*.LIB</code> files can be either static libraries or representations of dynamically linkable libraries needed only during compilation, known as "[[Dynamic-link library#Import libraries|import libraries]]". Unlike in the [[UNIX]] world, which uses different file extensions, when linking against <code>.LIB</code> file in [[Microsoft Windows|Windows]] one must first know if it is a regular static library or an import library. In the latter case, a <code>.DLL</code> file must be present at runtime.

==See also==

* {{annotated link|Code reuse}}
* {{annotated link|Linker (computing)}}
* {{annotated link|Loader (computing)}}
* {{annotated link|Dynamic-link library}}
* {{annotated link|Object file}}
* {{annotated link|Plug-in (computing)|Plug-in}}
* {{annotated link|Prelink|aka=Prebinding}}
* {{annotated link|Static library}}
* {{annotated link|Runtime library}}
* {{annotated link|Visual Component Library}} (VCL)
* {{annotated link|Component Library for Cross Platform}} (CLX)
* {{annotated link|C standard library}}
* {{annotated link|Java Class Library}}
* {{annotated link|Framework Class Library}}
* {{annotated link|Generic programming}} (used by the [[C++ Standard Library]])
* {{annotated link|soname}}
* {{annotated link|Method stub}}

==Notes==
{{reflist|group=NB}}

==References==
{{reflist}}

==Further reading==
* {{cite book |author-last=Levine |author-first=John R. |author-link=John R. Levine |title=Linkers and Loaders |date=2000 |orig-year=October 1999 |edition=1 |publisher=[[Morgan Kaufmann]] |series=The Morgan Kaufmann Series in Software Engineering and Programming |location=San Francisco, USA |isbn=1-55860-496-0 |id={{ISBN|978-1-55860-496-4}} |oclc=42413382 |chapter=Chapter 9: Shared Libraries & Chapter 10: Dynamic Linking and Loading |url=https://www.iecc.com/linker/ |access-date=2020-01-12 |url-status=live |archive-url=https://archive.today/20121205032107/http://www.iecc.com/linker/ |archive-date=2012-12-05}} Code: [https://archive.today/20200114225034/https://linker.iecc.com/code.html][ftp://ftp.iecc.com/pub/linker/] Errata: [https://linker.iecc.com/<!-- https://archive.today/20200114224817/https://linker.iecc.com/ 2020-01-14 -->]
* Article ''[http://www.lurklurk.org/linkers/linkers.html Beginner's Guide to Linkers]'' by David Drysdale
* Article ''[http://objprelink.sourceforge.net/objprelink.html Faster C++ program startups by improving runtime linking efficiency]'' by Léon Bottou and John Ryland
* [http://www.enderunix.org/simsek/articles/libraries.pdf How to Create Program Libraries] by Baris Simsek
* [https://sourceware.org/binutils/docs-2.30/bfd/index.html BFD] - the Binary File Descriptor Library
* [http://lcsd05.cs.tamu.edu 1st Library-Centric Software Design Workshop LCSD'05] at OOPSLA'05
* [https://web.archive.org/web/20060618065018/http://lcsd.cs.tamu.edu/2006/ 2nd Library-Centric Software Design Workshop LCSD'06] at OOPSLA'06
* [http://people.redhat.com/drepper/dsohowto.pdf How to create shared library] by Ulrich Drepper (with much background info)
* [http://www.ibm.com/developerworks/linux/library/l-dynamic-libraries/ Anatomy of Linux dynamic libraries] at IBM.com

{{Application binary interface}}
{{Executables}}
{{Authority control}}

{{DEFAULTSORT:Library (Computing)}}
[[Category:Computer libraries| ]]
[[Category:Operating system technology]]
