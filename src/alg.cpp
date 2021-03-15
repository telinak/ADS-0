// Copyright 2021 NNTU-CS
cmake_minimum_required(VERSION 2.8...3.13)
int gcd(int a, int b) {
  while (a != b) {
    if (a > b) {a -= b;}
    else
      b -= a; }
  return b;
}
