#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    printf("TOP\n");
    fork(); // creates two processes (parent and child)
    printf("1\n");
    fork(); // each of the existing processes (parent and child) creates another process
    printf("2\n");
    fork(); // each of the existing processes (now four in total) creates yet another process
    printf("3\n");
//    sleep(300);
}




/*



My Output
--------------

1
2
1
3
2
3
2
3
2
3
3
3
3
3

--------------

1
|_ 2
   |_ 3
   |_ 3
|_ 2
   |_ 3
   |_ 3
2
|_ 3
|_ 3
3
|_ 3



           1
          / \
         /   \
        /     \
       /       \
      2         2
     / \       / \
    /   \     /   \
   3     3   3     3

*/
