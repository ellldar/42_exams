# Maff Revalpha

### Assignment

```
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r7p8.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Mar 29 18:55:14 PDT 2019
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
$> git -C /var/folders/f3/zq_trnzs24n76w9vpwj77fqh0000gp/T/tmpOeryiE/user log --pretty='%H - %an, %ad : %s'
f4eb057df54e0cac21a86e294bb6438ec54d1b75 - Exam 42, Fri Mar 29 18:54:45 2019 -0700 : Finished third exercise!
537a06f4cf773492580f34f09cf41fe781de54b5 - Exam 42, Fri Mar 29 18:34:11 2019 -0700 : Finished second assignment!
ec618e6fefbe4d7d61a19260606d02e58c6a84e7 - Exam 42, Fri Mar 29 18:21:32 2019 -0700 : First assignment complete
 
= Collected files ==========================================
$> ls -lAR /var/folders/f3/zq_trnzs24n76w9vpwj77fqh0000gp/T/tmpOeryiE/user
total 8
-rw-r--r--  1 deepthought  deepthought  771 Mar 29 18:55 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Mar 29 18:55 ft_countdown
drwxr-xr-x  3 deepthought  deepthought  102 Mar 29 18:55 maff_revalpha
drwxr-xr-x  3 deepthought  deepthought  102 Mar 29 18:55 only_z

/var/folders/f3/zq_trnzs24n76w9vpwj77fqh0000gp/T/tmpOeryiE/user/ft_countdown:
total 8
-rw-r--r--  1 deepthought  deepthought  1087 Mar 29 18:55 ft_countdown.c

/var/folders/f3/zq_trnzs24n76w9vpwj77fqh0000gp/T/tmpOeryiE/user/maff_revalpha:
total 8
-rw-r--r--  1 deepthought  deepthought  1396 Mar 29 18:55 maff_revalpha.c

/var/folders/f3/zq_trnzs24n76w9vpwj77fqh0000gp/T/tmpOeryiE/user/only_z:
total 8
-rw-r--r--  1 deepthought  deepthought  1011 Mar 29 18:55 only_z.c
 
= maff_revalpha ================================================================
$> gcc -Wextra -Wall -Werror maff_revalpha.c -o user_exe 

= Test 1 ===================================================
$> ./iyr8lfu5wtyuo0urtgw3328s
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================

```