# FT_STRDUP

### Assignment

```
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r9p23.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr 12 19:09:17 PDT 2019
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
Repository URL: auto-exam/2019/piscine-c-exam02/exam_20190413/esupatae

= Git history ==================================================================
$> git -C /var/folders/b_/6jlmsc4j299b738yvxs1sx4h0000gp/T/tmp3WXGQU/user log --pretty='%H - %an, %ad : %s'
1c367f78a40d577937b1c92cfe207356a9ee1deb - Exam 42, Fri Apr 12 19:08:21 2019 -0700 : Level 2: ft_strdup
bfd2038c15ca21665208ecdd8ce4219b5946a9d2 - Exam 42, Fri Apr 12 18:42:42 2019 -0700 : Level 1: first_word
5e92b2ecc7623fe6a189cb70e0add890c9b96426 - Exam 42, Fri Apr 12 18:13:50 2019 -0700 : Level 0: aff_first_param
 
= Collected files ==========================================
$> ls -lAR /var/folders/b_/6jlmsc4j299b738yvxs1sx4h0000gp/T/tmp3WXGQU/user
total 8
-rw-r--r--  1 deepthought  deepthought  779 Apr 12 19:09 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Apr 12 19:09 aff_first_param
drwxr-xr-x  3 deepthought  deepthought  102 Apr 12 19:09 first_word
drwxr-xr-x  3 deepthought  deepthought  102 Apr 12 19:09 ft_strdup

/var/folders/b_/6jlmsc4j299b738yvxs1sx4h0000gp/T/tmp3WXGQU/user/aff_first_param:
total 8
-rw-r--r--  1 deepthought  deepthought  1224 Apr 12 19:09 aff_first_param.c

/var/folders/b_/6jlmsc4j299b738yvxs1sx4h0000gp/T/tmp3WXGQU/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1242 Apr 12 19:09 first_word.c

/var/folders/b_/6jlmsc4j299b738yvxs1sx4h0000gp/T/tmp3WXGQU/user/ft_strdup:
total 8
-rw-r--r--  1 deepthought  deepthought  1239 Apr 12 19:09 ft_strdup.c
 
= ft_strdup ====================================================================
$> gcc -Wextra -Wall -Werror main.c ft_strdup.c -o user_exe 

= Test 1 ===================================================
$> ./qcznt9i0c17fdllmia582m73 ""
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./1n5f1bevy7s17r776y8e5rcz "bi7fHeAIZjQPyUOv"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./14hwc7p32q5qyh167o37bo5l "e5NO"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./wephs0viqxeyvvpig9u3efyz "thYOZNv"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./xdg7b7iu0tgnhfoqg3157wpy "NAgMbjx"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./0hbaqnj386gdohf2nl11bdgd "3sm9k PN9h5bgLrCMT f2Vcnh5tHC13d Ng2G7k01mCrLw65 FoAUsIiSvGO UCbS8p4JW1e YGwZNRMWc0Xtdo ugKqBQ0CHMlEd1 Dgv 1V5Fnq4txECS"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./7ae9geac8lkkqjp9wyfio4r7 "w1S09Os SIdEq 1hbKpF G3tUqIYodyL W3I4FzGlDMNwZtmK0 yNlc6kRDi4xBoj S8Ysdhjbvl9LR3M WrV07Zc nSvhZa0qEWtB UhFHc8 19PebmFCroYZHV TCJeBGKoDmjaS pnJ2DaPeUA0vF3jS bqZoJwL4f7jksCWEm Ybyira TlenHqgVNMI5Q7PJt"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./aujdrsorvbly3ppvsvaihtjh "Mhe3bXv CtiEPBvxHUV Z26Bf 4xwHfKXcgUu6"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./182ly6sg3x9h7npb15mj21ty "i30APh4dZ2K AqLh Qh0KO9sjYmH EnspZO9Cefv5I vi9HegZj7O hisZlR XdFzlMETekKjA A1cTXJf3tQ VUtaIPOM p5StigYOZLM8haU hxszGHl26M kNR OlIi3y8AZpQHm DkPJHEXumdBjgA Ez8fuXgT25 qrlwXc"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================

```