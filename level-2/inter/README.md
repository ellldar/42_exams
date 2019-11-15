# INTER

### Assignment

```
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
```

### Example

```bash
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "nothing" "This sentence hides nothing" | cat -e
nothig$
$>./inter | cat -e
$
```

### Traceroute

```bash
= Host-specific information ====================================================
$> hostname; uname -msr
e1z3r3p19.42.us.org
Darwin 17.4.0 x86_64
$> date
Tue Oct 15 10:18:24 PDT 2019
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 9.1.0 (clang-902.0.39.1)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 9.1.0 (clang-902.0.39.1)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2019/c-exam-alone-in-the-dark-beginner/exam_20191015/esupatae

= Git history ==================================================================
$> git -C /var/folders/85/m1s9ln15165df2cxxxflncrh0000gp/T/tmpagZ_VO/user log --pretty='%H - %an, %ad : %s'
225b6ba6d090a009065751a956423963cef57675 - Exam 42, Tue Oct 15 10:17:11 2019 -0700 : inter.c
eb983108e4c3d35c5dbb245c4daa0b1cd031638e - Exam 42, Tue Oct 15 09:15:15 2019 -0700 : rev_print.c
0bb3d24555fd5b01348374fb6738e204237655c8 - Exam 42, Tue Oct 15 09:04:37 2019 -0700 : only_a.c
 
= Collected files ==========================================
$> ls -lAR /var/folders/85/m1s9ln15165df2cxxxflncrh0000gp/T/tmpagZ_VO/user
total 8
-rw-r--r--  1 deepthought  deepthought  727 Oct 15 10:18 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Oct 15 10:18 inter
drwxr-xr-x  3 deepthought  deepthought  102 Oct 15 10:18 only_a
drwxr-xr-x  3 deepthought  deepthought  102 Oct 15 10:18 rev_print

/var/folders/85/m1s9ln15165df2cxxxflncrh0000gp/T/tmpagZ_VO/user/inter:
total 8
-rw-r--r--  1 deepthought  deepthought  1588 Oct 15 10:18 inter.c

/var/folders/85/m1s9ln15165df2cxxxflncrh0000gp/T/tmpagZ_VO/user/only_a:
total 8
-rw-r--r--  1 deepthought  deepthought  963 Oct 15 10:18 only_a.c

/var/folders/85/m1s9ln15165df2cxxxflncrh0000gp/T/tmpagZ_VO/user/rev_print:
total 8
-rw-r--r--  1 deepthought  deepthought  1293 Oct 15 10:18 rev_print.c
 
= inter ========================================================================
$> gcc -Wextra -Wall -Werror inter.c -o user_exe 

= Test 1 ===================================================
$> ./zmjmatylx6kjg5rdlwrl80am 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./vy3gga2c999c4d4f9n4oiw2m "salut a tous tout le monde"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./topgvz7uhi7hftymwvvcdxaz "salut" "a" "tous" "tout" "le" "monde"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./jujffi60c0al52e8rvg7i8bb "llo" "helllo"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./xard7ty59dyqybj4iwlv4hpf "BjL1qr3fCu5" "IEkw5r"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./wsjgwd9bc2u6uwh8u7xkv905 "69yZRjJ12xVXMN" "9RJ2xM"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./6rhk9sxu1ed9tbxfa6uhow9y "NFqBUpCiTOuza" "NvlSVQOFLjxtb4D7"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./lkgv1trkg2eo1g2l1rcqoof3 "WpV4xdCnkojc" "Vdnkj"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./ex1qy9ap7fxfnuwjc2nl2r29 "kEvl" "vl"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./rbbla03a685yorzyj3chb6n0 "JRkpmGu4NIbZ" "RmuI"
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./hgbwmdvucx2bao8l5dee919h "KwC9fEqHSm2Vt" "2Dz"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./3ysfh91wbghg1dsiz71byfvs "6S2B7piqhsy9crb" "TdarZt"
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./5dl448pj6zwv71y4bbp48iwg "KdizHN1hZnkw" "2PkqRhDEBJjmIaWn3"
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./xbp062e9sbsl1ktzu3wo63z7 "xZEkwvq" "chgUL8"
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./k7voe8im5odijhplvy1t77kt "ZoNuBEmGrQa7e" "pWHEsLhY9P5TNo"
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./dv4a5rfsa0ckx51yajl7ee0w "yD4hieqOGPuYEV1" "i9FtKkI17"
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./iap9yby64mwa51jcjeppgfv5 "aHTzXtjuAeMq9E" "KHIqe0zgU4"
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./cmkzfn5q0kh08z4mx1bae96o "F6YR9pZWC3" "FR9W"
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./9vp8vybxq22yoenjsel16jwt "dzek7Ju" "dk7"
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./cc2qfu7d8q08f0tltd1nq6nd "DLyG" "OUZrFSHfE4"
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```