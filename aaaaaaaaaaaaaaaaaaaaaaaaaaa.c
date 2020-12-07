Given an absolute pathname that may have . or .. as part of it, return the shortest standardised path.

For example, given "/usr/bin/../bin/./sripts/../" return "/usr/bin".
Good morning! Here's your coding interview problem for today.

This problem was asked by Pivotal.

Write an algorithm that finds the total number of set bits in all integers between 1 and N.



int setbits(int in){
  int t = 0;
	if(in==1){
		++t;
		--n;
	}
	while(in != 0){
		t += !(in %2);
		in = in >>1;
	}
	return t;
}

//recently discovered popcnt x86 inst does exactly this lol
Good morning! Here's your coding interview problem for today.

This problem was asked by Yahoo.

Write a function that returns the bitwise AND of all integers between M and N, inclusive.

and_all(int m, int n){
	int c = m;
	int t = m;
	while(c < n){
		++c;
		t &= c;
	}
	return t;
}
Good morning! Here's your coding interview problem for today.

This problem was asked by Amazon.

Implement a bit array.

A bit array is a space efficient array that holds a value of 1 or 0 at each index.

init(size): initialize the array with size
set(i, val): updates index at i with val where val is either 1 or 0.
get(i): gets the value at index i.





uint8_t* init(int size){
  return calloc((size/8)+1);
}

void set(int i, int val){
  switch(val){
	  case 0:
		  array[(i/8) + 1] = (array[(i/8)+1]) & (<bitwide-inverse>(1<<(i % 8)));
			break;
		case 1:
		  array[(i/8) + 1] = (array[(i/8)+1]) | (1<<(i % 8));
			break;
		default:
		  error;
	}
}

int get(int i){
  uint8_t hh = array[(i/8)+1];
	hh &= (<bitwise-inverse>(1<<i%8))
  return (hh > 0);
}
int i=0;
char c;
int o=0;
int l=0;
while(i < s.length()){
  c = s[i];
	++i;
	if(c=='(')
	  ++o;
  else if(c==')')
	  ++l;
}
int t=o-i;
if(t<0)
  t *= -1;
return t;


//&s is in esi
xor ecx, ecx ;i
xor eax, eax ;(
xor ebx, ebx ;)
loop: mov edx, [esi + ecx]
cmp edx, 0	 ;null termd string
je end
cmp edx, (
caddeq eax, 1
cmp edx, )   ;could this and below be replaced with caddne ebx, 1?
caddeq ebx, 1
inc ecx
jmp loop
end: sub eax, ebx
jge skip
neg eax
skip: ret
Good morning! Here's your coding interview problem for today.

This problem was asked by Uber.

A rule looks like this:

A NE B

This means this means point A is located northeast of point B.

A SW C

means that point A is southwest of C.

Given a list of rules, check if the sum of the rules validate. For example:

A N B
B NE C
C N A
does not validate, since A cannot be both north and south of C.

A NW B
A N B
is considered valid.
Good morning! Here's your coding interview problem for today.

This problem was asked by Microsoft.

Given a clock time in hh:mm format, determine, to the nearest degree, the angle between the hour and the minute hands.

Bonus: When, during the course of a day, will the angle be zero?
This problem was asked by Google.

Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.

Do this faster than the naive method of repeated multiplication.

For example, pow(2, 10) should return 1024.
Good morning! Here's your coding interview problem for today.

This problem was asked by Apple.

Implement the function fib(n), which returns the nth number in the Fibonacci sequence, using only O(1) space.



int fib_n(int n){
  int x = 1;
	int y = 1;
	if(n == 1 || n == 2)
	  return 1;
	while(n > 0){
	  y += x;
		--n;
		if (n == 0)
		  break;
		x += y;
		--n;
	}
	return (x>y) ? x : y;
}



// n is in edi
mov ecx, #1
mov eax, #1
cmp edi, #1
jg nnn
ret
nnn: cmp edi, #2
jg hhh
ret
hhh: add ecx, eax
dec edi
jz end
add eax, ecc
dec edi
jz end
jmp hhh
end: cmp eax, ecx
cmovl eax, ecx
ret
Good morning! Here's your coding interview problem for today.

This problem was asked by Dropbox.

Conway's Game of Life takes place on an infinite two-dimensional board of square cells. Each cell is either dead or alive, and at each tick, the following rules apply:

Any live cell with less than two live neighbours dies.
Any live cell with two or three live neighbours remains living.
Any live cell with more than three live neighbours dies.
Any dead cell with exactly three live neighbours becomes a live cell.
A cell neighbours another cell if it is horizontally, vertically, or diagonally adjacent.

