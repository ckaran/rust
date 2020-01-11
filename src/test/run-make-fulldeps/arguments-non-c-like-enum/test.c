#include <stdint.h>
#include <assert.h>

#include <stdio.h>

/* This is the code generated by cbindgen 0.12.1 for the `enum T` type
 * in nonclike.rs . */
enum T_Tag {
  A,
  B,
};
typedef uint8_t T_Tag;

typedef struct {
  uint64_t _0;
} A_Body;

typedef struct {
  T_Tag tag;
  union {
    A_Body a;
  };
} T;

/* This symbol is defined by the Rust staticlib built from
 * nonclike.rs. */
extern uint64_t t_add(T a, T b);

int main(int argc, char *argv[]) {
  (void)argc; (void)argv;

  T x = { .tag = A, .a = { ._0 = 1 } };
  T y = { .tag = A, .a = { ._0 = 10 } };

  uint64_t r = t_add(x, y);

  assert(11 == r);

  return 0;
}
