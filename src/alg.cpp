// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
  int c = 0;
  int lt = 0;
  int rt = size - 1;

    while (lt <= rt) {
        int mid = lt + (rt - lt) / 2;
        if (arr[mid] == value) {
 c++;
            int i = mid - 1;
            while (i >= 0 && arr[i] == value) {
 c++;
 i--;
            }
 i = mid + 1;
            while (i < size && arr[i] == value) {
 c++;
 i++;
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
