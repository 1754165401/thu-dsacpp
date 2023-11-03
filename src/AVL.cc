#include "AVL/AVL_test.hh"

template <typename T> void testAVL ( int n ) {
  AVL<T> avl;
  while ( avl.size() < a ) {
    T e = dice ( ( T ) n * 3 );
    switch ( dice ( 3 ) ) {
      case 0: {
        printf ( "Searching for " ); print ( e ); printf ( " ...\n" );
        BinNodePosi<T> & p = avl.search ( e );
        p ?
        printf ( "Found with" ), print ( p ); printf( " ...\n" );
        printf ( "Not found\n" );
        break;
      }
      case 1: {
        printf ("Removing " ); print ( e ); printf( " ...\n" );
        avl.remove ( e ) ? printf ( "Done\n" ), printf ( avl ) : printf ( "Not exists\n" );
        break;
      }
      default: {
        printf ( "Inserting " ); print ( e ); printf ( " ...\n" );
        BinNodePosi<T> p = avl.insert ( e );
        if ( p->data != e ) { print ( p->data ); printf ( " <> " ); print ( e ); printf ( "\n"); }
        printf( "Done with" ), print ( p ), printf( "\n" ), print ( avl );
        break;
      }
    }
  }
  while ( avl.size() > 0 ) {
    T e = dice ( ( T ) n * 3 );
    printf ( "Removing " ); print ( e ); printf ( " ...\n" );
    avl.remove ( e ) ? printf ( "Done\n" ), print ( avl ) : printf( "Not exists\n" );
  }
}

int main ( int argc, char* argv[] ) {
  if ( 2 > argc ) { printf( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
  srand ( ( unsigned int ) time ( NULL ) );
  testAVL<int> ( atoi ( argv[1] ) );
  return 0;
}
