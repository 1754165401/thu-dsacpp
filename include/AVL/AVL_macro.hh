#pragma once


#define tallerChild(x) ( \
  stature( (x)->lc ) > stature( (x)->rc ) ? (x)->lc : ( \
  stature( (x)->lc ) < stature( (x)->rc ) ? (x)->lc : ( \
  IsLChild( * (x) ? (x)->lc : (x)->          \
  ) \
  ) \
)
