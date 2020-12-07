#include "hdboiler.h"
void all_set_bits();

int main(){
	abs_path();
	all_set_bits();
	and_m2n();
	bit_array();
	bracket_count();
	cardinal_test();
	clock_angle();
	fast_pow();
	fib();
	game_of_life();
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

<<<<<<< HEAD
=======
<<<<<<< HEAD

=======
>>>>>>> 2b9caff (lil more boiler)
>>>>>>> b38f94b (uhh)
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
	printf("%s: %i, %s: %i, %s: %i", "()()", countbrackets("()()"),
			"(}]([](]][]", countbrackets("(}]([](]][]"),
			"(((((", countbrackets("((((("));
}

void cardinal_test(){
	printf("\ncardinal_test");
}

void clock_angle(){
	printf("\nclock_angle");
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

void game_of_life(){
	printf("\ngame_of_life");
}

void hops(){
	printf("\nhops");
}

void in_place_k_sort(){
	printf("\nin_place_k_sort");
}

void kaprekar(){
	printf("\nkaprekar");
}

void multi_bracket_count(){
	printf("\nmulti_bracket_count");
}

void no_division_division(){
	printf("\nno_division_division");
}

void palintdrome(){
	printf("\npalintdrome");
}

void queue_stack(){
	printf("\nqueue_stack");
}

void reg_bal_brackets(){
	printf("\nreg_bal_brackets");
}

void rotated_array(){
	printf("\nrotated_array");
}

void run_length_transcoder(){
	printf("\nrun_length_transcoder");
}

void sevenish(){
	printf("\nsevenish");
}

void shortest_substring(){
	printf("\nshortest_substring");
}

void msqrt(){
	printf("\nmsqrt");
}

void three_stacks(){
	printf("\nthree_stacks");
}

void tower_of_hanoi(){
	printf("\ntower_of_hanoi");
}

void url_shortener(){
	printf("\nurl_shortener");
}

void utf_checker(){
	printf("\nutf_checker");
}

void running_median(){
	printf("\nrunning_median");
}

void spreadsheet_col_encoder(){
	printf("\nspreadsheet_col_encoder");
}

void connect_four(){
	printf("\nconnect_four\n");
}
