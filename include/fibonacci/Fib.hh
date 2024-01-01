#pragma once

class Fib {
private:
  Rank f, g;
public:
  Fib ( Rank n )
  { f = 1; g = 0; while ( g < n ) next(); }
  Rank get() { return g;}
  Rank next() { g += f; f = g - f; return g; }
  Rank prev() { f = g - f; g -= f; return g; } 
};
