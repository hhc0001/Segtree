#include <algorithm>

namespace expand {
  #ifndef MERGERS
  #define MERGERS 1
  template<
  typename _Tp
  >struct add {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return a + b;
    }
  };
  template<
  typename _Tp,
  long long mod
  >struct addmod {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return (a + b) % mod;
    }
  };

  template<
  typename _Tp
  >struct mult {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return a * b;
    }
  };
  template<
  typename _Tp,
  long long mod
  >struct multmod {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return a * b % mod;
    }
  };

  template<
  typename _Tp
  >struct maximum {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return max(a, b);
    }
  };
  template<
  typename _Tp
  >struct minimum {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return min(a, b);
    }
  };

  template<
  typename _Tp
  >struct gcd {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      return !b? a : operator()(b, a % b);
    }
  };
  template<
  typename _Tp
  >struct lcm {
    _Tp operator ()(const _Tp &a, const _Tp &b) {
      gcd<_Tp> g;
      return a / g(a, b) * b;
    }
  };
  #endif // MERGERS
}
