# Install Git and Node

## 1. System setup

### Windows users

-   Please ensure you have installed any software and security updates for your Windows system.
-   Windows hasn't always been an easy environment for software development. But Microsoft's recent project, [WSL](https://learn.microsoft.com/en-us/windows/wsl/) (Windows Subsystem for Linux), has been a game-changer. If you're running Windows 10 or older, please install WSL - the instructions are below. WSL makes it possible to run Linux programs on your Windows machine. This will make it a lot easier to install and run many of the tools and programs we will work with.
-   If your computer is running a version of Windows that's older than Windows 10, please tell your teacher as soon as possible. There might be some possible alternatives. The following steps of this section apply to people running Windows 10 or later.
-   Before you start installing WSL, please note that WSL needs Windows 10 [build 16215 or later](https://docs.microsoft.com/en-us/windows/wsl/troubleshooting#check-your-build-number), and about 1GB of free disk space.
-   Please follow [these instructions](https://docs.microsoft.com/en-us/windows/wsl/install-win10) to install [WSL](https://docs.microsoft.com/en-us/windows/wsl/install-win10).
-   Note that you will have a choice between installing WSL 1 or WSL 2. If you are attending your course online only, it's best to use WSL 1, because installing WSL 2 may require you to edit your [BIOS](https://en.wikipedia.org/wiki/BIOS) and it might be more difficult to get help if anything goes wrong. However, if you're attending your course in-person, please install WSL 2.
-   We will install a Linux distribution inside WSL. Please install [Ubuntu](https://www.microsoft.com/store/p/ubuntu/9nblggh4msv6). Unfortunately, distributions will not be supported by our staff.
-   The [Windows Terminal](https://www.microsoft.com/en-us/p/windows-terminal-preview/9n0dx20hk701?activetab=pivot%3Aoverviewtab) app offers a great command line experience for WSL users. You can open WSL terminal windows inside it.

### Mac users

-   Please ensure that your system is up-to-date with software and security updates.

### Linux users

-   Please ensure that your system is up-to-date with software and security updates.

## 2. Install Git

### Mac

If you are using a relatively recent version of Mac's operating system, it is quite likely that you already have Git installed. First, open the Terminal (you can do this by typing command + spacebar to open spotlight search and then typing _terminal_ to find the program). In the terminal, type `git` and press `<Enter>`. If you see a list of commands, Git is installed. If Git is not installed you will be prompted to install it.

You can also install Git from [http://git-scm.com/download/mac](http://git-scm.com/download/mac).

### Windows

#### If you are running WSL/Ubuntu:

-   Start bash by running cmd.exe (`Start` > `Run` > type `cmd` and press `<Enter>`.
-   In the terminal window, type `bash` and press `<Enter>`.
-   Then type

```bash
sudo apt-get install git
```

## 3. Configure Git

When you've made sure Git is installed, you should set it up correctly by following [these instructions](https://git-scm.com/book/en/v2/Getting-Started-First-Time-Git-Setup#Your-Identity). The important commands to run are the following.

```bash
git config --global user.name "YOUR NAME"
```

```bash
git config --global user.email YOUREMAIL@example.com
```

```bash
git config --global core.editor nano
```

Nano is a command line text editor that is easier to use than some of the alternatives.

## 4. Set up GitHub authentication

When you use Git with GitHub, you need to authenticate yourself so that GitHub can be sure that you are authorized to do whatever it is you are doing. To handle authentication, it is recommended that you use [SSH to connect to GitHub](https://spiced.space/okra/github_ssh).

## 5. Install Oh My Zsh!

-   The default terminal, bash, is functional but old. There are a few fresher alternatives with some great advantages, including zsh. It features a more colorful and informative prompt, and some useful shortcuts and other innovations. We recommend installing [Oh My Zsh!](https://ohmyz.sh/), a framework for managing your terminal. It comes with a lot of powerful plugins, and is easy to install.
-   Please follow the instructions [here](https://ohmyz.sh/#install) to install Oh My Zsh! As always, if you run into any issues or see unexpected output, please reach out to a teacher.

## 6. Install Node

### All Operating Systems

-   Our recommended way to install Node is through [nvm](https://github.com/nvm-sh/nvm#installation-and-update) (Node version manager), which allows you to install multiple versions of Node and switch between them. Please follow the link to install nvm.
-   If for some reason you don't want to use `nvm`, please follow the instructions for your operating system below.

### Mac

-   Go to [nodejs.org](https://nodejs.org/). Download and install the latest LTS (Long Term Support) version of Node. Installation should be quite straightforward.

### Windows/WSL

To install Node in Ubuntu, you can type the following:

```bash
sudo apt install nodejs
```

```bash
sudo apt install npm
```

## 7. Install Visual Studio Code

Microsoft's [Visual Studio Code](https://code.visualstudio.com/download) is now the official code editor for this course. We recommend you use it for all your coding and text-editing needs.

After you have downloaded and installed VS Code, please install the following extensions.

### ESLint

A linter is a program that analyzes your code and identifies potential errors and violations of stylistic rules. [ESLint](https://eslint.org/) is a linter for Javascript that integrates with VS Code via an [extension](https://marketplace.visualstudio.com/items?itemName=dbaeumer.vscode-eslint). The combination of ESLint and the extension will allow you to see problems in the code you write as you are writing it. To install, follow these steps:

1.  Install ESLint on your computer by typing the following on the command line:
    
    ```bash
     npm install -g eslint
    ```
    
    **Note to Windows users**: Since VS Code is installed in Windows, you must install ESLint in Windows to integrate it with VS Code. If you are using PowerShell or CMD and have already typed `bash` or `wsl`, you can switch back to Windows by typing `exit`. You can then do the installation and when it completes switch back to Bash.
    
    **Note to Mac users**: When errors are encountered during ESLint installation, permissions are usually the reason. If an error occurs, you should try running the command as the super user.
    
    ```bash
     sudo npm install -g eslint
    ```
    
    You will be prompted for your Mac password.
    
2.  Install the ESLint [extension](https://marketplace.visualstudio.com/items?itemName=dbaeumer.vscode-eslint) by going to [this URL](https://marketplace.visualstudio.com/items?itemName=dbaeumer.vscode-eslint) and clicking the Install button.
    

### Prettier

[Prettier](https://prettier.io/) is a code formatter that will automatically make your code more readable for you and other interested human beings.

To install [the Prettier extension](https://marketplace.visualstudio.com/items?itemName=esbenp.prettier-vscode), go to [this URL](https://marketplace.visualstudio.com/items?itemName=esbenp.prettier-vscode) and click the Install button.

Once the extension is installed, some configuration is required. You will have to open VS Code's settings using the menu bar at the top of the window (Code --> Preferences --> Settings on Mac, File --> Preferences --> Settings on Windows). You will see a search field into which you can type the names of settings you wish to set. The settings you should set are:

-   Default Formatter - choose "esbenp.prettier-vscode" from the drop down menu
-   Format On Save - the checkbox should be checked
-   Format on Paste - the checkbox should be checked
-   Prettier: Tab Width - type "4" in the text field
-   Tab Size - type "4" in the text field

---

## ⚠️ Warning for WSL2 users

When you are entering your bash shell, it is very likely that by default you will land on a path that looks like `/mnt/c/Users/[username]` (type `pwd` to check). While placing your code somewhere here will work mostly fine, it can considerably slow down your project and sometimes causes permission issues down the line. Ideally you should place all your projects somewhere under the path `/home/[username]` - you could do this with the following commands:

```sh
cd           # Move to /home/[username]
ls           # Check the current content
mkdir dev    # Create a dev directory
cd dev       # Move into your dev directory, do all your work here
```

If you'd prefer to see your directory in the file explorer you could run:

```sh
explorer.exe .
```