Implement Conway's Game of Life. It should be able to be initialized with a starting list of live cell coordinates and the number of steps it should run for. Once initialized, it should print out the board state at each step. Since it's an infinite board, print out only the relevant coordinates, i.e. from the top-leftmost live cell to bottom-rightmost live cell.

You can represent a live cell with an asterisk (*) and a dead cell with a dot (.).





const char VWALL = '|';
const char HWALL = '-';
const char LIVE='#';
const char DEAD='•';
char GRID[32][32];

void rendergrid(){}
void initgrid(){}
int addtogrid(int x, int y){}
int removefromgrid(int x, int y){}

int main(){
  initgrid();
	render
	loop: scanf inputs
	step
	render
	loop
}
Good morning! Here's your coding interview problem for today.

This problem was asked by Pinterest.

Given an integer list where each number represents the number of hops you can make, determine whether you can reach to the last index starting at index 0.

For example, [2, 0, 1, 0] returns True while [1, 1, 0, 1] returns False.

//greedy
int i =0;
int h = array[i];
while(h!=0){
  h--;
	i++;
	h += array[i];
}
return (i==alen);


//not greedy
int i =0;
int h = array[i];
while(h!=0){
  h--;
	i++;
	h = array[i];
}
return (i==alen);



//alen is in edi
push ebx
push ecx
xor eax eax
xor ecx, ecx
mov ebx, [array]
cmp ebx, #0
je end
loop: dec ebx
inc ecx
add ebx, [array + ecx]    ;replace add with mov for non-greedy
cmp ebx, #0
jne loop
end:
cmp ecx, edi
cmove eax, #1
pop ecx
pop ebx
ret
Good morning! Here's your coding interview problem for today.

This problem was asked by Amazon.

Given an array and a number k that's smaller than the length of the array, rotate the array to the right k elements in-place

lol i camt think how to sprt fully in-place in omly c but in asm its piss easy because you have like 8 free vars in the form of regs
{
	int c = 0;
	int tmp;
	loop:	tmp = reverse(in)
	tmp -= in;
	tmp & 0x7fff ffff //bitmask clear sign bit
	++c;
	if(in!= 6174)
	  goto loop;
	return c;
}

int reverse(int in){
	int out = in/1000;
	out += (in/100)%10;
	out += (in/10)%10;
	out += in%10;
	return out;
}



//in in esi
xor eax, eax
loop: mov ebx, esi
call reverse
sub esi, ebx
and esi, 0x7fff ffff ;bitmask clear sign bit
inc eax
cmp esi, #6174
jne loop
ret

reverse:    ;ebx
push eax
mov eax, ebx
idiv #10
mov esi, eax
mov eax, edx
imul #10
mov edi, eax
mov eax, esi
xor edx, edx
idiv #10
add esi, eax    ;this whole block migjt b wrong idk tired+rushed
mov eax, edx
imul #10
mov edi, eax
mov eax, esi
xor edx, edx
idiv #10
add esi, eax
mov eax, edx
imul #10
add eax, edx
mov ebx, eax
pop eax
ret
Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced and well-formed.

For example, give the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
//inputs are a/b
int ctr = 0;
while(a>=b){
  a -=b;
	ctr++;
}
return ctr; //it said ignore remainder, that would be whataever's left in a




//a is in ecx, b is in ebx
xor eax, eax
loop: inc eax
sub ecx, ebx
jl loop           ; jump if sf
dec eax
Good morning! Here's your coding interview problem for today.

This problem was asked by Palantir.

Write a program that checks whether an integer is a palindrome. For example, 121 is a palindrome, as well as 888. 678 is not a palindrome. Do not convert the integer into a string.



int rev = 0;
int temp = in;
while(temp!=0){
  rev += temp% 10;
	rev *= 10;
	temp /= 10;
}
return(rev==in);
Good morning! Here's your coding interview problem for today.

This problem was asked by Apple.

Implement a queue using two stacks. Recall that a queue is a FIFO (first-in, first-out) data structure with the following methods: enqueue, which inserts an element into the queue, and dequeue, which removes it.


enqeueueueueue pushes to stack one, so stack one is a stack of everything
dequeueueueuueue pushes to stackzero everything popped from stackone, so stackzero is now a reversed stack of everything (ie fi to stackone is now fo from stackzero)
enqueueuue puts everything back to stackone before pushing of course



int stackone[32];
int stackzero[32];
int sp1 = 0;
int sp0 = 0;

void push(int s, int in){
	if(s){
		if(sp1 < 32)
			stackone[sp1++] = in;
		else printf("sp1 > 32");
	}
	else{
		if(sp0 < 32)
			stackzero[sp0++] = in;
		else printf("sp0 > 32");
	}
}

