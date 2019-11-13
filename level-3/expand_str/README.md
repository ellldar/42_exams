# EXPAND_STR

### Assignment

```
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
```

### Examples

```
$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>
```
### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z2r5p48.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr 12 19:40:16 PDT 2019
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
$> git -C /var/folders/6n/x6s1jfnj4plcw4d4gwktnfgw0000gp/T/tmpGvn2LU/user log --pretty='%H - %an, %ad : %s'
e808c2e075142838b7b5ce1296fe5d4ec39d3f34 - Exam 42, Fri Apr 12 19:38:58 2019 -0700 : Level 3: expand_str
1c367f78a40d577937b1c92cfe207356a9ee1deb - Exam 42, Fri Apr 12 19:08:21 2019 -0700 : Level 2: ft_strdup
bfd2038c15ca21665208ecdd8ce4219b5946a9d2 - Exam 42, Fri Apr 12 18:42:42 2019 -0700 : Level 1: first_word
5e92b2ecc7623fe6a189cb70e0add890c9b96426 - Exam 42, Fri Apr 12 18:13:50 2019 -0700 : Level 0: aff_first_param
 
= Collected files ==========================================
$> ls -lAR /var/folders/6n/x6s1jfnj4plcw4d4gwktnfgw0000gp/T/tmpGvn2LU/user
total 8
-rw-r--r--  1 deepthought  deepthought  1039 Apr 12 19:40 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 19:40 aff_first_param
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 19:40 expand_str
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 19:40 first_word
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 19:40 ft_strdup

/var/folders/6n/x6s1jfnj4plcw4d4gwktnfgw0000gp/T/tmpGvn2LU/user/aff_first_param:
total 8
-rw-r--r--  1 deepthought  deepthought  1224 Apr 12 19:40 aff_first_param.c

/var/folders/6n/x6s1jfnj4plcw4d4gwktnfgw0000gp/T/tmpGvn2LU/user/expand_str:
total 8
-rw-r--r--  1 deepthought  deepthought  1358 Apr 12 19:40 expand_str.c

/var/folders/6n/x6s1jfnj4plcw4d4gwktnfgw0000gp/T/tmpGvn2LU/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1242 Apr 12 19:40 first_word.c

/var/folders/6n/x6s1jfnj4plcw4d4gwktnfgw0000gp/T/tmpGvn2LU/user/ft_strdup:
total 8
-rw-r--r--  1 deepthought  deepthought  1239 Apr 12 19:40 ft_strdup.c
 
= expand_str ===================================================================
$> gcc -Wextra -Wall -Werror expand_str.c -o user_exe 

= Test 1 ===================================================
$> ./z2fwjevcpq27s3qmic5ofk72 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./q5f0jialxx5a1hf7xewkjaa9 
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./741pmp4b3wootkublv9ud0bp "salut" "a" "tous" "tout" "le" "monde"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./rxayeithgtw53hgqbkwxta5p "gZfH1"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./itsywz7tusbnadn7xc2dq51k "QU1L547XIdcF"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./wb92cqepjprjawxsm88tfi7v "zFok8j9na"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./ynyp5s6lknedkww7kgz1slkb "lh2kecI7uSgG6JP l6zFJ3qEi7p aGNL7m8 dmJ 9CXWilLfqHUPkMe7s vI8xBHaMrh6ncim M7jWBtCQ2RVPfzs kuyi687 sqIUbOSc9"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./o3xf5hhxahyp2c9s8lgysx2c "QGAEgh1vfzuy8B7R UrS75K2gnD3a rXPM7JyK2vB p0EVoChqZOnLztW"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./rf0qos7dy9k22gj0y84d2hy1 "5TwqOuXCWtArc S2XHqUK1hCl6pZs ZiaNBKe8GvYSoUl iJU4kv z8fJ 8MAv pS3I 3Ci5XYBFSLEkU jcx34oJqSuCvyZlf ndMQ 29DgYERzaT YkpgThrcoWjN48d9F bRgQZL4Xp7ldGKc neRIOBoDbf0VXS 6vycpIjqNaXQwJ stA039zd6"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./dxxhaol6u6rojkwynhjuqnfy " 		dCE  VwfEezoU4Niv6ZR 	 	 	7yOop	 dIBXA7iJ8YbUlfu1O 		 "
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./45ydlrrpbynxcvoloati011f " 	 	tkDJb1L3lZp6 		GNZUK2sumo4ltv	 	L4oYjwAH	 	 			O1l  		kNOPHGDw 				PDs54bxAoQ3R72HhV	 		"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
= Test 12 ==================================================
$> ./pneyad3hkaraoa7qqsc09ebz "   jD9VsLYTvatEI  		 NiS 	 		 6ERPYn7F3togOWzBs		  	471xXyEGU3fmPCH  "
$> diff -U 3 user_output_test12 test12.output | cat -e

Diff OK :D
= Test 13 ==================================================
$> ./tpw7cmyiqtt7bmw9h2mjeqex "		20eFjQxbEchPK6k	  "
$> diff -U 3 user_output_test13 test13.output | cat -e

Diff OK :D
= Test 14 ==================================================
$> ./9v1wjr1t4fnwifko8fdioada "	 2vbGwMuzmF68Pk		  			 	P4xYQ	 	 			 	LrBTEChP  		  	XYkb8ophfFsvITq	   	  	 k2zKsf5OrY74 	 iGbv5a    	 FeKPqZLDJna	 	9xSN2AmXWkojD07 		 	3BfU "
$> diff -U 3 user_output_test14 test14.output | cat -e

Diff OK :D
= Test 15 ==================================================
$> ./pbk9jxor9eezlr5jxyrkee8i " 	Hi6hnZVw 		    MqpNlE  	 xTfvArdYozqL	  			 	J5knMYNlPq 		"
$> diff -U 3 user_output_test15 test15.output | cat -e

Diff OK :D
= Test 16 ==================================================
$> ./ueci0ipanepvti3jxl4wz4x6 " R5BZrsYA	  	 		b8i2e 		  	  9XfGYTu  	"
$> diff -U 3 user_output_test16 test16.output | cat -e

Diff OK :D
= Test 17 ==================================================
$> ./8h4b7w8z5dmv0zbsmxfph74h " SlXVg68f 	 	"
$> diff -U 3 user_output_test17 test17.output | cat -e

Diff OK :D
= Test 18 ==================================================
$> ./xq4xwosi7xkd874g8iuj0tol "	7p40oXvb1		 	 d4fMg8VeXt2jkmBw		    NBu8HaZboTL3UnDt	 		 	 	HWCE   	 p2yZc4dY6q9LtT 				 9c6TLXReK  		 iZpt5y 	XmrIctp   XyIL2fGus   	"
$> diff -U 3 user_output_test18 test18.output | cat -e

Diff OK :D
= Test 19 ==================================================
$> ./7optslvtm8onte95oob5naow "				 78UnZpilK 	 		 	 MdBFlhirqLJtcnw7e "
$> diff -U 3 user_output_test19 test19.output | cat -e

Diff OK :D
= Test 20 ==================================================
$> ./1g7e6bar8583wwfbj4pd0a4g "	 	lB9H3y7D    		  8CYW		  	mzwc3CIk9Ly0Dr  	  		s1QwB			 Ht4iOy5ZosIBvmMrk		    8stHT 	  	 		lVPcOoYAS4jT			 	"
$> diff -U 3 user_output_test20 test20.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```