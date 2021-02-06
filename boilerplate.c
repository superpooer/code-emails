#include "hdboiler.h"
void all_set_bits();

int main(){
	printf("fuck you");
	abs_path();
	all_set_bits();
	and_m2n();
	bit_array();
	bracket_count();
	cardinal_test();
	clock_angle();
	fast_pow();
	fib();
	hops();
	in_place_k_sort();
	kaprekar();
	multi_bracket_count();
	no_division_division();
	palintdrome();
	queue_stack();
	reg_bal_brackets();
	rotated_array();
	run_length_transcoder();
	sevenish();
	shortest_substring();
	msqrt();
	three_stacks();
	tower_of_hanoi();
	url_shortener();
	utf_checker();
	running_median();
	spreadsheet_col_encoder();
	connect_four();
	three_stack_quack();
	lfu_cache();
	printf("\n");	//get rid of annoying % at end when you dont
	return 0;
}

void abs_path(){
	printf("\nGiven an absolute pathname that may have . or .. as part of it,\nreturn the shortest standardised path.");
	printf("\n\nFor example, given \"/usr/bin/../bin/./sripts/../\" return \"/usr/bin\".\n");
}

int setbits(int in){
	int t = 0;
	if(in == 1){
		++t;
		--in;
	}
	while(in != 0){
		t += (in % 2);
		in >>= 1;
	}
	return t;
}

void all_set_bits(){
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Pivotal.");
	printf("\nWrite an algorithm that finds the total number of set bits\nin all integers between 1 and N.");

	printf("\nC: %i has %i, %i has %i, %i has %i", 3, setbits(3), 248, setbits(248), 65532, setbits(65532));
	printf("\nasm: popcnt/sponge\n");
}

int and_all(int m, int n){
	int c = m;
	int t = m;
	while(c < n){
		++c;
		t &= c;
	}
	return t;
}

void and_m2n(){
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Yahoo.");
	printf("\nWrite a function that returns the bitwise AND of all integers\nbetween M and N, inclusive.");

	printf("\nC: %i to %i = %i, %i to %i = %i, %i to %i = %i", 1, 10, and_all(1, 10), 46, 64, and_all(46, 64), 4, 5, and_all(4, 5));
	printf("\nasm: sponge\n");
}

void bit_array(){
	printf("\nbit_array");
}

