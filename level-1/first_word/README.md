# FIRST WORD

### Assignment

```
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
```

### Examples
```
$> ./first_word "FOR PONIES !!" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```
### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r10p6.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr 12 18:43:29 PDT 2019
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
Repository URL: auto-exam/2019/piscine-c-exam02/exam_20190413/esupatae

= Git history ==================================================================
$> git -C /var/folders/hh/x25m5gln4hbdzht_22zzc4hr0000gp/T/tmpEnFwy_/user log --pretty='%H - %an, %ad : %s'
bfd2038c15ca21665208ecdd8ce4219b5946a9d2 - Exam 42, Fri Apr 12 18:42:42 2019 -0700 : Level 1: first_word
5e92b2ecc7623fe6a189cb70e0add890c9b96426 - Exam 42, Fri Apr 12 18:13:50 2019 -0700 : Level 0: aff_first_param
 
= Collected files ==========================================
$> ls -lAR /var/folders/hh/x25m5gln4hbdzht_22zzc4hr0000gp/T/tmpEnFwy_/user
total 8
-rw-r--r--  1 deepthought  deepthought  523 Apr 12 18:43 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Apr 12 18:43 aff_first_param
drwxr-xr-x  3 deepthought  deepthought  102 Apr 12 18:43 first_word

/var/folders/hh/x25m5gln4hbdzht_22zzc4hr0000gp/T/tmpEnFwy_/user/aff_first_param:
total 8
-rw-r--r--  1 deepthought  deepthought  1224 Apr 12 18:43 aff_first_param.c

/var/folders/hh/x25m5gln4hbdzht_22zzc4hr0000gp/T/tmpEnFwy_/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1242 Apr 12 18:43 first_word.c
 
= first_word ===================================================================
$> gcc -Wextra -Wall -Werror first_word.c -o user_exe 

= Test 1 ===================================================
$> ./yh9q1r4nv9ai3nofsamk9882 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./4ru7if8bkvdt5i00jvfalsh2 
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./6k6i1qvjg6a7h55vdxufqi2f "salut" "a" "tous" "tout" "le" "monde"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./sgldea6j5bhgv3dtsfvicauf "mXBYVgDcLGWszfn"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./ctkcge86zw7b9550g8opwzsd "p9SztCrlFxLYiAP"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./ualuego24krqxpx9djbvhhe2 "PaZJOb8nydo2IUR"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./mzzr5qwrp333curi5cdcz12r "ASZov1K i8n21 OCJoHnWV1a3Qud 1gCD0Ri kv0ncbFA 2Jkra8D9lSG7mYZv6 8sW9iE snPlx0Z6bKVGh3 40cHhKPYFjz eLjhdt5"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./bbtn3dfny9rdvz2wo9tbh0wb "ekSCuzMvYf2 jh59esygMFCfcoKEb Lt467Wv oCnv0zGrT64ZdP rbQgyCSN uqD3j9B V4G"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./27xf6vef30xtlt0n26xkdyed "qfySDzTWr i3ntxHXoAGyZhqw dyRXf IuMGzFLxsR05yCb3g iTzxW76Y2sjLOnQ vTrOj1YUguzN 8FMIVJsvG hyD9c bwfZ3B2CYVTO79mhL 8foyVgcM0tOU9W5Zq qRvWZJct THDwQi8vcmpESMsXC pNyglIcCdD6ALnVvq aOKClok43Ai"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./2awu5g62sn30nxdcu3o8w168 "	1KiC4qH0matWvEcX		*QR5wjC-f5S46+p4cZ1VOf0eogN*FSM<"
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./bqyxask4y9b0ofwneyejd15s ".SWZXzns	 jy0E0zoQBtJ8riAFVY4C1U		5jEbKJcBHM/HRGOc2Q5dJrvmM)wxVWTCBLY<wB3v7kAR	)Otoy?"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./l9yw4loid438rsbptporvfi9 "	 	EcL75"
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./yzdmxgbpte9t5nmdozjf13yp "<M6L7"
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./1syl13nhp4r6pwcu6tc6fi1k "2ZgwCRE09jqkQYTl4r/kq3UDfVrFu (qOut0rNRYcJjVkgE8ch1MWN0Zi2uYU83s9	@gWqUT7@YNTz5WVqmHZwKtAe?g3empBaMjGv+Mk63fr3hW9uGbr2xnHRYpqac."
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./ad8bc31l8gzcbyg0e4sbc71p "49uh4SPJdrceziN3W/eDGtf6j9KxRcSbohz>"
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./4qz9hte3duud62ld6a6gkjue "		*ZiesjQctIwYJhrHn	"
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./b0cxn6zd35yr6f0bhj8zc9p5 " 57un3o 6jJ3,ZMJmnzl4c6"
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./isdhyi0g6cmr47cnzweluwvq ")FqHnTXAdt "
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./6h9pxem4j6h9ta6sdq1kefjf "	<gj1rykUV4nQD	pe4uyKZ7 	7cHDxL86mhlGPu		osNXGU8WRzxc	9OpC1FPAv6f7WwUsX/FJkYfExlQL3a7.4GWVK70cdIquLOP.np80bj	*"
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./8qnk4vhtqolghzpgiupxgow9 "	z4FkXn1q0HQ9="
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```