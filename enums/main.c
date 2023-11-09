#include <stdio.h>

// enum Size {
//   Small, 
//   Medium,
//   Large,
//   ExtraLarge
// };

enum Size2 {
  Small = 27, 
  Medium = 31,
  Large = 35,
  ExtraLarge = 40
};

int main() {

//   enum Size shoeSize;

//   shoeSize = ExtraLarge;

//   printf("%d\n", shoeSize);

  
  enum Size2 shoeSize1 = Small;
  enum Size2 shoeSize2 = Medium;
  enum Size2 shoeSize3 = Large;
  enum Size2 shoeSize4 = ExtraLarge;
  
  shoeSize5 = Medium;

  printf("%d\n", shoeSize1);
  printf("%d\n", shoeSize2);
  printf("%d\n", shoeSize3);
  printf("%d\n", shoeSize4);


  return 0;
}