int countbrackets(char *s){
	int i=0;
	char c;
	int o=0;
	int l=0;
	while(i <= strlen(s)){
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
}

////&s is in esi
//xor ecx, ecx ;i
//xor eax, eax ;(
//xor ebx, ebx ;)
//loop: mov edx, [esi + ecx]
//cmp edx, 0	 ;null termd string
//je end
//cmp edx, (
//caddeq eax, 1
//cmp edx, )   ;could this and below be replaced with caddne ebx, 1?
//caddeq ebx, 1
//inc ecx
//jmp loop
//end: sub eax, ebx
//jge skip
//neg eax
//skip: ret

void bracket_count(){
	printf("\nbracket_count");
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Google.");
	printf("\nGiven a string of parentheses, write a function to compute\nthe minimum number of parentheses to be removed\nto make the string valid (i.e. each open parenthesis is eventually closed).");
	printf("\nFor example, given the string \"()())()\", you should return 1.\nGiven the string \")(\", you should return 2, since we must remove all of them.");
	printf("\n%s: %i, %s: %i, %s: %i", "()()", countbrackets("()()"),
			"(}]([](]][]", countbrackets("(}]([](]][]"),
			"(((((", countbrackets("((((("));
}

void cardinal_test(){
	printf("\ncardinal_test");
}

int clang(int i, char c){
	if(c == 'h')
		return i * (360/12);
	else return i * (360/60);
}

void clock_angle(){
	printf("\nclock_angle\n");
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Microsoft.");
	printf("\nGiven a clock time in hh:mm format, determine,");
	printf("\nto the nearest degree, the angle between the hour and the minute hands.");
	printf("\nBonus: When, during the course of a day, will the angle be zero?");
	printf("\n\nC: 12:17 = h=%i, m=%i", clang(12, 'h'), clang(17, 'm'));
	printf("\n   05:46 = h=%i, m=%i", clang(5, 'h'), clang(46, 'm'));
	printf("\n   02:01 = h=%i, m=%i", clang(2, 'h'), clang(1, 'm'));
	printf("\n\nC for loop searching for when angles match:");
	int ch, cm;
	for(int h = 1; h < 13; ++h){
		for(int m = 0; m < 61; ++m){
			ch = clang(h, 'h');
			cm = clang(m, 'm');
			if(ch == cm)
				printf("\nh=%i m=%i", h, m);
		}
	}
}

void fast_pow(){
	printf("\nfast_pow");
}

int fib_n(int n){
  int x = 1;
	int y = 1;
	n -= 2; //the first 2 terms are 1 and 1, we already have those
					//making our ""first"" term 2, the real 3rd term.
	if(n <= 0) return 1; //input 1 or 2 hits this
	while(n > 0){
	  y += x;
		--n;
		if (n == 0) //y and x have to be the result alternately, its this or xchg
		  break;
		x += y;
		--n;
	}
	return (x>y) ? x : y;
}

//// n is in edi
//mov ecx, #1
//mov eax, #1
//cmp edi, #1
//jg nnn
//ret
//nnn: cmp edi, #2
//jg hhh
//ret
//hhh: add ecx, eax
//dec edi
//jz end
//add eax, ecc
//dec edi
//jz end
//jmp hhh
//end: cmp eax, ecx
//cmovl eax, ecx
//ret

void fib(){
	printf("\nfib");
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Apple.");
	printf("\nImplement the function fib(n), which returns the\nnth number in the Fibonacci sequence, using only O(1) space.");
	printf("\nC: fib(%i) = %i, fib(%i) = %i, fib(%i) = %i", 3, fib_n(3), 7, fib_n(7), 20, fib_n(20));
	printf("\nasm: sponge\n");
}


int alen(int *in){
	return sizeof(in) / sizeof(typeof(*in));
}

//greedy
int greedyhops(int *in){
	int i = 0;
	int h = in[i];
	while(h!=0){
		h--;
		i++;
		h += in[i];
	}
	return (i==alen(in));
}

//not greedy
int notgreedyhops(int *in){
	int i = 0;
	int h = in[i];
	while(h!=0){
		h--;
		i++;
		h = in[i];
	}
	return (i==alen(in));
}

////alen is in edi
//push ebx
//push ecx
//xor eax eax
//xor ecx, ecx
//mov ebx, [array]
//cmp ebx, #0
//je end
//loop: dec ebx
//inc ecx
//add ebx, [array + ecx]    ;replace add with mov for non-greedy
//cmp ebx, #0
//jne loop
//end:
//cmp ecx, edi
//cmove eax, #1
//pop ecx
//pop ebx
//ret

char* ar2st(int *in, char* out){
	int idx = 0;
	int len = sizeof(in) / sizeof(in[0]);
	out = malloc(len + 1);
	while(idx<len){
		out[idx] = 48 + (in[idx++]); //0d48 aka 0x30 is ascii 0
	}
	out[idx] = '\0';
	return out;
}

void hops(){
	char* ar2stout;
	int hoptestone[] = {2, 0, 1, 0};
	int hoptesttwo[] = {1, 1, 0, 1};
	int hoptestthree[] = {3, 0, 0, 5, 0, 3, 8, 2};
	for(int i = 0; i < 4; ++i){
		printf("\n\n%i", hoptestone[i]);
	}
	printf("\nGiven an integer list where each number represents the number of hops you can make,");
	printf("determine whether you can reach to the last index starting at index 0.");
	printf("For example, [2, 0, 1, 0] returns True, while [1, 1, 0, 1] returns False.");
//	printf("\nC: Greedy: %s = %i,\n%s = %i,\n%s = %i",
//				ar2st(hoptestone, ar2stout),  greedyhops(hoptestone),
//				ar2st(hoptesttwo, ar2stout),  greedyhops(hoptesttwo),
//				ar2st(hoptestthree, ar2stout),greedyhops(hoptestthree));
//	printf("\nC: Not greedy: %s = %i,\n%s = %i,\n%s = %i",
//				ar2st(hoptestone, ar2stout),  greedyhops(hoptestone),
//				ar2st(hoptesttwo, ar2stout),  greedyhops(hoptesttwo),
//				ar2st(hoptestthree, ar2stout),greedyhops(hoptestthree));
	printf("\nasm: sponge");
	printf("\n");
}

void in_place_k_sort(){
	printf("\nin_place_k_sort");
}





void i2s(int in, char *s){
	s[3] = in%10;
	s[2] = (in/10)%10;
	s[1] = (in/100)%10;
	s[0] = (in/1000);
}
int s2i(char *s){
	int i = (int)s[0];
	i *= 10;
	i += (int)s[1];
	i *= 10;
	i += (int)s[2];
	i *= 10;
	i += (int)s[3];
	return i;
}
void miniswap(char *a, char *b){
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
void sorts(char *s){
	int sorted = 0;
	while(!sorted){
		sorted = 1;
		if(s[0] > s[1]){
			sorted = 0;
			miniswap(&s[0], &s[1]);
		}
		if(s[1] > s[2]){
			sorted = 0;
			miniswap(&s[1], &s[2]);
		}
		if(s[2] > s[3]){
			sorted = 0;
			miniswap(&s[2], &s[3]);
		}
	}
}
void flips(char *s, char *d){
//  d[3] = s[0];
//	d[2] = s[1];
//	d[1] = s[2];
//	d[0] = s[3];
}
int isgrtr(char *s, char *c){
	return (s2i(s) > s2i(c));
}
void subks(char *s, char *f){
	int tmp = s2i(s) - s2i(f);
	if(tmp < 0) tmp *= -1;
	i2s(tmp, s);
}
void swaps(char *s, char *d){
	char tmp[4];
	for(int i = 0; i < 4; ++i){
		tmp[i] = s[i];
		s[i] = d[i];
		d[i] = tmp[i];
	}
}
int kapr(int in){
	if((in == 1111)  ||
			(in == 2222) ||
			(in == 3333) ||
			(in == 4444) ||
			(in == 5555) ||
			(in == 6666) ||
			(in == 7777) ||
			(in == 8888) ||
			(in == 9999)) return -1;
	int c = 0;
	char s[4], f[4];
	i2s(in, s);
	while((s2i(s) != 6174)){
		printf("\ntop of while: %i, %i", s2i(s), s2i(f));
		sorts(s);
		printf("\nafter sorts: %i, %i", s2i(s), s2i(f));
		flips(s, f);
		printf("\nafter flips: %i, %i", s2i(s), s2i(f));
		if(isgrtr(s, f)){
		printf("\nafter isgrtr: %i, %i", s2i(s), s2i(f));
			subks(s, f);
		printf("\nafter subks: %i, %i", s2i(s), s2i(f));
		}
		else {
			swaps(s, f);
		printf("\nafter swaps: %i, %i", s2i(s), s2i(f));
			subks(f, s);
		printf("\nafter subks: %i, %i", s2i(s), s2i(f));
		}
		++c;
	}
	return c;
}

void kaprekar(){
	printf("\n\nhow many steps to kaprekar's constant (6174)");
	printf("\nwhere the result is the numerically ordered form of the input");
	printf("\nwhich then has its reverse subtracted from itself");
	printf("\nand the result is the input to the next cycle of this process");
	printf("\nuntil the result equals 6174");
	printf("\na number where all 4 digits are the same is an invalid input");
	int t1, t2, t3;
	t1 = kapr(3003);
	t2 = kapr(4178);
	t3 = kapr(9929);
	if((t1 == -1) || (t2 == -1) ||(t3 == -1))
		printf("\nkaprekar starting number must have 2 distinct digits\n");
	else
		printf("\n\nC: %i: %i, %i: %i, %i: %i",
						3003, t1, 4178, t2, 9929, t3);
}


void multi_bracket_count(){
	printf("\nmulti_bracket_count");
}

void no_division_division(){/*
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
dec eax*/
	printf("\nno_division_division");
}

void palintdrome(){/*
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
											*/
	printf("\npalintdrome");
}

void queue_stack(){/*
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
											*/
	printf("\nqueue_stack");
}

void reg_bal_brackets(){/*
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
													 */
	printf("\nreg_bal_brackets");
}

void rotated_array(){
	printf("\nrotated_array");
}

void run_length_transcoder(){/*
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
																*/
	printf("\nrun_length_transcoder");
}

void sevenish(){/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Zillow.

Let's define a "sevenish" number to be one which is either a power of 7, or the sum of unique powers of 7. The first few sevenish numbers are 1, 7, 8, 49, and so on. Create an algorithm to find the nth sevenish number.
									 */
	printf("\nsevenish");
}

void shortest_substring(){/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Square.

Given a string and a set of characters, return the shortest substring containing all the characters in the set.

For example, given the string "figehaeci" and the set of characters {a, e, i}, you should return "aeci".

If there is no substring containing all the characters in the set, return null.
														 */
	printf("\nshortest_substring");
}

void msqrt(){/*
Good morning! Here's your coding interview problem for today.

Given a real number n, find the square root of n. For example, given n = 9, return 3.
								*/
	printf("\nmsqrt");
}

void three_stacks(){/*
This problem was asked by Microsoft.

Implement 3 stacks using a single list:
											 */
	printf("\nthree_stacks");
}

void tower_of_hanoi(){/*
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
												 */
	printf("\ntower_of_hanoi");
}

void url_shortener(){/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Microsoft.

Implement a URL shortener with the following methods:

shorten(url), which shortens the url into a six-character alphanumeric string, such as zLg6wl.
restore(short), which expands the shortened string into the original url. If no such shortened string exists, return null.
Hint: What if we enter the same URL twice?

//hashing modulo etc*/
	printf("\nurl_shortener");
}

void utf_checker(){/*
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
											*/
	printf("\nutf_checker");
}

void running_median(){/*
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
												 */
	printf("\nrunning_median");
}

void spreadsheet_col_encoder(){/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Dropbox.

Spreadsheets often use this alphabetical encoding for its columns: "A", "B", "C", ..., "AA", "AB", ..., "ZZ", "AAA", "AAB", ....

Given a column number, return its alphabetical column id. For example, given 1, return "A". Given 27, return "AA".
																	*/
	printf("\nspreadsheet_col_encoder");
}

void connect_four(){
	printf("\nconnect_four");
}

void three_stack_quack(){
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Google.");
	printf("\nA quack is a data structure combining properties of both stacks and queues.");
	printf("\nIt can be viewed as a list of elements written left to right,");
	printf("\nsuch that three operations are possible:");
	printf("\npush(x): add a new item x to the left end of the list");
	printf("\npop(): remove and return the item on the left end of the list");
	printf("\npull(): remove the item on the right end of the list.");
	printf("\nImplement a quack using three stacks and O(1) additional memory, so that the");
	printf("\namortized time for any push, pop, or pull operation is O(1).");
	printf("\nwhy three stacks? same as queue_stack but add a pop(), ie done with 2 stacksd a pop(), ie done with 2 stacks");
}

void lfu_cache(){
	printf("\nGood morning! Here's your coding interview problem for today.");
	printf("\nThis problem was asked by Google.");
	printf("\nImplement an LFU (Least Frequently Used) cache.");
	printf("\nIt should be able to be initialized with a cache size n, and contain the following methods:");
	printf("\nset(key, value): sets key to value.");
	printf("\nIf there are already n items in the cache and we are adding a new item, then it should also remove the least frequently used item.");
	printf("\nIf there is a tie, then the least recently used key should be removed.");
	printf("\nget(key): gets the value at key. If no such key exists, return null.");
	printf("\nEach operation should run in O(1) time.");
}
