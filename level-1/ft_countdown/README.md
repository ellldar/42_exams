# FT_COUNTDOWN

### Assignment

```
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r2p8.42.us.org
Darwin 17.2.0 x86_64
$> date
Fri Mar 29 18:34:21 PDT 2019
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.0.0 (clang-900.0.38)
Target: x86_64-apple-darwin17.2.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 9.0.0 (clang-900.0.38)
Target: x86_64-apple-darwin17.2.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2019/piscine-c-exam00/exam_20190330/esupatae

= Git history ==================================================================
$> git -C /var/folders/m6/hzkyk2pd2hz2yycpytzs5pv80000gp/T/tmpcqL9NE/user log --pretty='%H - %an, %ad : %s'
537a06f4cf773492580f34f09cf41fe781de54b5 - Exam 42, Fri Mar 29 18:34:11 2019 -0700 : Finished second assignment!
ec618e6fefbe4d7d61a19260606d02e58c6a84e7 - Exam 42, Fri Mar 29 18:21:32 2019 -0700 : First assignment complete
 
= Collected files ==========================================
$> ls -lAR /var/folders/m6/hzkyk2pd2hz2yycpytzs5pv80000gp/T/tmpcqL9NE/user
total 8
-rw-r--r--  1 deepthought  deepthought  500 Mar 29 18:34 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Mar 29 18:34 ft_countdown
drwxr-xr-x  3 deepthought  deepthought  102 Mar 29 18:34 only_z

/var/folders/m6/hzkyk2pd2hz2yycpytzs5pv80000gp/T/tmpcqL9NE/user/ft_countdown:
total 8
-rw-r--r--  1 deepthought  deepthought  1087 Mar 29 18:34 ft_countdown.c

/var/folders/m6/hzkyk2pd2hz2yycpytzs5pv80000gp/T/tmpcqL9NE/user/only_z:
total 8
-rw-r--r--  1 deepthought  deepthought  1011 Mar 29 18:34 only_z.c
 
= ft_countdown =================================================================
$> gcc -Wextra -Wall -Werror ft_countdown.c -o user_exe 

= Test 1 ===================================================
$> ./ljs11iieyrqyf6lv504w3sec
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```