int pop(int s, int in){
	int out;
	if(s){
		if(sp1 > 0)
			out = stackone[sp1--];
		else printf("sp1 < 0");
  }
	else{
		if(sp0 > 0)
			out = stackzero[sp0--];
		else printf("sp0 < 0");
	}
	return out;
}

void enqueue(int in){
  while(sp2)
		push(1, pop(0));		//make sure every value is in stackone
  push(1, in);
}

int dequeue(){
	while(sp1)
		push(0, pop(1));		//make sure every value is in stackzero ie backwards
	return pop(0);
}
Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

You're given a string consisting solely of (, ), and *. * can represent either a (, ), or an empty string. Determine whether the parentheses are balanced.

For example, (()* and (*) are balanced. )*( is not balanced.
int i =0;
int c=a[0];
while(c <= a[i+1])
  c = a[++i];
return a[i+1];



// &s is in esi
xor ecx, ecx ;i
xor eax, eax
xor ebx, ebx
loop: mov ebx, [esi + ecx]
inc ecx
mov eax, [esi + ecx]
cmp ebx, eax
jle loop
Good morning! Here's your coding interview problem for today.

This problem was asked by Amazon.

Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as a single count and character. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters. You can assume the string to be decoded is valid.


char* encode(char* in){
	int idx = 0;
	int odx = 0;
	char* out;
	int ctr;
	while(in[idx+1] != EOL){
		if(in[idx+1] == in[idx])
			++ctr;
		else{
			out[odx] = chartoint(ctr);
			out[odx+1] = in[idx];
			odx += 2;
			ctr = 0;
		}
		++idx;
	}
	return out;
}
Good morning! Here's your coding interview problem for today.

This problem was asked by Microsoft.

Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.

Recall that the median of an even-numbered list is the average of the two middle numbers.

For example, given the sequence [2, 1, 5, 7, 2, 0, 5], your algorithm should print out:

2
1.5
2
3.5
2
2
2
Good morning! Here's your coding interview problem for today.

This problem was asked by Zillow.

Let's define a "sevenish" number to be one which is either a power of 7, or the sum of unique powers of 7. The first few sevenish numbers are 1, 7, 8, 49, and so on. Create an algorithm to find the nth sevenish number.
Good morning! Here's your coding interview problem for today.

This problem was asked by Square.

Given a string and a set of characters, return the shortest substring containing all the characters in the set.

For example, given the string "figehaeci" and the set of characters {a, e, i}, you should return "aeci".

If there is no substring containing all the characters in the set, return null.
Good morning! Here's your coding interview problem for today.

This problem was asked by Dropbox.

Spreadsheets often use this alphabetical encoding for its columns: "A", "B", "C", ..., "AA", "AB", ..., "ZZ", "AAA", "AAB", ....

Given a column number, return its alphabetical column id. For example, given 1, return "A". Given 27, return "AA".
Good morning! Here's your coding interview problem for today.

Given a real number n, find the square root of n. For example, given n = 9, return 3.
Good morning! Here's your coding interview problem for today.

This problem was asked by Microsoft.

Implement 3 stacks using a single list:
Write a function that prints out all the steps necessary to complete the Tower of Hanoi. You should assume that the rods are numbered, with the first rod being 1, the second (auxiliary) rod being 2, and the last (goal) rod being 3.

For example, with n = 3, we can do this in 7 moves:

Move 1 to 3
Move 1 to 2
Move 3 to 2
Move 1 to 3
Move 2 to 1
Move 2 to 3


printmove(int from, int to){
  printf("move %i to %i", from, to);
}


Good morning! Here's your coding interview problem for today.

This problem was asked by Microsoft.

Implement a URL shortener with the following methods:

shorten(url), which shortens the url into a six-character alphanumeric string, such as zLg6wl.
restore(short), which expands the shortened string into the original url. If no such shortened string exists, return null.
Hint: What if we enter the same URL twice?

//hashing modulo etc
Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

UTF-8 is a character encoding that maps each symbol to one, two, three, or four bytes.

For example, the Euro sign, €, corresponds to the three bytes 11100010 10000010 10101100. The rules for mapping characters are as follows:

For a single-byte character, the first bit must be zero.
For an n-byte character, the first byte starts with n ones and a zero. The other n - 1 bytes all start with 10.
Visually, this can be represented as follows.

 Bytes   |           Byte format
-----------------------------------------------
   1     | 0xxxxxxx
   2     | 110xxxxx 10xxxxxx
   3     | 1110xxxx 10xxxxxx 10xxxxxx
   4     | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
Write a program that takes in an array of integers representing byte values, and returns whether it is a valid UTF-8 encoding.
