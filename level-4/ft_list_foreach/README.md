# FT_LIST_FOREACH (I GOT IT WRONG! CHECK THE TRACEROUTE FOR WHY)

### Assignment

```
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```

### Traceroute

```
= Host-specific information ====================================================
$> hostname; uname -msr
e1z3r6p2.42.us.org
Darwin 17.4.0 x86_64
$> date
Fri Apr 12 21:15:48 PDT 2019
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
Repository URL: auto-exam/2019/piscine-c-exam02/exam_20190413/esupatae

= Git history ==================================================================
$> git -C /var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user log --pretty='%H - %an, %ad : %s'
e4dbaaaed16d0bebfab33b961976c574c79da662 - Exam 42, Fri Apr 12 21:15:38 2019 -0700 : Level 4: ft_list_foreach
fd1cf173d84892aba3f423dd05073ccecc4872aa - Exam 42, Fri Apr 12 20:43:17 2019 -0700 : Level 4: sort_list
e808c2e075142838b7b5ce1296fe5d4ec39d3f34 - Exam 42, Fri Apr 12 19:38:58 2019 -0700 : Level 3: expand_str
1c367f78a40d577937b1c92cfe207356a9ee1deb - Exam 42, Fri Apr 12 19:08:21 2019 -0700 : Level 2: ft_strdup
bfd2038c15ca21665208ecdd8ce4219b5946a9d2 - Exam 42, Fri Apr 12 18:42:42 2019 -0700 : Level 1: first_word
5e92b2ecc7623fe6a189cb70e0add890c9b96426 - Exam 42, Fri Apr 12 18:13:50 2019 -0700 : Level 0: aff_first_param
 
= Collected files ==========================================
$> ls -lAR /var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user
total 8
-rw-r--r--  1 deepthought  deepthought  1554 Apr 12 21:15 __GIT_HISTORY
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:15 aff_first_param
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:15 expand_str
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:15 first_word
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:15 ft_list_foreach
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:15 ft_strdup
drwxr-xr-x  3 deepthought  deepthought   102 Apr 12 21:15 sort_list

/var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user/aff_first_param:
total 8
-rw-r--r--  1 deepthought  deepthought  1224 Apr 12 21:15 aff_first_param.c

/var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user/expand_str:
total 8
-rw-r--r--  1 deepthought  deepthought  1358 Apr 12 21:15 expand_str.c

/var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user/first_word:
total 8
-rw-r--r--  1 deepthought  deepthought  1242 Apr 12 21:15 first_word.c

/var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user/ft_list_foreach:
total 8
-rw-r--r--  1 deepthought  deepthought  1061 Apr 12 21:15 ft_list_foreach.c

/var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user/ft_strdup:
total 8
-rw-r--r--  1 deepthought  deepthought  1239 Apr 12 21:15 ft_strdup.c

/var/folders/2z/cktlkm056nxfz6975py32nyr0000gp/T/tmpBLHVdF/user/sort_list:
total 8
-rw-r--r--  1 deepthought  deepthought  1427 Apr 12 21:15 sort_list.c
 
= ft_list_foreach ==============================================================
$> gcc -Wextra -Wall -Werror ft_list_foreach.c main.c -o user_exe 
ft_list_foreach.c:13:10: fatal error: 'ft_list.h' file not found
#include "ft_list.h"
         ^~~~~~~~~~~
1 error generated.
main.c:1:10: fatal error: 'ft_list.h' file not found
#include "ft_list.h"
         ^~~~~~~~~~~
1 error generated.

Could not compile 'user_exe'
Grade: 0

= Final grade: 0 ===============================================================
```