void showArrayInt(int arrayInt[], int length) {
  printf("{%d, ", arrayInt[0]);

  for (int i = 1; i < length - 1; i++) {
    printf("%d, ", arrayInt[i]);
  }

  printf("%d}.\n", arrayInt[length - 1]);
}
