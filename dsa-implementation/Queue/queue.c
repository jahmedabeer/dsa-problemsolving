#include <stdio.h>

#define capacity 5

/* front => first element of the array
   rear  => last element of the array
*/

int queue[capacity], front = -1, rear = -1;


void enqueue(int val){
   // capacity - 1 -> last element of the array
   if( rear == capacity - 1 ) printf("\nQueue is full!");
      else{
         if( front == -1 ) front = 0;
         rear++;
         queue[rear] = val; // 0 => 5(f), 1 => 8(r), 2 => 12(r)
         printf("\nInserted -> %d", val);

         // f = front; r = rear
      }
}

void dequeue(){
   if( front == -1 ) printf("\nQueue is Empty!");
   else{
      printf("\nDeleted : %d", queue[front]); // 0 index (first out)
      front++; // 1 index (first)
      if( front > rear ) front = rear = -1;

      // 1 > 2 false
      // 2 > 2 false
      // 3 > 2 true front = -1;
   }
}

void display(){
   if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}

int main(){

enqueue(5);
enqueue(8);
enqueue(12);

dequeue();
dequeue();
dequeue();

display();

}