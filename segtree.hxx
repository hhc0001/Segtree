#include <cstddef>
#include <vector>
#include <deque>

namespace expand {
  #ifndef SIZE_T
  #define SIZE_T long long
  #endif // SIZE_T
  #ifndef SEGTREE
  #define SEGTREE 1
  template<
  class Val = int,
  class Merge = std::less<int>
  >class segtree {
    private:
      struct node {
        SIZE_T c[4];
        Val num, lazy;
        node *fa, *c1, *c2;
        node() : fa(NULL), c1(NULL), c2(NULL), num(), lazy() {
          c[0] = c[1] = c[2] = c[3] = 0;
        }
      };

    public:
      node *rt;
      std::deque<int> aval;
      std::deque<node> v;

      segtree() : rt(NULL), aval(), v() {
      }
  };
  #endif // SEGTREE
}
