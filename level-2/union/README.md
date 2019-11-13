# UNION

### Assignment

```
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
```

### Example

```
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r5p2.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr 19 10:56:25 PDT 2019
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
$> git -C /var/folders/bx/x0nqcbsd2cxchx5wr4sxzqhr0000gp/T/tmpxanTIf/user log --pretty='%H - %an, %ad : %s'
87d2ef347bc84e8278b4b7f99948902b69eae17a - Exam 42, Fri Apr 19 10:56:12 2019 -0700 : Level 2: union
e7e05f3e9a40d6c31cd74871657ffd1eb66b0648 - Exam 42, Fri Apr 19 10:27:35 2019 -0700 : Level 1: first_word
47197b9f062adf2a67d7c32d6610f51546c23dc7 - Exam 42, Fri Apr 19 10:09:07 2019 -0700 : Level 0: only_a
 
= Collected files ==========================================
$> ls -lAR /var/folders/bx/x0nqcbsd2cxchx5wr4sxzqhr0000gp/T/tmpxanTIf/user
total 8
-rw-r--r--  1 deepthought  deepthought  738 Apr 19 10:56 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Apr 19 10:56 first_word
drwxr-xr-x  3 deepthought  deepthought  102 Apr 19 10:56 only_a
drwxr-xr-x  3 deepthought  deepthought  102 Apr 19 10:56 union

/var/folders/bx/x0nqcbsd2cxchx5wr4sxzqhr0000gp/T/tmpxanTIf/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1243 Apr 19 10:56 first_word.c

/var/folders/bx/x0nqcbsd2cxchx5wr4sxzqhr0000gp/T/tmpxanTIf/user/only_a:
total 8
-rw-r--r--  1 deepthought  deepthought  965 Apr 19 10:56 only_a.c

/var/folders/bx/x0nqcbsd2cxchx5wr4sxzqhr0000gp/T/tmpxanTIf/user/union:
total 8
-rw-r--r--  1 deepthought  deepthought  1451 Apr 19 10:56 union.c
 
= union ========================================================================
$> gcc -Wextra -Wall -Werror union.c -o user_exe 

= Test 1 ===================================================
$> ./ll8fo2or8nur9rjzm7rvfroj 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./p8d4nnv7cz64230qqqeiip5n "	 " " 		  "
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./qizz1icadpt11buu1fazd2ay "ta2"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./ig1c9c5vczhnevhgeqmlzlvw "oAp2t8v3baHTKCdc" "QxeOzymBs8gEKrkV"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./0hhal7q95bi6o66heepnzhgz "6yHK" "IysKzCxB51o"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./933t2qz6azmuxyn0id67sbmd "FcuxSjGHICYNV" "SUnY3uaeVXOEL8s"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./avnqhvg1se07f1n3u7vayrc1 "g4ZfbGk021W" "XavAQK1cd0GT"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./hgt4rznc6k1ku3elj6fohufe "HK5Aga" "De6HNxFpr7st"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./43qv06cx43kqori0nikzglzn "nJqj4uP" "1rBWvg93AJt4H"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./yhiwkar5jdm6ypk1d5tub56j "iBrH7Xg41Npou" "PxJ7Rhgq04UrGbaTm"
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./hflz27fl5611zi7ei8kdwwfn "Wg1kCiznbwOcTdx" "pZQNsRIFy"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./mbo82166wukajni2ucj5xov4 "w30mfVpWJ" "wcUW5JvdRT9ElKMgm"
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./v77cjc66u0yeh2l991yiw5oq "aAoiMb6QJDYT" "MLr"
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./fwv3ciuawdnffepwilxoieye "bnMzLW3AVy8vk" "zrpbD"
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./nhh4zyvy2rjbkpddjev8e499 "nsKVWewvLzDkl57F6" "6dP2jV0eNkxuYl"
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./2e3z4cpb6m3fraxd5dfhua3i "cGDyYjr" "JTF"
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./kuk4k9ms1lrofyi2gdffnx27 "yUOXujwdi" "xlTVD"
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./0qtyawg515t0cejgte5w6yv8 "IoTE7" "CWGnY7J1U5fwZv6"
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./tbsxh2wq1fw6b3m1h7paz26e "7YbxLg3M4" "jPLzS7YEt"
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./ioxrwkjlnivixgtj9749zeup "eQESoNZOpVRu" "RLbBEZ"
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```