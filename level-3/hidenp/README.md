# HIDENP

### Assignment

```
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.
```

### Example

```
$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r3p47.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr 19 11:28:48 PDT 2019
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
Repository URL: auto-exam/2019/piscine-c-exam-final/exam_20190419/esupatae

= Git history ==================================================================
$> git -C /var/folders/0q/pd75szs50ml9xjb4qg2g54mc0000gp/T/tmptDzvdz/user log --pretty='%H - %an, %ad : %s'
56945ce668bfafce1949afa066c73adf581a01ed - Exam 42, Fri Apr 19 11:26:34 2019 -0700 : Level 3: hidenp - account for repeat letters in string 1
6d17a2c2eb989d84e097c600790a452e15297194 - Exam 42, Fri Apr 19 11:21:00 2019 -0700 : Level 3: hidenp
87d2ef347bc84e8278b4b7f99948902b69eae17a - Exam 42, Fri Apr 19 10:56:12 2019 -0700 : Level 2: union
e7e05f3e9a40d6c31cd74871657ffd1eb66b0648 - Exam 42, Fri Apr 19 10:27:35 2019 -0700 : Level 1: first_word
47197b9f062adf2a67d7c32d6610f51546c23dc7 - Exam 42, Fri Apr 19 10:09:07 2019 -0700 : Level 0: only_a
 
= Collected files ==========================================
$> ls -lAR /var/folders/0q/pd75szs50ml9xjb4qg2g54mc0000gp/T/tmptDzvdz/user
total 8
-rw-r--r--  1 deepthought  deepthought  1262 Apr 19 11:28 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought   102 Apr 19 11:28 first_word
drwxr-xr-x  3 deepthought  deepthought   102 Apr 19 11:28 hidenp
drwxr-xr-x  3 deepthought  deepthought   102 Apr 19 11:28 only_a
drwxr-xr-x  3 deepthought  deepthought   102 Apr 19 11:28 union

/var/folders/0q/pd75szs50ml9xjb4qg2g54mc0000gp/T/tmptDzvdz/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1243 Apr 19 11:28 first_word.c

/var/folders/0q/pd75szs50ml9xjb4qg2g54mc0000gp/T/tmptDzvdz/user/hidenp:
total 8
-rw-r--r--  1 deepthought  deepthought  1442 Apr 19 11:28 hidenp.c

/var/folders/0q/pd75szs50ml9xjb4qg2g54mc0000gp/T/tmptDzvdz/user/only_a:
total 8
-rw-r--r--  1 deepthought  deepthought  965 Apr 19 11:28 only_a.c

/var/folders/0q/pd75szs50ml9xjb4qg2g54mc0000gp/T/tmptDzvdz/user/union:
total 8
-rw-r--r--  1 deepthought  deepthought  1451 Apr 19 11:28 union.c
 
= hidenp =======================================================================
$> gcc -Wextra -Wall -Werror hidenp.c -o user_exe 

= Test 1 ===================================================
$> ./lerodjowjz0p5yx9b8riat39 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./stzvkct30hrdzw924zy0bojl "salut a tous tout le monde"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./0ufz9032dc9c7gqa6pbib5el "salut" "a" "tous" "tout" "le" "monde"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./k4j8keum1599p7kybytsi9yi "llo" "helllo"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./c0ihs473h4nmi8tb64h35iyp "6CFktXyzeloj1Of" "KaiNALbGxy"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./0dyjrltfrzb5vxuij1r51ikb "F13zu" "0LFCd138rzu4"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./cblg9a4ir70nwawpoh6tift2 "YCN3GV0j" "H0DechkAb"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./ubcrno45tc2jilwgs0dnzdew "NPnm79wBEK" "F0ANDsP"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./z1mifjvipr5uqtxs76hfm9le "q" "9Hq"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./fddjpxcq9393yxi2nsl9ltks "Vv8FzpiDa" "1aB0ZgeQjK2JFEu"
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./tz8h076g4v310evznrleefms "8RAyr7" "ESc3vbzKPf"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./5xk0vq1exfgh6m9k9gc9tno6 "BohAFQR9dNry" "nDZHc2V"
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./9ez7vg2cgkj1gb0e1wr8ouc6 "HNtJ" "HzNtbJX5"
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./87p117665zvyo4rdxxg7begm "La6n" "kr2ahJGUMsV"
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./etpvwe2mc4mdnlptwtr2w9i5 "c8skG" "N7cI8TCsYEkRmG"
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./isn3odjkh1a30yov9u22lr8h "b9zSC" "eUb9NzSBEC"
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./xmrbcynm4owcui7idcgwi8v0 "VMiR" "yuOXC6gYL7"
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./1a0b7j2p8emuqabcewatmfzl "Qm" "WvQm"
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./me3pof39ss97d558lce2bfo2 "MPb" "m2MnP1bF"
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./azpgullfg6qt1rq9y6pmbcx8 "rxtT" "frklxtA9T3"
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```