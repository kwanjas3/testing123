#include <iostream>
using namespace std;



void hanoi(int disk, char pos1, char pos2, char pos3) {
   if (disk == 1) {
      cout << "move disk " << disk << " from " << pos1 << " to " << pos3 << endl; // exit condition
     }
   else {
      hanoi(disk - 1, pos1, pos3, pos2);
      cout << "move disk " << disk << " from " << pos1 << " to " << pos3 << endl;
      hanoi(disk - 1, pos2, pos1, pos3);
   }

}


int main() {

   int discs;
   cout << "Enter the number of discs: " << endl;
   cin >> discs;
   hanoi(discs, 'A', 'B', 'C');
   system("pause");

}
