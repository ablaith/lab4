#include <stdio.h>


typedef struct {

     char *data;

     int key;

} item;

// print array
void printarray(item *a, int n) {
    printf("===========================\n");
    for (int i = 0; i < n; i++) {
        printf("%s \t %i\n", a[i].data, a[i].key);
     }
}

 

item array[] = {

     {"Bill", 62},

     {"Hill", 60},

     {"Barcak", 42},

     {"Dicky", 105},

     {"W.", 1},

};

  

// Sort the items

void sort(item *a, int n) { 

      //int i = 0, j = 0;

      //int s;


      // for (; i < n && s == 0; i++) 
      for(int i = 0; n > 1; i++){

              //s = 0;

            //   for (j = 0; j < n; j++) 
              for (int j = 0; j < n - 1; j++) {

                       if (a[j].key > a[j+1].key) {

                               item t = a[j];

                               a[j] = a[j+1];

                               a[j+1] = t;

                            //    s++;

                       }

               }

              n--;

       }

}

   

int main() {

    sort(array,5); 
    printarray(array, 5);
    return 0;

}