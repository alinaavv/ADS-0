// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (b) {
    int n = a % b;
    a = b;
    b = n;
  }
}
