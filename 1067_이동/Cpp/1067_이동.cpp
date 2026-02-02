#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdio>

using namespace std;

typedef complex<double> cpx;
const double PI = acos(-1);
const int MAX_N = 262145; // 2^18 + alpha

int n;
int a[MAX_N], b[MAX_N];
cpx fa[MAX_N], fb[MAX_N];

void fft(cpx ar[], int size, bool inv) {
  for (int i = 1, j = 0; i < size; i++) {
    int bit = size >> 1;
    for (; j & bit; bit >>= 1) {
      j ^= bit;
    }
    j ^= bit;
    if (i < j) {
      swap(ar[i], ar[j]);
    }
  }

  for (int len = 2; len <= size; len <<= 1) {
    double ang = 2 * PI / len * (inv ? -1 : 1);
    cpx wlen(cos(ang), sin(ang));
    for (int i = 0; i < size; i += len) {
      cpx w(1);
      for (int j = 0; j < len / 2; j++) {
        cpx u = ar[i + j];
        cpx v = ar[i + j + len / 2] * w;
        ar[i + j] = u + v;
        ar[i + j + len / 2] = u - v;
        w *= wlen;
      }
    }
  }

  if (inv) {
    for (int i = 0; i < size; i++) {
      ar[i] /= size;
    }
  }
}

int main() {
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  int size = 1;
  while (size < 2 * n) {
    size <<= 1;
  }

  for (int i = 0; i < n; i++) {
    fa[i] = cpx(a[i], 0);
    fa[i + n] = cpx(a[i], 0);
  }
  for (int i = 2 * n; i < size; i++)
    fa[i] = 0;

  for (int i = 0; i < n; i++) {
    fb[i] = cpx(b[n - 1 - i], 0);
  }
  for (int i = n; i < size; i++)
    fb[i] = 0;

  fft(fa, size, false);
  fft(fb, size, false);

  for (int i = 0; i < size; i++) {
    fa[i] *= fb[i];
  }

  fft(fa, size, true);

  int ans = 0;
  for (int i = 0; i < 2 * n; i++) {
    int val = (int)round(fa[i].real());
    if (val > ans) {
      ans = val;
    }
  }

  printf("%d\n", ans);

  return 0;
}
