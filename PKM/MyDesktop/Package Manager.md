## Package manager

tags: #dependencies #package_manager #npm 

A package manager is a system that will manage my project dependencies.
The package manager will provide a method to install new dependencies, manage where packages are stored on my file system, and offer capabilities for me to publish my own packages.

 > In theory I may not need a package manager and I could manually download and store my project dependencies, but a package manager will seamlessly handle installing and uninstalling packages.

Without **package manager**(like **npm** or **yarn**), I'd have to manually handle:

 1.   Finding all the correct package JavaScript files.
 2.  Checking them to make sure they don't have any known vulnerabilities.
3.   Downloading them and putting them in the correct locations in my project.
4.  Writing the code to include the package(s) in my application (this tends to be done using [JavaScript modules](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Modules), another subject that is worth reading up on and understanding!!!!).
5.   Doing the same thing for all of the packages' sub-dependencies, of which there could be tens, or hundreds.
-   Removing all the files again if I want to remove the packages.