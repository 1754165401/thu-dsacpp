#pragma once

template <typename T> static Rank binSearch ( T* S, T const& e, Rank lo, Rank hi ) {
  /*DSA*/printf ( "BIN search (C)\n" );
  while ( lo < hi ) {
    Rank mi = ( lo + hi ) >> 1;
    ( e < S[mi] ) ? hi = mi : lo = mi + 1;
  }

  return lo - 1;
}
