# Only Z

### Assignment

```
Assignment name  : only_z
Expected files   : only_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'z' character on the standard output.
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r9p17.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Mar 29 18:21:54 PDT 2019
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.0.0 (clang-900.0.39.2)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 9.0.0 (clang-900.0.39.2)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2019/piscine-c-exam00/exam_20190330/esupatae

= Git history ==================================================================
$> git -C /var/folders/mn/ptwj92cd52j46yxg0sj3xkq40000gp/T/tmp1QzRUQ/user log --pretty='%H - %an, %ad : %s'
ec618e6fefbe4d7d61a19260606d02e58c6a84e7 - Exam 42, Fri Mar 29 18:21:32 2019 -0700 : First assignment complete

= Collected files ==========================================
$> ls -lAR /var/folders/mn/ptwj92cd52j46yxg0sj3xkq40000gp/T/tmp1QzRUQ/user
total 8
-rw-r--r--  1 deepthought  deepthought  239 Mar 29 18:21 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Mar 29 18:21 only_z

/var/folders/mn/ptwj92cd52j46yxg0sj3xkq40000gp/T/tmp1QzRUQ/user/only_z:
total 8
-rw-r--r--  1 deepthought  deepthought  1011 Mar 29 18:21 only_z.c

= only_z =======================================================================
$> gcc -Wextra -Wall -Werror only_z.c -o user_exe

= Test 1 ===================================================
$> ./lqtjx6ddho8yw6wiwrj6g8mg
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```