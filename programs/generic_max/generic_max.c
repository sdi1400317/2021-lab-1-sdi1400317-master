// Υλοποίηση μιας γενικής συνάρτησης max

#include <stdio.h>
#include "stats.h"

// Επιστρέφει το μεγαλύτερο από τα a, b, όπου η σύγκριση γίνεται
// με βάση τη συνάρτηση compare.


// Συγκρίνει 2 ακεραίους a, b

int compare_ints(Pointer a, Pointer b) {
    int* ia = a;
    int* ib = b;
    return *ia - *ib;       // αρνητικός, μηδέν ή θετικός, ανάλογα με τη διάταξη των a,b
}

int main() {
    int a1 = 1;
    int a2 = 5;
    int* max_a = generic_max(&a1, &a2, compare_ints);

    printf("max of %d, %d is %d\n", a1, a2, *max_a);


	// Κάντε uncomment τα παρακάτω και συμπληρώστε κατάλληλα

     char* s1 = "zzz";
     char* s2 = "aaa";
	 char* max_s = generic_max(s1, s2, compare_ints);


     printf("max of %s , %s is %s\n", s1, s2, max_s);
}
