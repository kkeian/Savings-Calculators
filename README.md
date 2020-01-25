# Savings Account Interest Rate Calculators

Useful C programs for calculating the interest rate over a ten year period at major banking institutions.
Trademarks belong to their respective owners and do not imply legal advice or endorsement of any sort.

The intent of this project is to provide clarity for the general public on how their savings multiply over
an extended period of time through interest compounding in savings accounts.

The bank fees for maintaining an open savings account are not included in the provided calculators
and must be taken into account when using these calculators

These programs are provided as is, under GNU General Public License version 2.0.

### Prerequisites

You must have a C compiler installed on your computer in order to compile these programs and run them.

On Linux
```
gcc -v
```
displays the version of GNU Compiler Collection currently installed on your system.
If an error displays, you must install it via your distribution's package manager.

For Windows users:
You may use the Windows Subsystem for Linux (WSL) which is provided on the latest Windows 10 versions.
If you are using WSL, you can follow the Linux version of the steps below.

OR

You may use the Linux terminal emulator Cygwin by downloading and installing it
via: https://sourceware.org/cygwin/
Once you have Cygwin installed, you can follow the Linux version of the following steps.

If you desire to alter the source code of these programs you must have a text editor with which to open
the source code files.

For Linux users:
Vi and Vim  and Emacs

```
vi <source_code.c>
```
OR
```
vim <source_code.c>
```
OR
```
emacs <source_code.c>
```

For Windows users:
Notepad is pre-installed on Windows systems and works for basic text editing.
Notepad++ is a feature-rich version of Notepad that allows for more efficient editing of source code files.

You can obtain notepad++ through the following link: https://notepad-plus-plus.org/downloads/

## Getting Started

```
mkdir <dir_name>
```

```
git init
```

```
git clone  https://github.com/kkeian/c_programs
```

To run one of the programs:
```
cd c_programs
gcc <bank_name>_standard_savings_account_interest_calculator.c -o <name of program>
./<name of program>
```


## Built using

GNU Compiler Collection: https://gcc.gnu.org/
Windows Subsystem for Linux (WSL): https://docs.microsoft.com/en-us/windows/wsl/install-win10
Xubuntu: https://xubuntu.org/

## Authors

* **Keian Kaserman**

## License

This project is licensed under the GNU Generl Public License, version 2 - see the [LICENSE.md](LICENSE.md) file for details
https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html
