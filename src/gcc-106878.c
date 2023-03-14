int a;
void b(const int *c) {
  unsigned d = ((long)c | (long)&a) & 65535 << 16;
  long e = (long)c;
  if (d != (e & 65535 << 16))
    return;
}
