# ROT_13

### Assignment

```
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z3r5p8.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr  5 19:10:03 PDT 2019
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
$> git -C /var/folders/47/dllp_tj96hs9wwqlcz5bwc880000gp/T/tmpGoTHfH/user log --pretty='%H - %an, %ad : %s'
34a290df0f07c22adf7797448407c4d7f20876cb - Exam 42, Fri Apr 5 19:09:45 2019 -0700 : rot_13 attempt
d9add4ed59eb17a743fe97e1b78f7d365d6fd9d3 - Exam 42, Fri Apr 5 18:13:48 2019 -0700 : only_z - attempt #2
b2c4ca184e76bb893a5c4a2b4543c327275fc224 - Exam 42, Fri Apr 5 18:11:30 2019 -0700 : only_z
 
= Collected files ==========================================
$> ls -lAR /var/folders/47/dllp_tj96hs9wwqlcz5bwc880000gp/T/tmpGoTHfH/user
total 8
-rw-r--r--  1 deepthought  deepthought  701 Apr  5 19:10 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought  102 Apr  5 19:10 only_z
drwxr-xr-x  3 deepthought  deepthought  102 Apr  5 19:10 rot_13

/var/folders/47/dllp_tj96hs9wwqlcz5bwc880000gp/T/tmpGoTHfH/user/only_z:
total 8
-rw-r--r--  1 deepthought  deepthought  1012 Apr  5 19:10 only_z.c

/var/folders/47/dllp_tj96hs9wwqlcz5bwc880000gp/T/tmpGoTHfH/user/rot_13:
total 8
-rw-r--r--  1 deepthought  deepthought  1439 Apr  5 19:10 rot_13.c
 
= rot_13 =======================================================================
$> gcc -Wextra -Wall -Werror rot_13.c -o user_exe 

= Test 1 ===================================================
$> ./d6za16tjxxzj6w2dbsbv60b9 
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./x8939qsksj799q3p43kgtjwf "WGHyYc8UFw"
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./jg9702njcudbji9nvwj989f4 "U6hdom8MnV"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./6gjbxn5m9ay50y13iucw8pgf "uBTlM8g0UYcaxA2"
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./ou4j8rp6pl34jhcb3nuzwryx "UqAfaOB Hw0WPVgYvAoem4 7hRpXBN2V8ewF CZE72t9 yJCm KLXt2wfykM zJe"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./1bxv1731mgohf7ulworaliqz "g6AYxnVtSTCKmsL OwfPbevN uX4a rdwu6fQU9bTesvp juy71bhSBvwnfl590 YC63kRtXjPDEf1VUd fyYHTiQ76zhqg53O bz8LHosxWSgj EWQxVd6sJ0e1 2VfnHIC yYqgO37 mTa9DqUYtdn4V0AKp"
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./0zhpb4qe54e2kl4o5iptygrl "c3h 4pVmiA09dj1Pf 1VkqSbtX4jf3DwP qNbFt1WYHp"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./56850zj3ufwsa652kz6swqxe "s0qBSohXmHcOxyKRY" "Spm" "nk5" "59kE" "EwkpDKXPc0vi8eQyB" "02jkrodHYZyaK3" "XL0hO48T1n" "Thk0C" "rOsPU5zil8g" "z0UmhRv2fVAZa" "QdyApvPzxlJWBCVU" "Ff1x8I" "PNKSjHTYr" "lkw" "D9KR" "7N0mCs9RAbuMKJj1p"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./ff4tihihcvt58527gcyhlpoh "zwSJPiWUkYrm4BCR" "x2fVIZtS5WQM9zq" "EL9" "6B1CaE9MnXv0GF" "u5b4hLmA7cFUg" "XjDYHvghR8F" "QuES9x73dJnCRA" "RfUMxiN3" "qOFEzC9cs0lf"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./e3ob9ibnhfl0hvg52qrw4e38 "1I3k89N oVTPDnW1 4F81SsqjTQ2MgxhcN kCasxodymtr27AcXB Oi80Dk54hRq2Mz7v qSuOUKIozRcFV 7QUZrx 4heA5" "urUvmo4H DEKxsG0mLTYBP6h Pq0JmDT9udQf7U2 WLIUGT4xbDNqo n2rC70 McN OMFCgrs9E yRJtIYrMcQLKVGOUF wsElMNWryqb9124nX ZqDAftR T7rCBPajxlmsw LUYcgMvwSpJ8unKkj CkvH1a LgGDMO" "NW4zg u3eX W2zemRxEJvj e1Fw7 WDNAXLjwuUR8kP0 F1wq7tg0fUQIJ5iv UH0r3ONCx1t" "2Tg5xKB7uHCPb6syc C0WSkwnzyqLZKoGt iUrpe6qn Krf0mTdqog89JuXD Hob0 9Ez13Q5gtvIi lcXW Lw3Aizn gmciywA3Gq6YIFK 9R0MzF45qvOfGnYLd vSzC9YdBP6Mh XDB3Yj LeQ8G OjrIJW93ngfs 2Pt0g7qDpwnhC3 KEy1dzq" "IBmnjh2LNo Q2mUv 9IDika3 1t8h ozIyl zSnPEg" "8nEgKdY5DLWIt 6EA1QjrlO fWBIrvEsGhTwe bceOGYNX wG4AF 9htJr7jzdYcpTGu" "KcE1DjXqHLZ yjSC5OIQNWu2mlwfb mCgq3U7MRoIZA4Wc rESU4yV E0z hfKdonN7V0Tsw iqOuHQVFP5Jwa XDOb ZvXy8S7j5DnPYUBs LHJxPgT2WS JdR2vb4B5kxsu" "jfWkqQDmNcV1S v7zL3 OT1YFGPp GHn0VMdtgrC2R1iZ e6Gh9 ydN VIBUhDqsr6e2i 2XORsq1F9V rTvmL59eiVEjlhN41 xiRTcY8 klQnwXB RfV6Y"
$> diff -U 3 user_output_test10 test10.output | cat -e

Diff OK :D
= Test 11 ==================================================
$> ./ir95361353l579urct9egs29 "Zi9xQMNa1fXL xbJFD0YpH4qOatN7 RxLpo2yumcizsH0g oIixgEqceZ9K V4ZiQFzY M1IyRSt0PjQ q6tsBZWzE 2PGo5sYikDx 7TrDRPeqAgyUm0Flt lY9ebQ7 LeusoENF nSpgqPM5dTZX4vHcU NPWwsq3tmSudzZr VoFsdN wDEi 6ucCAqHMQ Wya" "TQ0LFbPRWs2 Z84JiQv JqAEks0Mbe vycsKlu4tow 8pr9AuDsmWtMQcjxH ud5LETBP4cvW6 X9er6UnAfk7EgP 5lJpE3ts2RbvzF7 vM24 oLJDURlnCBH pJvKmr75swRln CtFOneV CsfDmN 9xo oG0dAhkZmP9 lBWe1xak hFQ8USsezfqtwEB" "LpRaW3ujYSs ERm9tFhQyYGfT SDeyX26O8JoC T3AX2EW5u96 CtG wo8DrmY1ydLzi dah9ZV74PfLJ MxS6AEg jzLTbdueOwvK2"
$> diff -U 3 user_output_test11 test11.output | cat -e

Diff OK :D
Grade: 1

= Final grade: 1 ===============================================================
```