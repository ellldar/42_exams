# FT_ITOA

### Assignment

```
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r9p5.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr  5 21:54:03 PDT 2019
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
Repository URL: auto-exam/2019/piscine-c-exam01/exam_20190406/esupatae

= Git history ==================================================================
$> git -C /var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user log --pretty='%H - %an, %ad : %s'
8da41a62b7a943609131aadc42b424d3dcce08cc - Exam 42, Fri Apr 5 21:53:50 2019 -0700 : ft_itoa attempt
c7e17085354a3ee6378170927b1d39fbfdb74eed - Exam 42, Fri Apr 5 20:46:27 2019 -0700 : tab_mult attempt
5b572f2a38b50b4ba6185a0dc7b8597c8526de57 - Exam 42, Fri Apr 5 19:43:28 2019 -0700 : last_word attempt
34a290df0f07c22adf7797448407c4d7f20876cb - Exam 42, Fri Apr 5 19:09:45 2019 -0700 : rot_13 attempt
d9add4ed59eb17a743fe97e1b78f7d365d6fd9d3 - Exam 42, Fri Apr 5 18:13:48 2019 -0700 : only_z - attempt #2
b2c4ca184e76bb893a5c4a2b4543c327275fc224 - Exam 42, Fri Apr 5 18:11:30 2019 -0700 : only_z
 
= Collected files ==========================================
$> ls -lAR /var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user
total 8
-rw-r--r--  1 deepthought  deepthought  1487 Apr  5 21:54 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought   102 Apr  5 21:54 ft_itoa
drwxr-xr-x  3 deepthought  deepthought   102 Apr  5 21:54 last_word
drwxr-xr-x  3 deepthought  deepthought   102 Apr  5 21:54 only_z
drwxr-xr-x  3 deepthought  deepthought   102 Apr  5 21:54 rot_13
drwxr-xr-x  3 deepthought  deepthought   102 Apr  5 21:54 tab_mult

/var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user/ft_itoa:
total 8
-rw-r--r--  1 deepthought  deepthought  1558 Apr  5 21:54 ft_itoa.c

/var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user/last_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1515 Apr  5 21:54 last_word.c

/var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user/only_z:
total 8
-rw-r--r--  1 deepthought  deepthought  1012 Apr  5 21:54 only_z.c

/var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user/rot_13:
total 8
-rw-r--r--  1 deepthought  deepthought  1439 Apr  5 21:54 rot_13.c

/var/folders/4l/h6p7h38j12z6tddwpc80_w280000gp/T/tmpeRscJ5/user/tab_mult:
total 8
-rw-r--r--  1 deepthought  deepthought  1802 Apr  5 21:54 tab_mult.c
 
= ft_itoa ======================================================================
$> gcc -Wextra -Wall -Werror main.c ft_itoa.c -o user_exe 

= Test 1 ===================================================
$> ./3ylw3t1gajb9rkbmn36hsuoa 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./nsaylcqrrymorabpeuzt2y8n "1" "2" "3" "4" "5" "6"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./60ero3ipya49b7agy86biyy2 0
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./3u3o65jy094ierv1orzassom 2147483647
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./2pr9bx2wzrf7er4lkf66vuis -2147483648
$> diff -U 3 user_output_test5 test5.output | cat -e
--- user_output_test5	2019-04-05 21:54:06.000000000 -0700$
+++ test5.output	2019-04-05 21:54:05.000000000 -0700$
@@ -1 +1 @@$
--($
+-2147483648$

Diff KO :(
Grade: 0

= Final grade: 0 ===============================================================
```