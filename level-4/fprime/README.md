# BRAINFUCK

### Assignment

```
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there's one, will be valid.
```

### Examples

```
$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
```

### Traceroute
```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r2p1.42.us.org
Darwin 17.7.0 x86_64
$> date
Fri Apr 12 21:50:59 PDT 2019
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 10.0.0 (clang-1000.10.44.4)
Target: x86_64-apple-darwin17.7.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 10.0.0 (clang-1000.10.44.4)
Target: x86_64-apple-darwin17.7.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2019/piscine-c-exam02/exam_20190413/esupatae

= Git history ==================================================================
$> git -C /var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user log --pretty='%H - %an, %ad : %s'
af54b9f7c0f87d246db751ffd2ba3976d3d9b621 - Exam 42, Fri Apr 12 21:50:49 2019 -0700 : Level 4: fprime
e4dbaaaed16d0bebfab33b961976c574c79da662 - Exam 42, Fri Apr 12 21:15:38 2019 -0700 : Level 4: ft_list_foreach
fd1cf173d84892aba3f423dd05073ccecc4872aa - Exam 42, Fri Apr 12 20:43:17 2019 -0700 : Level 4: sort_list
e808c2e075142838b7b5ce1296fe5d4ec39d3f34 - Exam 42, Fri Apr 12 19:38:58 2019 -0700 : Level 3: expand_str
1c367f78a40d577937b1c92cfe207356a9ee1deb - Exam 42, Fri Apr 12 19:08:21 2019 -0700 : Level 2: ft_strdup
bfd2038c15ca21665208ecdd8ce4219b5946a9d2 - Exam 42, Fri Apr 12 18:42:42 2019 -0700 : Level 1: first_word
5e92b2ecc7623fe6a189cb70e0add890c9b96426 - Exam 42, Fri Apr 12 18:13:50 2019 -0700 : Level 0: aff_first_param
 
= Collected files ==========================================
$> ls -lAR /var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user
total 8
-rw-r--r--  1 deepthought  deepthought  1816 Apr 12 21:51 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 aff_first_param
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 expand_str
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 first_word
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 fprime
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 ft_list_foreach
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 ft_strdup
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:51 sort_list

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/aff_first_param:
total 8
-rw-r--r--  1 deepthought  deepthought  1224 Apr 12 21:51 aff_first_param.c

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/expand_str:
total 8
-rw-r--r--  1 deepthought  deepthought  1358 Apr 12 21:51 expand_str.c

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1242 Apr 12 21:51 first_word.c

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/fprime:
total 8
-rw-r--r--  1 deepthought  deepthought  1494 Apr 12 21:51 fprime.c

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/ft_list_foreach:
total 8
-rw-r--r--  1 deepthought  deepthought  1061 Apr 12 21:51 ft_list_foreach.c

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/ft_strdup:
total 8
-rw-r--r--  1 deepthought  deepthought  1239 Apr 12 21:51 ft_strdup.c

/var/folders/pm/pv9vk67n0t7bz61r9g79hypc0000gp/T/tmp2BKSFq/user/sort_list:
total 8
-rw-r--r--  1 deepthought  deepthought  1427 Apr 12 21:51 sort_list.c
 
= fprime =======================================================================
$> gcc -Wextra -Wall -Werror fprime.c -o user_exe 

= Test 1 ===================================================
$> ./68jhuuhvb377jxgv1nq88fr5 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./p1u0nckg9uajk64lvmt20nuv "1" "2" "3" "4" "5" "6"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./ogqcz6keaktzmgmku6ibh1a9 161
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./8j6c4sidkcfl41quufrjaibe 125
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./1dy1zcoihzum29bmyzcf45pz 14
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./fvk57t359pzh2yrhrxjfp7vh 37
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./nrtc8019ly966aj4w3liqvvu 118
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./8t3onlr9aimj63qcwoicpi25 147
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./vh00o9kl3z18umhzwkc5ujra 100
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./nwaomte29hir3kkcyaq8p0ln 198
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./qnvjxl28m8z6v5lbft6cal3j 1420323
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./1mutsahv5lgsc71je60osp65 1727015
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./f0xujzkj2j9ebfa0azrfm9i0 1989844
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./w6ptkee8wtp8hge9q8vm98qo 1438602
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./1m1kvp4npc7qb7gkz4mwokz4 1345890
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```