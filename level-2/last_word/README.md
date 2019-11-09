# Last Word

### Assignment

```
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONIES" | cat -e
PONIES$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r7p16.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr  5 19:43:50 PDT 2019
$> gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 10.0.0 (clang-1000.10.44.4)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
$> clang --version
Apple LLVM version 10.0.0 (clang-1000.10.44.4)
Target: x86_64-apple-darwin17.4.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin

= User files collection ========================================================
Collecting user files from Vogsphere
Repository URL: auto-exam/2019/piscine-c-exam01/exam_20190406/esupatae

= Git history ==================================================================
$> git -C /var/folders/32/9vkj_qkj73q26tb0_qmpdly80000gp/T/tmpqNHxq3/user log --pretty='%H - %an, %ad : %s'
5b572f2a38b50b4ba6185a0dc7b8597c8526de57 - Exam 42, Fri Apr 5 19:43:28 2019 -0700 : last_word attempt
34a290df0f07c22adf7797448407c4d7f20876cb - Exam 42, Fri Apr 5 19:09:45 2019 -0700 : rot_13 attempt
d9add4ed59eb17a743fe97e1b78f7d365d6fd9d3 - Exam 42, Fri Apr 5 18:13:48 2019 -0700 : only_z - attempt #2
b2c4ca184e76bb893a5c4a2b4543c327275fc224 - Exam 42, Fri Apr 5 18:11:30 2019 -0700 : only_z
 
= Collected files ==========================================
$> ls -lAR /var/folders/32/9vkj_qkj73q26tb0_qmpdly80000gp/T/tmpqNHxq3/user
total 8
-rw-r--r--  1 deepthought  deepthought  964 Apr  5 19:43 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Apr  5 19:43 last_word
drwxr-xr-x  3 deepthought  deepthought  102 Apr  5 19:43 only_z
drwxr-xr-x  3 deepthought  deepthought  102 Apr  5 19:43 rot_13

/var/folders/32/9vkj_qkj73q26tb0_qmpdly80000gp/T/tmpqNHxq3/user/last_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1515 Apr  5 19:43 last_word.c

/var/folders/32/9vkj_qkj73q26tb0_qmpdly80000gp/T/tmpqNHxq3/user/only_z:
total 8
-rw-r--r--  1 deepthought  deepthought  1012 Apr  5 19:43 only_z.c

/var/folders/32/9vkj_qkj73q26tb0_qmpdly80000gp/T/tmpqNHxq3/user/rot_13:
total 8
-rw-r--r--  1 deepthought  deepthought  1439 Apr  5 19:43 rot_13.c
 
= last_word ====================================================================
$> gcc -Wextra -Wall -Werror last_word.c -o user_exe 

= Test 1 ===================================================
$> ./rnzh41hs78s8t6j60rxk4b1s 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./difrjg2fmv66m2gan9s4avqp 
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./od78xvgd4goswxnshn05csy7 "salut" "a" "tous" "tout" "le" "monde"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./6rtkg2seosekzymox65m2kco "DmKPp0"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./ekuy2uji7toozpwlrvcli7g4 "k38J"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./k8b1bgb0i0vdx1jf68eztvha "MOVX"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./a1wkcs8hfs3jcua5blazu6n6 "Lo4ZSRn2zeAavjNJp OgTPbnU9ILaS6 TZIyiaA6YQ TsrwgLEkjOHF16n dYA7um1XcWrO"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./tz6ofqq9hrwf7bdx46evshkg "TcVa3Ed1NtHz4LDl EgF03OUhdwueVBMD t3BDAxInmWdeNSUR5 jxgialBWc kWrINtFDKuYRO 2lp0 HDmRG7hrZ1L9VzgJQ okGhDlSgcAaBUnHR mjOSHutgbPia10A CeI HC1KBpTiq7Nr5P9n0 bk9YWI nfq3YpDQZOIjeaP2"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./ru95ocd5n1ftnrbymiizg1am "jsQTxLRn7G8wmKe9 VxJ0Sly dHRzBLDkYSs LY5Ddg dKX HF8rTp6Qk iarpG cSx9HGTjIMW 0xsJQpLj72ge VnDUr3ljLy7vQhP4 BadDjnrL8eN9y hArnxe 78v56jm 8oKuJ2EeCxW fuODJaA1Z"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./eqj5a16t1na9erdzhy67qw19 " )m9FO6zNb PaO46zyqjK <DGzT2l5a;HsPxJ.EY2LN7BzVTs8g3RCy=fcmgzqr	45HR12itaRHJ9>"
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./k3qp9c4yc7lapwzoygj7aak4 "		 rbjvAqGyM3lE.GzlFSBeka	ewOoV	+xFWUjlHXImDCK1n		<9z5QLcxlJph,RlI7EUPDbLNO68Y3Cf1351Lfxz0ktV77v3jWNc6QM0o	3"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./h36r8c2gmg7z065bw6kh24cr "8IY4qrxUEHvjfaN<4DhgRqcxVlzNFEka3FNJMtPI		7PsriY:FSaMKZe1WIcw@pQKlr4qn6fL3O02r9YCM5AnBkd;WohrBnQyfwd9FkaC ,785,PD8tn1bFmMcBiKgVz ."
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./yzf4ujo28s6npawr3d3u92al "/xOiqa3gzUbMB9T05<"
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./sszo941mes7hr7yvrl0h9dy1 "	  	SnBUJa9E1f6<bR3rm01o486MKsmUW7fwuXIrlH,83ENRlcxV0/eEntgKhZamH265Glw	>UXDzN9wWs)3tcXdIiPV2wtUR57ZL6XJhyx .2tSDeRGF6Xz+gaWVN	:"
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./v5v1zkuj1w931ajjqpha3dkv "   -awkuVrl0ZyIb.91pxrD7CKvfJqa8hT7beLkDaM;k6Rlo7h3bWFaqY	-lmV6PXf4*"
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./da3z3fquecbbi1c0n3ocd5ga "	-aE2c9fYFWCv YzaLJ9Fti	FtlD)ZmR)fAE5Ruop7W92vq*1bWhFAkp	 "
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./7025mxe08q9d03utwybhrjh9 "1OZAKUo0sjCnWxib:DVpbj @"
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./wzn2ck3vayzbtt20e7c5bgz4 "	;5umiD8NKP4bn7f>MGPBaEkJ5926HQKUqr4nulS7AV1uJwy	2UXc8gbn 1Mr6xlV0wt:oZsdUifvm7?"
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./2kbx0lo77efmvh4vmwwwhfd4 "1deZrXafvw6pgyqO1tJBm8qC1GiYu3DAZn>UoS6KuY8Mt4oE(2Lic8HCZKUf7Xt=YI9jFWDG670/"
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./bthf3eeq23q1jaf37jnwitva " 	:DpVNYnTkyIstgh,3GStgr7ap5xQcYVDh	+C3BLqMhyKVYs		2lGzHiEPCvLR>vj1PKQJ4gLNeS5z35w724PbSL0IATB	09peF5IWa(hD9kOEx 3"
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================

```