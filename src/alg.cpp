// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
  int c = 0;
  int lt = 0;
  int rt = size - 1;
  while (lt <= rt) {
      int mid = lt + (rt - lt) / 2;
      if (arr[mid] == value) {
          c++;
          int rt = mid - 1;
          while (rt >= 0 && arr[rt] == value) {
              c++;
              rt--;
          }
          rt = mid + 1;
          while (rt < size && arr[rt] == value) {
              c++;
              rt++;
          }
          return c;
      } else if (arr[mid] < value) {
          lt = mid + 1;
      } else {
          rt = mid - 1;
      }
  }
  if (c == 0) {
      return 0;
  }
  return c;
}
